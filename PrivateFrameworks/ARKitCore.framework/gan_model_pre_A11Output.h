
@interface gan_model_pre_A11Output : NSObject <MLFeatureProvider> {
    MLMultiArray * _output;
}

@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, retain) MLMultiArray *output;

- (void).cxx_destruct;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithOutput:(id)arg1;
- (id)output;
- (void)setOutput:(id)arg1;

@end
