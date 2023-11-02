
@interface CMWorkoutClassifierCNNOutput : NSObject <MLFeatureProvider> {
    MLMultiArray * _softmax__0;
}

@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, retain) MLMultiArray *softmax__0;

- (void).cxx_destruct;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithSoftmax__0:(id)arg1;
- (void)setSoftmax__0:(id)arg1;
- (id)softmax__0;

@end
