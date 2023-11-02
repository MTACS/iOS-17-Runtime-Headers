
@interface CSDeviceUnblockPolicy : NSObject {
    CSDeviceUnblockPolicyEnvironment * _env;
}

- (void).cxx_destruct;
- (bool)canUnblockDevice;
- (bool)canUnblockDeviceUsingErase;
- (bool)canUnblockDeviceUsingRecovery;
- (id)initWithEnvironment:(id)arg1;

@end
