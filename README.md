# AGA Ratings Program

This program scans the AGA Database for tournaments that have been added but not yet rated.

It is intended to be run after the tournaments have been uploaded into the database.

Compiling the code creates several binaries:

**TODO: document the binaries and what each one is used for**

## Building and Running with Docker

To build a docker image using the provided Dockerfile, first run:

```
docker build -t agaratings .
```

To run, first copy `config.env-example` to `config.env` and fill out the values there.

Finally, run with:

```
docker run --rm -it --env-file=config.env agaratings <binary-to-execute>
```

e.g., to check for tournaments that haven't been rated yet, `docker run --rm -it agaratings check`

## Building and Running the "old-fashioned" way

To build on a bare metal host, install the necessary dependencies, (see the `Dockerfile` for a list) then run `make`.

To run, first copy `config.env-example` to `config.env` and fill out the values there.

Now run:

`source config.env`

And finally, run the binary you want to use, e.g.:

`./check`
