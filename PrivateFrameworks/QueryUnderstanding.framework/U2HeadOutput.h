
@interface U2HeadOutput : NSObject <MLFeatureProvider> {
    MLMultiArray * _arg_conf_scores;
    MLMultiArray * _intent_scores;
    MLMultiArray * _top_arg_ids;
}

@property (nonatomic, retain) MLMultiArray *arg_conf_scores;
@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, retain) MLMultiArray *intent_scores;
@property (nonatomic, retain) MLMultiArray *top_arg_ids;

- (void).cxx_destruct;
- (id)arg_conf_scores;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithTop_arg_ids:(id)arg1 arg_conf_scores:(id)arg2 intent_scores:(id)arg3;
- (id)intent_scores;
- (void)setArg_conf_scores:(id)arg1;
- (void)setIntent_scores:(id)arg1;
- (void)setTop_arg_ids:(id)arg1;
- (id)top_arg_ids;

@end
