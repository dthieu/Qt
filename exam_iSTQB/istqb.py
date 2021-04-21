# Import sys module

import sys

# Import QtWidgets and uic modules

from PyQt5 import QtWidgets, uic

# Create app object

app = QtWidgets.QApplication(sys.argv)

# Load GUI form and display

window = uic.loadUi("istqb.ui")

window.show()

# Start the event loop of the app or dialog box

app.exec()