
@protocol MTSleepSession <NSSecureCoding, NSObject>

@required

- (NSDate *)endDate;
- (unsigned long long)endReason;
- (NSArray *)intervals;
- (NSDictionary *)metadata;
- (bool)needsAdditionalProcessing;
- (long long)sampleType;
- (NSDate *)startDate;

@end
