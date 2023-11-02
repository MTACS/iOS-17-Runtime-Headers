
@protocol GEOTransitDepartureSequence <NSObject>

@required

- (NSString *)containerDisplayName;
- (NSArray *)containerLabelItems;
- (unsigned long long)departureTimeDisplayStyle;
- (NSArray *)departures;
- (NSArray *)departuresValidForDate:(NSDate *)arg1;
- (NSString *)direction;
- (NSString *)displayName;
- (long long)displayStyle;
- (<GEOTransitDeparture> *)firstDepartureAfterDate:(NSDate *)arg1;
- (<GEOTransitDepartureFrequency> *)firstDepartureFrequencyOnOrAfterDate:(NSDate *)arg1;
- (<GEOTransitDeparture> *)firstDepartureOnOrAfterDate:(NSDate *)arg1;
- (<GEOTransitDeparture> *)firstDepartureValidForDate:(NSDate *)arg1;
- (NSDate *)firstOpenOperatingDateOnOrAfterDate:(NSDate *)arg1;
- (double)frequencyForSortingAtDate:(NSDate *)arg1;
- (<GEOTransitDepartureFrequency> *)frequencyToDescribeAtDate:(NSDate *)arg1;
- (bool)hasFrequencyAtDate:(NSDate *)arg1;
- (bool)hasWalkingETA;
- (NSString *)headsign;
- (bool)isDepartureDateInactive:(NSDate *)arg1 withReferenceDate:(NSDate *)arg2;
- (bool)isLowFrequency;
- (bool)isValidForDate:(NSDate *)arg1 inTimeZone:(NSTimeZone *)arg2;
- (<GEOTransitLine> *)line;
- (NSSet *)nextStopIDs;
- (unsigned long long)numberOfDeparturesAfterDate:(NSDate *)arg1;
- (NSArray *)operatingHours;
- (NSArray *)operatingHoursForDate:(NSDate *)arg1 inTimeZone:(NSTimeZone *)arg2;
- (NSString *)originName;
- (NSDate *)serviceResumesAfterDate:(NSDate *)arg1;
- (unsigned long long)stopId;
- (NSTimeZone *)timeZone;
- (unsigned long long)transitId;
- (unsigned long long)walkingETA;

@end
