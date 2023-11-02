
@interface SNVGGishBabbleModelOutput : NSObject <MLFeatureProvider> {
    MLMultiArray * _output1;
}

@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, retain) MLMultiArray *output1;

- (void).cxx_destruct;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithOutput1:(id)arg1;
- (id)output1;
- (void)setOutput1:(id)arg1;

@end
