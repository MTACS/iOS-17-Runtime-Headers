
@interface HMDBackgroundOperationManagerCurrentDeviceStateDataSource : NSObject <HMDBackgroundOperationManagerCurrentDeviceStateDataSource>

@property (nonatomic, readonly) bool isAppleTV;
@property (nonatomic, readonly) bool isDesignatedFMFDevice;
@property (nonatomic, readonly) bool isHomePod;
@property (nonatomic, readonly) bool isiOSDevice;

- (id)currentDate;
- (bool)isAppleTV;
- (bool)isDesignatedFMFDevice;
- (bool)isHomePod;
- (bool)isiOSDevice;
- (id)timerWithTimeInterval:(double)arg1 options:(unsigned long long)arg2 label:(id)arg3;

@end
