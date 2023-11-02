
@protocol HMDCloudManagerDelegate

@required

- (void)archiveServerToken:(NSData *)arg1;
- (void)eraseLocalHomeData;
- (void)fetchAllZones;
- (void)fetchHomeDataFromCloudWithCloudConflict:(bool)arg1 withDelay:(double)arg2;
- (void)fetchHomeFromCloudZone:(NSUUID *)arg1 cloudConflict:(bool)arg2 withDelay:(double)arg3;
- (void)fetchHomeManagerCloudConflict:(bool)arg1 withDelay:(double)arg2;
- (void)kickAccountAvailabilityCheck;
- (void)makeSureWeAreRunningInRightEnvironment:(bool)arg1;
- (void)notifyZonesCloudZoneReady:(NSArray *)arg1;
- (void)reloadHomeDataFromLocalStore:(bool)arg1;
- (void)schedulePostFetch;
- (void)uploadHomeConfigToCloud:(bool)arg1 withDelay:(double)arg2;
- (void)verifyHomeDataFromCloud:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, NSError *, void*

@end
