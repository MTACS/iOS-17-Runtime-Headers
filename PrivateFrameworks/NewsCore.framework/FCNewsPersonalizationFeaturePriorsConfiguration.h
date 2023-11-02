
@interface FCNewsPersonalizationFeaturePriorsConfiguration : NSObject {
    FCNewsPersonalizationFeaturePrior * _baselineFeaturePrior;
    FCNewsPersonalizationFeaturePrior * _generalFeaturePrior;
}

@property (nonatomic, retain) FCNewsPersonalizationFeaturePrior *baselineFeaturePrior;
@property (nonatomic, retain) FCNewsPersonalizationFeaturePrior *generalFeaturePrior;

- (void).cxx_destruct;
- (id)baselineFeaturePrior;
- (id)description;
- (id)generalFeaturePrior;
- (id)initWithDictionary:(id)arg1;
- (void)setBaselineFeaturePrior:(id)arg1;
- (void)setGeneralFeaturePrior:(id)arg1;

@end
