
@interface _LABKDevice : NSObject <BKDeviceDelegate> {
    BKDevice * __BKDevice;
    BKDeviceDescriptor * _descriptor;
    _LAAuthenticationBiometricMethodShim * _shim;
}

@property (nonatomic, readonly) BKDevice *_BKDevice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BKDeviceDescriptor *descriptor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _LAAuthenticationBiometricMethodShim *shim;
@property (readonly) Class superclass;

+ (id)deviceWithDescriptor:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)_BKDevice;
- (bool)bioLockoutState:(long long*)arg1 forUser:(unsigned int)arg2 error:(id*)arg3;
- (id)createMatchOperationWithError:(id*)arg1;
- (id)createPresenceDetectOperationWithError:(id*)arg1;
- (id)descriptor;
- (bool)extendedBioLockoutState:(long long*)arg1 forUser:(unsigned int)arg2 error:(id*)arg3;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)identitiesWithError:(id*)arg1;
- (id)initWithDescriptor:(id)arg1 error:(id*)arg2;
- (id)shim;

@end
