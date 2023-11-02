
@interface HKHRAFibBurdenHistogramResult : NSObject <NSSecureCoding> {
    HKHRAFibBurdenDayOfWeekHistogram * _dayOfWeekHistogram;
    HKHRAFibBurdenTimeOfDayHistogram * _timeOfDayHistogram;
}

@property (nonatomic, readonly) HKHRAFibBurdenDayOfWeekHistogram *dayOfWeekHistogram;
@property (nonatomic, readonly) HKHRAFibBurdenTimeOfDayHistogram *timeOfDayHistogram;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dayOfWeekHistogram;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDayOfWeekHistogram:(id)arg1 timeOfDayHistogram:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)timeOfDayHistogram;

@end
