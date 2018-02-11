pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                echo 'Testing..'
                bat ''' 
			        echo Multiline || exit %errorlevel%
			        echo Example
			        call "C:/Program Files (x86)/Microsoft Visual Studio 10.0/Common7/Tools/vsvars32.bat"
			        mkdir build
			        cd build
			        cmake -D CMAKE_CONFIGURATIONTYPES=Release -G "NMake Makefiles" ..
			        nmake
    		'''
            }
        }
        stage('Deploy') {
            steps {
                echo 'Deploying....'
            }
        }
    }
}