
@interface _HKDateIntervalCollection : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _anchorDate;
    double  _approximateIntervalDuration;
    bool  _canUseFastDateMath;
    double  _canonicalIntervalDuration;
    bool  _enableRiskyFastMathOptimization;
    NSDateComponents * _intervalComponents;
    long long  _maxComponent;
}

@property (nonatomic, readonly, copy) NSDate *anchorDate;
@property (nonatomic) bool enableRiskyFastMathOptimization;
@property (nonatomic, readonly, copy) NSDateComponents *intervalComponents;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dateByAddingInterval:(long long)arg1 toDate:(id)arg2 calendar:(id)arg3 workComponents:(id)arg4;
- (id)anchorDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateIntervalAtIndex:(long long)arg1;
- (id)dateIntervalContainingDate:(id)arg1 index:(long long*)arg2;
- (id)dateIntervalForIntervalsContainingInterval:(id)arg1;
- (bool)enableRiskyFastMathOptimization;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAnchorDate:(id)arg1 intervalComponents:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)intervalComponents;
- (bool)isEqual:(id)arg1;
- (void)setEnableRiskyFastMathOptimization:(bool)arg1;

@end
