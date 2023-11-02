
@interface _OSInactivityPredictorBackupHourEntry : NSObject <NSSecureCoding> {
    double  _averageDuration;
    double  _stdDev;
}

@property (nonatomic) double averageDuration;
@property (nonatomic) double stdDev;

+ (id)descriptionWithHistoryEntries:(id)arg1;
+ (bool)supportsSecureCoding;

- (double)averageDuration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAverageDuration:(double)arg1;
- (void)setStdDev:(double)arg1;
- (double)stdDev;

@end
