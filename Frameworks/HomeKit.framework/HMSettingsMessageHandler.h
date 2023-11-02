
@interface HMSettingsMessageHandler : NSObject {
    _HMContext * _context;
    NSUUID * _homeTargetUUID;
    NSString * _targetSettingsType;
    NSUUID * _userTargetUUID;
}

- (void).cxx_destruct;
- (void)configureWithContext:(id)arg1;
- (void)sendUpdateValueMessage:(id)arg1 value:(id)arg2 completionHandler:(id /* block */)arg3;

@end
