
@interface FCUserVectorModelInput : NSObject <MLFeatureProvider> {
    MLMultiArray * _aggregates;
}

@property (nonatomic, retain) MLMultiArray *aggregates;
@property (nonatomic, readonly) NSSet *featureNames;

- (void).cxx_destruct;
- (id)aggregates;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithAggregates:(id)arg1;
- (void)setAggregates:(id)arg1;

@end
