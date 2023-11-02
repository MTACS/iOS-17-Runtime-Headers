
@interface SBFlashlightElement : SBSystemApertureProvidedContentElement <SAElementIdentifying, SBSystemApertureContextProviding, SBSystemApertureLayoutCustomizing> {
    double  _expandedHeight;
    SBUISystemApertureCAPackageButton * _expandedLeadingPackageButton;
    UILabel * _expandedTitleLabel;
    UILabel * _expandedTrailingLabel;
    SBUISystemApertureCAPackageContentProvider * _leadingPackageViewProvider;
    double  _sensorObstructionHeight;
    unsigned long long  _state;
    unsigned long long  _style;
    SBUISystemApertureTextContentProvider * _trailingTextProvider;
}

@property (getter=isAffiliatedWithSessionMonitor, nonatomic, readonly) bool affiliatedWithSessionMonitor;
@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (nonatomic, readonly) long long customLayoutRequestingSpecialFlowerBoundsResizingAnimation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *elementIdentifier;
@property (nonatomic, readonly) SBUISystemApertureCAPackageButton *expandedLeadingPackageButton;
@property (nonatomic, readonly) UILabel *expandedTitleLabel;
@property (nonatomic, readonly) UILabel *expandedTrailingLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIColor *keyColor;
@property (nonatomic, readonly) SBUISystemApertureCAPackageContentProvider *leadingPackageViewProvider;
@property (nonatomic, readonly) bool preventsSwipeToHide;
@property (nonatomic, readonly) FBScene *scene;
@property (nonatomic) unsigned long long state;
@property (nonatomic, readonly) unsigned long long style;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long systemApertureCustomLayout;
@property (nonatomic, readonly) long long systemApertureLayoutCustomizingOptions;
@property (nonatomic, readonly) SBUISystemApertureTextContentProvider *trailingTextProvider;

- (void).cxx_destruct;
- (void)_configureCustomViewsIfNecessary;
- (void)_handleExpandedLeadingButtonAction;
- (void)_layoutHuggingObstructionForLabel:(id)arg1 x:(double)arg2 width:(double)arg3 maxLabelHeight:(double)arg4;
- (id)_textColorForState:(unsigned long long)arg1;
- (id)_titleColorForStyle:(unsigned long long)arg1;
- (id)_titleTextForStyle:(unsigned long long)arg1;
- (id)_trailingTextForState:(unsigned long long)arg1;
- (id)clientIdentifier;
- (double)concentricPaddingOverrideForView:(id)arg1 inLayoutMode:(long long)arg2;
- (void)contentProviderWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 inContainerView:(id)arg2 transitionCoordinator:(id)arg3;
- (id)elementIdentifier;
- (id)expandedLeadingPackageButton;
- (id)expandedTitleLabel;
- (id)expandedTrailingLabel;
- (id)initWithStyle:(unsigned long long)arg1 state:(unsigned long long)arg2;
- (bool)isProvidedViewConcentric:(id)arg1 inLayoutMode:(long long)arg2;
- (id)keyColor;
- (void)layoutHostContainerViewDidLayoutSubviews:(id)arg1;
- (id)leadingPackageViewProvider;
- (bool)overridesConcentricPaddingForView:(id)arg1 inLayoutMode:(long long)arg2;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })preferredEdgeOutsetsForLayoutMode:(long long)arg1 suggestedOutsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2 maximumOutsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;
- (unsigned long long)style;
- (id)trailingTextProvider;

@end
