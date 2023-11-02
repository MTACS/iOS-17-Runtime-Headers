
@interface CRLineWrappingClassifierInput : NSObject <MLFeatureProvider> {
    MLMultiArray * _features;
}

@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, retain) MLMultiArray *features;

- (void).cxx_destruct;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)features;
- (id)initWithFeatures:(id)arg1;
- (void)setFeatures:(id)arg1;

@end
