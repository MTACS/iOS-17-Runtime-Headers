
@protocol GEOTransitTimeRange <NSObject>

@required

- (bool)contains:(NSDate *)arg1;
- (double)duration;
- (NSDate *)endDate;
- (NSDate *)startDate;
- (double)startTime;

@end
