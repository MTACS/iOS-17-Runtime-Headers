
@interface FCDerivedPersonalizationData : NSObject <FCDerivedPersonalizationData, FCPersonalizationDataGeneratorType, NSCopying, NSSecureCoding> {
    NSDictionary * _aggregatesByFeatureKey;
    double  _decayRate;
    unsigned long long  _scoringType;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double decayRate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long scoringType;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)aggregateForFeatureKey:(id)arg1;
- (id)aggregatesForFeatureKeys:(id)arg1;
- (id)allAggregates;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)decayRate;
- (void)encodeWithCoder:(id)arg1;
- (id)generateDerivedData;
- (id)init;
- (id)initWithAggregates:(id)arg1 scoringType:(unsigned long long)arg2;
- (id)initWithAggregates:(id)arg1 scoringType:(unsigned long long)arg2 decayRate:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)scoringType;

@end
