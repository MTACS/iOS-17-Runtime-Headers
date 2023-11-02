
@interface CMWorkoutClassifierCNNInput : NSObject <MLFeatureProvider> {
    MLMultiArray * _X__0;
}

@property (nonatomic, retain) MLMultiArray *X__0;
@property (nonatomic, readonly) NSSet *featureNames;

- (void).cxx_destruct;
- (id)X__0;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithX__0:(id)arg1;
- (void)setX__0:(id)arg1;

@end
