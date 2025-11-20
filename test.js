const isInput = Boolean(process.argv[2] === 'true');

function doit() {
    console.log(process.argv[2], isInput)
}

doit();
