
@interface CRTextDetectorModelOutput : NSObject <MLFeatureProvider> {
    MLMultiArray * _f_score_act_sigmoid_output;
    MLMultiArray * _geometry_output;
}

@property (nonatomic, retain) MLMultiArray *f_score_act_sigmoid_output;
@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, retain) MLMultiArray *geometry_output;

- (void).cxx_destruct;
- (id)f_score_act_sigmoid_output;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)geometry_output;
- (id)initWithF_score_act_sigmoid_output:(id)arg1 geometry_output:(id)arg2;
- (void)setF_score_act_sigmoid_output:(id)arg1;
- (void)setGeometry_output:(id)arg1;

@end
