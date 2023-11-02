
@interface POUISettingsManager : NSObject {
    POUIServiceConnection * _serviceConnection;
}

- (void).cxx_destruct;
- (id)deviceStatus;
- (id)init;
- (void)startDeviceAction:(long long)arg1;
- (void)startUserAction:(long long)arg1 forUserName:(id)arg2;
- (id)statusForUserName:(id)arg1;

@end
