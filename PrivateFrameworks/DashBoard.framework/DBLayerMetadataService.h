
@interface DBLayerMetadataService : NSObject <BSInvalidatable, CRLayerPropertyService, NSXPCListenerDelegate> {
    NSXPCConnection * _connection;
    <DBLayerMetadataServiceDelegate> * _delegate;
    NSXPCListener * _layerMetadataServiceListener;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DBLayerMetadataServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCListener *layerMetadataServiceListener;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)connection;
- (id)delegate;
- (id)init;
- (void)invalidate;
- (id)layerMetadataServiceListener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)sendLayerProperties:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLayerMetadataServiceListener:(id)arg1;

@end
