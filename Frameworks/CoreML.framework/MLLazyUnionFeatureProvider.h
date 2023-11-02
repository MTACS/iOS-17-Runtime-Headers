
@interface MLLazyUnionFeatureProvider : NSObject <MLFeatureProvider> {
    <MLFeatureProvider> * _first;
    <MLFeatureProvider> * _second;
}

@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, retain) <MLFeatureProvider> *first;
@property (nonatomic, retain) <MLFeatureProvider> *second;

- (void).cxx_destruct;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)first;
- (id)initWithFeaturesFrom:(id)arg1 addedToFeaturesFrom:(id)arg2;
- (id)second;
- (void)setFirst:(id)arg1;
- (void)setSecond:(id)arg1;
- (id)unionFeatureProvider;

@end
