
@protocol HMDDeviceSetupTrackingInfo

@required

- (NSString *)accessoryIDSIdentifier;
- (NSUUID *)accessoryUUID;
- (unsigned long long)endTime;
- (NSUUID *)identifier;
- (long long)role;
- (NSError *)sessionError;
- (NSString *)setupClientBundleID;
- (unsigned long long)startTime;

@end
