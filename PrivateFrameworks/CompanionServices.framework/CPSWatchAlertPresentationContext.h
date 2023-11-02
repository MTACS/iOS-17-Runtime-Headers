
@interface CPSWatchAlertPresentationContext : NSObject <BSXPCCoding> {
    NSString * _deviceName;
    CPSRestrictedAccessRequest * _restrictedAccessRequest;
    CPSStoreAuthenticationRequest * _storeAuthenticationRequest;
    CPSSystemAuthenticationRequest * _systemAuthenticationRequest;
    NSXPCListenerEndpoint * _xpcEndpoint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *deviceName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CPSRestrictedAccessRequest *restrictedAccessRequest;
@property (nonatomic, retain) CPSStoreAuthenticationRequest *storeAuthenticationRequest;
@property (readonly) Class superclass;
@property (nonatomic, retain) CPSSystemAuthenticationRequest *systemAuthenticationRequest;
@property (nonatomic, retain) NSXPCListenerEndpoint *xpcEndpoint;

- (void).cxx_destruct;
- (id)description;
- (id)deviceName;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)restrictedAccessRequest;
- (void)setDeviceName:(id)arg1;
- (void)setRestrictedAccessRequest:(id)arg1;
- (void)setStoreAuthenticationRequest:(id)arg1;
- (void)setSystemAuthenticationRequest:(id)arg1;
- (void)setXpcEndpoint:(id)arg1;
- (id)storeAuthenticationRequest;
- (id)systemAuthenticationRequest;
- (id)xpcEndpoint;

@end
