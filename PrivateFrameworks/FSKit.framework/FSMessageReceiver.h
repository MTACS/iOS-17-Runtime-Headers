
@interface FSMessageReceiver : NSObject {
    FSMessageReceiverDelegate * _delegate;
    NSXPCListenerEndpoint * _endpoint;
    NSXPCListener * _listener;
}

@property (readonly) FSMessageReceiverDelegate *delegate;
@property (readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) NSXPCListener *listener;

+ (id)newWithDelegate:(id)arg1;
+ (id)newWithDelegate:(id)arg1 Locale:(id)arg2 preferredLanguages:(id)arg3;

- (void).cxx_destruct;
- (id)delegate;
- (id)endpoint;
- (id)getConnection;
- (id)initWithDelegate:(id)arg1 Locale:(id)arg2 preferredLanguages:(id)arg3;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
