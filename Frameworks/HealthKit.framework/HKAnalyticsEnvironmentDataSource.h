
@interface HKAnalyticsEnvironmentDataSource : NSObject {
    HKCalendarCache * _calendarCache;
}

@property (nonatomic, readonly, copy) NSString *activePairedDeviceHousingColor;
@property (nonatomic, readonly, copy) NSString *activePairedDeviceModelNumber;
@property (nonatomic, readonly) NSString *activePairedDeviceOSBuildNumber;
@property (nonatomic, readonly) NSString *activePairedDeviceProductType;
@property (nonatomic, readonly, copy) NSString *activePairedDeviceRegionInfo;
@property (nonatomic, readonly) HKCalendarCache *calendarCache;
@property (nonatomic, readonly) NSDate *currentDate;
@property (nonatomic, readonly) bool isImproveHealthAndActivityEnabled;

- (void).cxx_destruct;
- (id)activePairedDeviceHousingColor;
- (id)activePairedDeviceModelNumber;
- (id)activePairedDeviceOSBuildNumber;
- (id)activePairedDeviceProductType;
- (id)activePairedDeviceRegionInfo;
- (id)calendarCache;
- (id)currentDate;
- (id)init;
- (bool)isImproveHealthAndActivityEnabled;

@end
