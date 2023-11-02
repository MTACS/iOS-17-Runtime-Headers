
@protocol GEOTransitDeparture <NSObject>

@required

- (NSDate *)departureDate;
- (NSString *)displayName;
- (bool)isCanceled;
- (bool)isPastDeparture;
- (bool)isPastDepartureRelativeToDate:(NSDate *)arg1 usingGracePeriod:(bool)arg2;
- (NSDate *)liveDepartureDate;
- (long long)liveStatus;
- (<GEOServerFormattedString> *)liveStatusString;
- (NSDate *)scheduledDepartureDate;
- (unsigned long long)tripIdentifier;
- (NSString *)vehicleIdentifier;

@end
