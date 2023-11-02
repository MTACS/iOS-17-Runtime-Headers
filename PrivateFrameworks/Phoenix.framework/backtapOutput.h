
@interface backtapOutput : NSObject <MLFeatureProvider> {
    MLMultiArray * _model_output;
}

@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, retain) MLMultiArray *model_output;

- (void).cxx_destruct;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithModel_output:(id)arg1;
- (id)model_output;
- (void)setModel_output:(id)arg1;

@end
