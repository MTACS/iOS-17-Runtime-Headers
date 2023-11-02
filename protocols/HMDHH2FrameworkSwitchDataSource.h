
@protocol HMDHH2FrameworkSwitchDataSource <NSObject>

@required

- (HMBCloudDatabase *)controller:(HMDHH2FrameworkSwitch *)arg1 cloudDatabaseWithContainerID:(CKContainerID *)arg2;
- (bool)isHH2Enabled;
- (unsigned long long)setupMode;

@end
