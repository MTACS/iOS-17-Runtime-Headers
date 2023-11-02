
@interface _FBSDisplayLayoutEndpointServices : NSObject {
    _FBSDisplayLayoutService * _sharedLock_services;
    unsigned long long  _sharedLock_servicesRefCnt;
}

+ (void)_checkinService:(id)arg1;
+ (id)_checkoutServiceWithEndpoint:(id)arg1 qos:(BOOL)arg2;

- (void).cxx_destruct;

@end
