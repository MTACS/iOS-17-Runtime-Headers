
@interface AAFService : NSObject <NSXPCListenerDelegate> {
    id  _exportedObject;
    Protocol * _exportedProtocol;
    NSArray * _preConnectEntitlements;
    NSXPCListener * _serviceListener;
    NSString * _serviceName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) id exportedObject;
@property (nonatomic, readonly) Protocol *exportedProtocol;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *preConnectEntitlements;
@property (nonatomic, retain) NSXPCListener *serviceListener;
@property (nonatomic, readonly) NSString *serviceName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureListener;
- (void)configureExportedInterface:(id)arg1;
- (id)exportedObject;
- (id)exportedProtocol;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)preConnectEntitlements;
- (id)serviceListener;
- (id)serviceName;
- (void)setServiceListener:(id)arg1;
- (bool)shouldAcceptNewConnection:(id)arg1;
- (void)startup;

@end
