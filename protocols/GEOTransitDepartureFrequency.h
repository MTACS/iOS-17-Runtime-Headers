
@protocol GEOTransitDepartureFrequency <NSObject>

@required

- (long long)displayFrequency;
- (NSDate *)firstTimeInFrequency;
- (double)frequencyForSorting;
- (long long)frequencyType;
- (bool)isEstimate;
- (bool)isValidAtDate:(NSDate *)arg1;
- (NSDate *)lastTimeInFrequency;
- (long long)maxFrequency;
- (long long)minFrequency;

@end
