
@interface backtapInput : NSObject <MLFeatureProvider> {
    MLMultiArray * _model_input;
}

@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, retain) MLMultiArray *model_input;

- (void).cxx_destruct;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithModel_input:(id)arg1;
- (id)model_input;
- (void)setModel_input:(id)arg1;

@end
