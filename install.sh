set -e


python -m venv myenv2
source myenv2/bin/activate

cd tests

pip install -r requirements.txt



cd pybind11-project-example
python  setup.py install --force # regular python install is working
cd ..
chmod +x ./run_test.sh
bash run_test.sh

cd ..
python pybind_test.py