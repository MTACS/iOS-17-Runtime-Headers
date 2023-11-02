
@interface HKMCStatistics : NSObject <HKRedactedDescription, NSCopying, NSSecureCoding> {
    NSNumber * _cycleLengthLowerPercentile;
    NSNumber * _cycleLengthMedian;
    NSNumber * _cycleLengthUpperPercentile;
    NSNumber * _firstMenstruationStartDayIndex;
    NSNumber * _lastMenstruationStartDayIndex;
    NSNumber * _menstruationLengthLowerPercentile;
    NSNumber * _menstruationLengthMedian;
    NSNumber * _menstruationLengthUpperPercentile;
    long long  _numberOfCycles;
}

@property (nonatomic, readonly, copy) NSNumber *cycleLengthLowerPercentile;
@property (nonatomic, copy) NSNumber *cycleLengthMedian;
@property (nonatomic, readonly, copy) NSNumber *cycleLengthUpperPercentile;
@property (nonatomic, readonly, copy) NSNumber *firstMenstruationStartDayIndex;
@property (readonly, copy) NSString *hk_redactedDescription;
@property (nonatomic, readonly, copy) NSNumber *lastMenstruationStartDayIndex;
@property (nonatomic, readonly, copy) NSNumber *menstruationLengthLowerPercentile;
@property (nonatomic, copy) NSNumber *menstruationLengthMedian;
@property (nonatomic, readonly, copy) NSNumber *menstruationLengthUpperPercentile;
@property (nonatomic, readonly) long long numberOfCycles;

+ (id)_emptyStatistics;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cycleLengthLowerPercentile;
- (id)cycleLengthMedian;
- (id)cycleLengthUpperPercentile;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)firstMenstruationStartDayIndex;
- (unsigned long long)hash;
- (id)hk_redactedDescription;
- (id)initWithCoder:(id)arg1;
- (id)initWithNumberOfCycles:(long long)arg1 firstMenstruationStartDayIndex:(id)arg2 lastMenstruationStartDayIndex:(id)arg3 cycleLengthMedian:(id)arg4 cycleLengthLowerPercentile:(id)arg5 cycleLengthUpperPercentile:(id)arg6 menstruationLengthMedian:(id)arg7 menstruationLengthLowerPercentile:(id)arg8 menstruationLengthUpperPercentile:(id)arg9;
- (bool)isEqual:(id)arg1;
- (id)lastMenstruationStartDayIndex;
- (id)menstruationLengthLowerPercentile;
- (id)menstruationLengthMedian;
- (id)menstruationLengthUpperPercentile;
- (long long)numberOfCycles;
- (void)setCycleLengthMedian:(id)arg1;
- (void)setMenstruationLengthMedian:(id)arg1;

@end
