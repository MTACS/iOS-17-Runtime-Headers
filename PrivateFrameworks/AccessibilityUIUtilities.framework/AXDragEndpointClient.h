
@interface AXDragEndpointClient : NSObject {
    NSXPCConnection * _connection;
}

+ (bool)isValidServiceName:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (void)getDragEndpoint:(id /* block */)arg1;
- (id)initWithServiceName:(id)arg1;

@end
