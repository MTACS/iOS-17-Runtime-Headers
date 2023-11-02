
@interface SBUISystemApertureLayoutGuide : UILayoutGuide {
    NSArray * _constraints;
    UIView * _currentRootGuideView;
}

@property (nonatomic, copy) NSArray *constraints;

+ (void)_addUnpreparedLayoutGuide:(id)arg1;
+ (void)_enumerateSystemApertureRootLayoutGuidesForViewController:(id)arg1 usingBlock:(id /* block */)arg2;
+ (void)_enumerateUnpreparedSystemApertureLayoutGuides:(id /* block */)arg1;
+ (void)_removeUnpreparedLayoutGuideIfNeeded:(id)arg1;
+ (bool)prepareLayoutGuidesForViewControllerIfNeeded:(id)arg1 onlyIfEmpty:(bool)arg2;

- (void).cxx_destruct;
- (void)_activateConstraintsWithRootLayoutGuide;
- (bool)_createOrUpdateConcentricRootLayoutGuideWithWindow:(id)arg1;
- (bool)_createOrUpdateConstraintsIfIsRootAndInAWindow;
- (bool)_createOrUpdateFixedFrameRootConstraintsWithWindow:(id)arg1;
- (bool)_createOrUpdateInsetBasedRootGuideWithWindow:(id)arg1;
- (bool)_requiresExplicitFrame;
- (bool)_requiresFloatableFixedSize;
- (bool)_requiresInitialSetup;
- (bool)_requiresInsets;
- (id)_rootGuide;
- (id)_rootGuideView;
- (void)activateConstraintsIfNeeded;
- (bool)constraintNeedsActivation:(id)arg1;
- (id)constraints;
- (void)prepareIfNeeded;
- (void)setConstraints:(id)arg1;

@end
