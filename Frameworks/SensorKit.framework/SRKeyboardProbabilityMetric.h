
@interface SRKeyboardProbabilityMetric : NSObject <NSSecureCoding> {
    NSMutableArray * _mutableSampleValues;
    long long  _totalDataSamples;
    NSUnit * _unitType;
}

@property (readonly, copy) NSArray *distributionSampleValues;
@property (retain) NSMutableArray *mutableSampleValues;
@property (nonatomic) long long totalDataSamples;
@property (copy) NSUnit *unitType;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)distributionSampleValues;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableSampleValues;
- (void)setMutableSampleValues:(id)arg1;
- (void)setTotalDataSamples:(long long)arg1;
- (void)setUnitType:(id)arg1;
- (long long)totalDataSamples;
- (id)unitType;

@end
