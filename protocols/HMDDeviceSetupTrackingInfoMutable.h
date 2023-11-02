
@protocol HMDDeviceSetupTrackingInfoMutable <HMDDeviceSetupTrackingInfo>

@required

- (NSString *)accessoryIDSIdentifier;
- (NSUUID *)accessoryUUID;
- (NSString *)category;
- (unsigned long long)endTime;
- (NSError *)sessionError;
- (void)setAccessoryIDSIdentifier:(NSString *)arg1;
- (void)setAccessoryUUID:(NSUUID *)arg1;
- (void)setCategory:(NSString *)arg1;
- (void)setEndTime:(unsigned long long)arg1;
- (void)setSessionError:(NSError *)arg1;
- (void)setSetupClientBundleID:(NSString *)arg1;
- (void)setStartTime:(unsigned long long)arg1;
- (NSString *)setupClientBundleID;
- (unsigned long long)startTime;

@end
