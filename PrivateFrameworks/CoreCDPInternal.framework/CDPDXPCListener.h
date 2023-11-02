
@interface CDPDXPCListener : NSObject <NSXPCListenerDelegate> {
    NSXPCListener * _listener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCListener *listener;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (unsigned long long)_clientTypeForBundleID:(id)arg1;
- (unsigned long long)_clientTypeForConnection:(id)arg1;
- (bool)_connection:(id)arg1 hasEntitlement:(id)arg2;
- (bool)_shouldAcceptNewConnectionWithEntitlements:(unsigned long long)arg1;
- (id)init;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setListener:(id)arg1;
- (void)start;

@end
