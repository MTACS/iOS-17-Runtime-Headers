
@interface HAPBTLEServiceSignature : HMFObject {
    bool  _authenticated;
    NSArray * _linkedServices;
    NSNumber * _serviceInstanceID;
    unsigned long long  _serviceProperties;
    NSUUID * _serviceType;
}

@property (getter=isAuthenticated, nonatomic, readonly) bool authenticated;
@property (nonatomic, readonly) NSArray *linkedServices;
@property (nonatomic, readonly, copy) NSNumber *serviceInstanceID;
@property (nonatomic, readonly) unsigned long long serviceProperties;
@property (nonatomic, readonly, copy) NSUUID *serviceType;

- (void).cxx_destruct;
- (id)description;
- (id)initWithServiceType:(id)arg1 serviceInstanceID:(id)arg2 serviceProperties:(unsigned long long)arg3 linkedServices:(id)arg4 authenticated:(bool)arg5;
- (bool)isAuthenticated;
- (id)linkedServices;
- (id)serviceInstanceID;
- (unsigned long long)serviceProperties;
- (id)serviceType;

@end
