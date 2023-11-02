
@interface PBUIPosterFloatingView : UIView <PBUIReplicaPortalSource> {
    BSCompoundAssertion * _currentUsers;
    UIView * _defaultFloatingLayerStandin;
    bool  _floatingLayerHasStandin;
    _UILegibilitySettings * _legibilitySettings;
}

@property (nonatomic, readonly, copy) NSString *cacheIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) UIView *defaultFloatingLayerStandin;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool effectsAreBakedIn;
@property (getter=isFloatingLayerStandin, nonatomic, readonly) bool floatingLayerHasStandin;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) _UILegibilitySettings *legibilitySettings;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *targetView;

- (void).cxx_destruct;
- (id)acquireSourceUsageAssertionForView:(id)arg1;
- (id)cacheIdentifier;
- (void)dealloc;
- (id)defaultFloatingLayerStandin;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)effectsAreBakedIn;
- (bool)floatingLayerHasStandin;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isFloatingLayerStandin;
- (id)legibilitySettings;
- (void)setDefaultFloatingLayerStandin:(id)arg1;
- (void)setFloatingLayerHasStandin:(bool)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)targetView;

@end
