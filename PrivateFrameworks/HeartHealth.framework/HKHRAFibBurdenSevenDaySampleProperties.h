
@interface HKHRAFibBurdenSevenDaySampleProperties : NSObject <NSSecureCoding> {
    NSNumber * _burdenPercentage;
    NSTimeZone * _timeZone;
}

@property (nonatomic, retain) NSNumber *burdenPercentage;
@property (nonatomic, retain) NSTimeZone *timeZone;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)burdenPercentage;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBurdenPercentage:(id)arg1 timeZone:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)setBurdenPercentage:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (id)timeZone;

@end
