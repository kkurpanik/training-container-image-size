# [DevOps] How to build smaller container image?

## Prepare
- Clone this git repository
- Ensure You have podman and buildah installed

## Play

### Python Flask image based on Python (951MB)
```
$ cd python-image
$ buildah -t python-image .
$ podman run -d -p 5000:5000 localhost/python-image:latest
```

### Python Flask image based on CentOS (291MB)
```
$ cd centos-image
$ buildah -t centos-image .
$ podman run -d -p 5000:5000 localhost/centos-image:latest
```

### Python Flask image based on Alpine (59.4MB)
```
$ cd python-alpine-image
$ buildah -t python-alpine-image .
$ podman run -d -p 5000:5000 localhost/python-alpine-image:latest
```

### React.js image based on Node (1.11GB)
```
$ cd node-image
$ buildah -t node-image .
$ podman run -d -p 3000:3000 localhost/node-image:latest
```

### React.js image based on Node Alpine and multi-stage build (124MB)
```
$ cd node-multi-image
$ buildah -t node-multi-image .
$ podman run -d -p 3000:3000 localhost/node-multi-image:latest
```

### React.js image based on Nginx and multi-stage build (25.2MB)
```
$ cd node-nginx-image
$ buildah -t node-nginx-image .
$ podman run -d -p 80:80 localhost/node-nginx-image:latest
```

### Python Flask image based on distroless and multi-stage build (75MB)
```
$ cd python-distroless-image
$ buildah -t python-distroless-image .
$ podman run -d -p 5000:5000 localhost/python-distroless-image:latest
```

### Hello image based on scratch and busybox (1.16MB)
```
$ cd hello-scratch-busybox-image
$ buildah -t hello-scratch-busybox-image .
$ podman run --rm localhost/hello-scratch-busybox-image:latest
```

### Hello image based on scratch and simple C program (12.3KB)
```
$ cd c-scratch-image
$ buildah -t c-scratch-image .
$ podman run --rm localhost/c-scratch-image:latest
```

### Python Flask image built from scratch (18MB)
```
$ cd python-scratch-image
$ buildah -t python-scratch-image .
$ podman run -d -p 5000:5000 localhost/python-scratch-image:latest
```
