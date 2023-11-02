
@interface deoc_modelOutput : NSObject <MLFeatureProvider> {
    NSDictionary * _classProbability;
    long long  _next_drain_is_significant;
}

@property (nonatomic, retain) NSDictionary *classProbability;
@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic) long long next_drain_is_significant;

- (void).cxx_destruct;
- (id)classProbability;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithNext_drain_is_significant:(long long)arg1 classProbability:(id)arg2;
- (long long)next_drain_is_significant;
- (void)setClassProbability:(id)arg1;
- (void)setNext_drain_is_significant:(long long)arg1;

@end
