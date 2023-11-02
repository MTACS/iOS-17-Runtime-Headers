
@interface HMDAccessoryFirmwareUpdatePresencePolicy : HMDAccessoryFirmwareUpdatePolicy <NSCopying> {
    HMDHome * _home;
    bool  _presenceNeeded;
}

@property (readonly) HMDHome *home;
@property (nonatomic, readonly) bool presenceNeeded;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)configure;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)evaluate;
- (void)handlePresenceChange:(id)arg1;
- (unsigned long long)hash;
- (id)home;
- (id)initWithAccessory:(id)arg1 presenceNeeded:(bool)arg2 workQueue:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)presenceNeeded;
- (void)registerForNotifications;

@end
