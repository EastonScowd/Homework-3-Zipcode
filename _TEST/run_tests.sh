#!/bin/bash

echo '\033[0;33m' "###################################################################" '\033[m'
echo '\033[0;33m' "The following should produce an error" '\033[m'
echo '\033[0;33m' "###################################################################" '\033[m'
echo "456\nn" | _TEST/a.out
echo
echo "456 71\nn" | _TEST/a.out
echo
echo "456789\nn" | _TEST/a.out
echo
echo "457-1\nn" | _TEST/a.out
echo
echo '\033[0;33m' "###################################################################" '\033[m'
echo '\033[0;33m' "The following should produce the correct output" '\033[m'
echo '\033[0;33m' "###################################################################" '\033[m'

echo '\033[0;33m' "Test: 45701 should equal |:|::| :|:|: |:::| ||::: :::|| ::||:|" '\033[m'
echo '\033[0;33m' "-------------------------------------------------------------------" '\033[m'
echo "45701\nn" | _TEST/a.out 
echo
echo '\033[0;33m' "###################################################################" '\033[m'

echo '\033[0;33m' "Test: 20034 should equal |::|:| ||::: ||::: ::||: :|::| :::|||" '\033[m'
echo '\033[0;33m' "-------------------------------------------------------------------" '\033[m'
echo "20034\nn" | _TEST/a.out 
echo
echo '\033[0;33m' "###################################################################" '\033[m'

echo '\033[0;33m' "Test: 23465 should equal |::|:| ::||: :|::| :||:: :|:|: ||:::|" '\033[m'
echo '\033[0;33m' "-------------------------------------------------------------------" '\033[m'
echo "23465\nn" | _TEST/a.out 
echo
echo '\033[0;33m' "###################################################################" '\033[m'

