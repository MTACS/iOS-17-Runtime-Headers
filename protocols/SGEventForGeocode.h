
@protocol SGEventForGeocode <NSObject>

@required

- (NSDate *)geocodeEndDate;
- (NSTimeZone *)geocodeEndTimeZone;
- (NSArray *)geocodeLocations;
- (NSDate *)geocodeStartDate;
- (NSTimeZone *)geocodeStartTimeZone;
- (id)geocodedEventWithStartDate:(NSDate *)arg1 startTimeZone:(NSTimeZone *)arg2 endDate:(NSDate *)arg3 endTimeZone:(NSTimeZone *)arg4 locations:(NSArray *)arg5;
- (unsigned long long)geocodingMode;
- (NSString *)loggingIdentifier;
- (NSString *)poiFilters;

@end
