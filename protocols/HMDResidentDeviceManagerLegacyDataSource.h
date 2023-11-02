
@protocol HMDResidentDeviceManagerLegacyDataSource <HMDResidentDeviceManagerDataSource>

@required

- (HMDHomePrimaryResidentInitialReachabilityManager *)createInitialReachabilityManagerWithUUID:(NSUUID *)arg1;
- (HMDResidentDevice *)createResidentDeviceWithModel:(HMDResidentDeviceModel *)arg1;

@end
