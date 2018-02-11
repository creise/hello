#!groovy
pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                echo 'Testing..'
                bat '''
			        call "C:/Program Files (x86)/Microsoft Visual Studio 10.0/Common7/Tools/vsvars32.bat" || exit %errorlevel%
			        mkdir build
			        cd build
			        cmake -D CMAKE_CONFIGURATIONTYPES=Release -G "NMake Makefiles" ..
			        nmake
    		    '''
                warnings consoleParsers: [[parserName: 'MSBuild']]
            }
        }
        stage('Deploy') {
            steps {
                echo 'BlaBla....'
            }
        }
    }
}