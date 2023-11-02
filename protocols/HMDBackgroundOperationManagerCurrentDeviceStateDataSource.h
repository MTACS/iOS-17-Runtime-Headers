
@protocol HMDBackgroundOperationManagerCurrentDeviceStateDataSource

@required

- (NSDate *)currentDate;
- (bool)isAppleTV;
- (bool)isDesignatedFMFDevice;
- (bool)isHomePod;
- (bool)isiOSDevice;
- (HMFTimer *)timerWithTimeInterval:(double)arg1 options:(unsigned long long)arg2 label:(NSString *)arg3;

@end
