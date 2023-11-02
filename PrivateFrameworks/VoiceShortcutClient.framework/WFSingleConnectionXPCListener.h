
@interface WFSingleConnectionXPCListener : NSObject <NSXPCListenerDelegate> {
    NSXPCConnection * _activeConnection;
    NSXPCInterface * _exportedInterface;
    id  _exportedObject;
    NSXPCListener * _listener;
}

@property (nonatomic, retain) NSXPCConnection *activeConnection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSXPCListenerEndpoint *endpoint;
@property (nonatomic, readonly) NSXPCInterface *exportedInterface;
@property (nonatomic, readonly) id exportedObject;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSXPCListener *listener;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activeConnection;
- (id)endpoint;
- (id)exportedInterface;
- (id)exportedObject;
- (id)initWithExportedObject:(id)arg1 exportedInterface:(id)arg2;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setActiveConnection:(id)arg1;

@end
