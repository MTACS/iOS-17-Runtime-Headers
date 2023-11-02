
@interface PKBiometrics : NSObject {
    BKDevicePearl * _pearlDevice;
    BKDeviceTouchID * _touchIDDevice;
}

@property (nonatomic, retain) BKDevicePearl *pearlDevice;
@property (nonatomic, retain) BKDeviceTouchID *touchIDDevice;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)deviceForType:(long long)arg1;
- (long long)deviceTypeForIdentityType:(long long)arg1;
- (id)identitiesForIdentityType:(long long)arg1;
- (id)init;
- (bool)isPeriocularEnrollmentSupported;
- (long long)maximumIdentityCountForIdentityType:(long long)arg1;
- (id)nameForIdentity:(id)arg1;
- (id)nextIdentityNameForIdentityType:(long long)arg1;
- (id)pearlDevice;
- (bool)removeIdentity:(id)arg1;
- (bool)setName:(id)arg1 forIdentity:(id)arg2;
- (void)setPearlDevice:(id)arg1;
- (void)setTouchIDDevice:(id)arg1;
- (id)touchIDDevice;

@end
