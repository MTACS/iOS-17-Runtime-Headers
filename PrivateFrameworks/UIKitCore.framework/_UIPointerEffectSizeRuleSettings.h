
@interface _UIPointerEffectSizeRuleSettings : PTSettings {
    double  _explicitRequestMultiplier;
    double  _genericSizeRuleThreshold;
    double  _narrowAspectRuleMajorDimensionThreshold;
    double  _narrowAspectRuleMinorDimensionThreshold;
    double  _pointerSizeRuleMajorDimensionThreshold;
    double  _pointerSizeRuleMinorDimensionThreshold;
}

@property (nonatomic) double explicitRequestMultiplier;
@property (nonatomic) double genericSizeRuleThreshold;
@property (nonatomic) double narrowAspectRuleMajorDimensionThreshold;
@property (nonatomic) double narrowAspectRuleMinorDimensionThreshold;
@property (nonatomic) double pointerSizeRuleMajorDimensionThreshold;
@property (nonatomic) double pointerSizeRuleMinorDimensionThreshold;

+ (id)settingsControllerModule;

- (double)explicitRequestMultiplier;
- (double)genericSizeRuleThreshold;
- (double)narrowAspectRuleMajorDimensionThreshold;
- (double)narrowAspectRuleMinorDimensionThreshold;
- (double)pointerSizeRuleMajorDimensionThreshold;
- (double)pointerSizeRuleMinorDimensionThreshold;
- (void)setDefaultValues;
- (void)setExplicitRequestMultiplier:(double)arg1;
- (void)setGenericSizeRuleThreshold:(double)arg1;
- (void)setNarrowAspectRuleMajorDimensionThreshold:(double)arg1;
- (void)setNarrowAspectRuleMinorDimensionThreshold:(double)arg1;
- (void)setPointerSizeRuleMajorDimensionThreshold:(double)arg1;
- (void)setPointerSizeRuleMinorDimensionThreshold:(double)arg1;

@end
