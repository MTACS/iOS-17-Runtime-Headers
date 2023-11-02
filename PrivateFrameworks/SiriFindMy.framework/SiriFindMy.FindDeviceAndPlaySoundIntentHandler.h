
@interface SiriFindMy.FindDeviceAndPlaySoundIntentHandler : INExtension <FindDeviceAndPlaySoundIntentHandling> {
    void appInstalledState;
    void deviceLockStateProvider;
    void deviceState;
    void findDeviceSession;
}

- (void).cxx_destruct;
- (void)confirmFindDeviceAndPlaySound:(id)arg1 completion:(id /* block */)arg2;
- (void)handleFindDeviceAndPlaySound:(id)arg1 completion:(id /* block */)arg2;
- (id)handlerForIntent:(id)arg1;
- (id)init;
- (void)resolveDevicesForFindDeviceAndPlaySound:(id)arg1 withCompletion:(id /* block */)arg2;

@end
