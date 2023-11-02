
@interface HREActionTemplate : HRETemplate {
    NSDictionary * _actionMap;
    HREActionVarianceCollection * _allowedVariance;
    NSSet * _extraInvolvedTypes;
}

@property (nonatomic, readonly) NSDictionary *actionMap;
@property (nonatomic, readonly) HREActionVarianceCollection *allowedVariance;
@property (nonatomic, retain) NSSet *extraInvolvedTypes;

- (void).cxx_destruct;
- (id)_lazy_actionMap;
- (id)_lazy_allowedVariance;
- (id)actionMap;
- (id)allowedVariance;
- (id)createStarterRecommendationInHome:(id)arg1;
- (id)extraInvolvedTypes;
- (id)involvedAccessoryTypes;
- (void)setExtraInvolvedTypes:(id)arg1;

@end
