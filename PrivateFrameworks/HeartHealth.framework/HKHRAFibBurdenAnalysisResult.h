
@interface HKHRAFibBurdenAnalysisResult : NSObject <NSSecureCoding> {
    NSNumber * _burdenPercentage;
    bool  _burdenPercentageWasClampedToLowerBound;
    long long  _unavailabilityReason;
}

@property (nonatomic, readonly) NSNumber *burdenPercentage;
@property (nonatomic) bool burdenPercentageWasClampedToLowerBound;
@property (nonatomic, readonly) long long unavailabilityReason;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)burdenPercentage;
- (bool)burdenPercentageWasClampedToLowerBound;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBurdenPercentage:(id)arg1 burdenPercentageWasClampedToLowerBound:(bool)arg2 unavailabilityReason:(long long)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setBurdenPercentageWasClampedToLowerBound:(bool)arg1;
- (long long)unavailabilityReason;

@end
