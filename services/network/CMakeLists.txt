ccola_component(network static_library)

    ccola_sources(
        Address.cpp
        Address.hpp
        CertificatesMbedTls.cpp
        CertificatesMbedTls.hpp
        Connection.cpp
        Connection.hpp
        ConnectionFactoryWithNameResolver.cpp
        ConnectionFactoryWithNameResolver.hpp
        ConnectionMbedTls.cpp
        ConnectionMbedTls.hpp
        ConnectionSerial.cpp
        ConnectionSerial.hpp
        Datagram.hpp
        DnsResolver.cpp
        DnsResolver.hpp
        ExclusiveConnection.cpp
        ExclusiveConnection.hpp
        Http.cpp
        Http.hpp
        HttpClient.hpp
        HttpClientBasic.cpp
        HttpClientBasic.hpp
        HttpClientImpl.cpp
        HttpClientImpl.hpp
        HttpClientJson.cpp
        HttpClientJson.hpp
        HttpErrors.cpp
        HttpErrors.hpp
        HttpPageWebSocket.cpp
        HttpPageWebSocket.hpp
        HttpRequestParser.cpp
        HttpRequestParser.hpp
        HttpServer.cpp
        HttpServer.hpp
        LlmnrResponder.cpp
        LlmnrResponder.hpp
        Mqtt.hpp
        MqttClientImpl.hpp
        MqttClientImpl.cpp
        Multicast.hpp
        NameResolver.hpp
        NameResolverCache.cpp
        NameResolverCache.hpp
        Network.hpp
        SerialServer.cpp
        SerialServer.hpp
        SingleConnectionListener.cpp
        SingleConnectionListener.hpp
        SntpClient.cpp
        SntpClient.hpp
        StreamEcho.cpp
        StreamEcho.hpp
        TracingConnectionFactoryWithNameResolver.cpp
        TracingConnectionFactoryWithNameResolver.hpp
        TracingConnectionMbedTls.cpp
        TracingConnectionMbedTls.hpp
        TracingHttpClientImpl.cpp
        TracingHttpClientImpl.hpp
        TracingStatusHttpClientImpl.cpp
        TracingStatusHttpClientImpl.hpp
        WebSocket.cpp
        WebSocket.hpp
        WebSocketClientConnectionObserver.cpp
        WebSocketClientConnectionObserver.hpp
        WebSocketServerConnectionObserver.cpp
        WebSocketServerConnectionObserver.hpp
        WiFiNetwork.cpp
        WiFiNetwork.hpp
    )

    ccola_dependencies(
        infra.event
        infra.stream
        infra.syntax
        infra.timer
        crypto.mbed_tls
        hal.synchronous_interfaces
        services.tracer
    )

ccola_end_component()

ccola_subdirectories(
    test_doubles
    test
)
