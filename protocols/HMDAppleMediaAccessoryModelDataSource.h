
@protocol HMDAppleMediaAccessoryModelDataSource

@required

- (HMDAppleMediaAccessoryModel *)modelforAccessory:(HMDAppleMediaAccessory *)arg1 changeType:(unsigned long long)arg2 uuid:(NSUUID *)arg3 parentUUID:(NSUUID *)arg4;

@end
