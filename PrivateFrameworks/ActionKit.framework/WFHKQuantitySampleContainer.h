
@interface WFHKQuantitySampleContainer : NSObject <NSSecureCoding, WFNaming, WFStatisticsSampleProvider> {
    bool  _canProvideDataSamples;
    HKQuantitySample * _quantitySample;
    NSArray * _subcontainers;
    NSArray * _subsamples;
    HKUnit * _unit;
    double  _value;
}

@property (nonatomic, readonly) bool canProvideDataSamples;
@property (nonatomic, readonly) NSArray *dataSamples;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasSubsamples;
@property (nonatomic, readonly) bool hasValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKQuantitySample *quantitySample;
@property (nonatomic, retain) NSArray *subcontainers;
@property (nonatomic, retain) NSArray *subsamples;
@property (readonly) Class superclass;
@property (nonatomic, retain) HKUnit *unit;
@property (nonatomic, readonly) double value;
@property (nonatomic, readonly, copy) NSString *wfName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)canProvideDataSamples;
- (id)dataSamples;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasSubsamples;
- (bool)hasValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithSample:(id)arg1 unit:(id)arg2;
- (id)initWithSubsamples:(id)arg1 unit:(id)arg2;
- (double)normalizedValue;
- (id)quantitySample;
- (void)setQuantitySample:(id)arg1;
- (void)setSubcontainers:(id)arg1;
- (void)setSubsamples:(id)arg1;
- (void)setUnit:(id)arg1;
- (id)subcontainers;
- (id)subsamples;
- (id)unit;
- (void)updateValue:(id)arg1 fromStatisticsOperation:(long long)arg2;
- (double)value;
- (id)wfName;

@end
