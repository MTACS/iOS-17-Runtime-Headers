
@protocol HMDResidentDeviceManagerRoarBackingStore

@required

- (NSString *)cloudChangeUpdateNotificationName;
- (NSArray *)findResidents:(HMDDevice *)arg1 outHasResidents:(bool*)arg2;
- (HMDBackingStoreResidentUpdateResult *)handleCloudResidentChange:(NSNotification *)arg1 currentResidents:(NSSet *)arg2 isCurrentDevicePrimaryResident:(bool)arg3 currentDevice:(HMDDevice *)arg4;
- (bool)hasAnyResident;
- (HMFFuture *)residentsRequiringReachabilityUpdate:(NSSet *)arg1;
- (void)updateIdentifiersForAvailableResidentDevices:(NSArray *)arg1;
- (void)updateReachabilityForResidents:(NSSet *)arg1;

@end
