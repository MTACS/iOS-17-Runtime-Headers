
@interface HKSampleTypeChange : NSObject <NSSecureCoding> {
    double  _endTime;
    bool  _hasUnfrozenSeries;
    long long  _queryStrategy;
    HKSampleType * _sampleType;
    double  _startTime;
}

@property (nonatomic, readonly, copy) NSDateInterval *dateInterval;
@property (nonatomic, readonly) double endTime;
@property (nonatomic, readonly) bool hasUnfrozenSeries;
@property (nonatomic, readonly) long long queryStrategy;
@property (nonatomic, readonly, copy) HKSampleType *sampleType;
@property (nonatomic, readonly) double startTime;

+ (id)sampleTypeChangeWithSampleType:(id)arg1 dateInterval:(id)arg2 hasUnfrozenSeries:(bool)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_extendDateIntervalWithSample:(id)arg1;
- (id)_initWithSampleType:(id)arg1 startTime:(double)arg2 endTime:(double)arg3 hasUnfrozenSeries:(bool)arg4 queryStrategy:(long long)arg5;
- (id)dateInterval;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)endTime;
- (bool)hasUnfrozenSeries;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)queryStrategy;
- (id)sampleType;
- (double)startTime;

@end
