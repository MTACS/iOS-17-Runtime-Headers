
@interface SBHTestFeatureIntroductionItem : SBHFeatureIntroductionItem {
    bool  _didDisplayFeatureIntroduction;
    bool  _didSetupFeatureIntroduction;
}

@property (nonatomic) bool didDisplayFeatureIntroduction;
@property (nonatomic) bool didSetupFeatureIntroduction;

- (bool)didDisplayFeatureIntroduction;
- (bool)didSetupFeatureIntroduction;
- (void)displayFeatureIntroductionAtLocations:(unsigned long long)arg1 presentCompletion:(id /* block */)arg2 dismissCompletion:(id /* block */)arg3;
- (id)featureIntroductionIdentifier;
- (void)setDidDisplayFeatureIntroduction:(bool)arg1;
- (void)setDidSetupFeatureIntroduction:(bool)arg1;
- (void)setupFeatureIntroductionAtLocations:(unsigned long long)arg1;
- (bool)shouldDisplayFeatureIntroductionAtLocations:(unsigned long long)arg1;
- (bool)shouldSetupFeatureIntroductionAtLocations:(unsigned long long)arg1;

@end
