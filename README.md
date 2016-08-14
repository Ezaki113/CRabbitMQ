# CRabbitMQ
Swift wrapper for [RabbitMQ C AMQP client library](https://github.com/alanxz/rabbitmq-c)

## Install

- OSX
```bash
$ brew install rabbitmq-c
```

- Ubuntu
```bash
$ apt-get install librabbitmq4
```

- Add dependency in your Package.swift
```swift
import PackageDescription

let package = Package(
	dependencies: [
		.Package(url: "https://github.com/Ezaki113/CRabbitMQ.git", majorVersion: 0, minor: 2)
	]
)
```

- Build on OSX
```bash
$ swift build -Xcc -I/usr/local/include -Xlinker -L/usr/local/lib/
```

- Build on Ubuntu
```bash
$ swift build -Xcc -I/usr/include/
```
