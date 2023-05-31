FROM debian:bookworm as builder
RUN apt update && apt install -y clang build-essential cmake

COPY . /chompjs
WORKDIR /chompjs
RUN cd fuzz && make

FROM debian:bookworm
COPY --from=builder /chompjs/fuzz /