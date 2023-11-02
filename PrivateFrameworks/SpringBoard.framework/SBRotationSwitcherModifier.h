
@interface SBRotationSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout * _appLayout;
    long long  _fromInterfaceOrientation;
    bool  _shouldNotUseAnchorPointToPinLayoutRolesToSpace;
    long long  _toInterfaceOrientation;
}

@property (nonatomic, readonly) SBAppLayout *appLayout;
@property (nonatomic, readonly) long long fromInterfaceOrientation;
@property (nonatomic) bool shouldNotUseAnchorPointToPinLayoutRolesToSpace;
@property (nonatomic, readonly) long long toInterfaceOrientation;

- (void).cxx_destruct;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayout;
- (id)appLayoutsToResignActive;
- (struct SBSwitcherAsyncRenderingAttributes { bool x1; bool x2; })asyncRenderingAttributesForAppLayout:(id)arg1;
- (long long)fromInterfaceOrientation;
- (id)initWithTransitionID:(id)arg1 appLayout:(id)arg2 fromInterfaceOrientation:(long long)arg3 toInterfaceOrientation:(long long)arg4;
- (id)keyboardSuppressionMode;
- (bool)requireStripContentsInViewHierarchy;
- (double)rotationAngleForIndex:(unsigned long long)arg1;
- (void)setShouldNotUseAnchorPointToPinLayoutRolesToSpace:(bool)arg1;
- (bool)shouldNotUseAnchorPointToPinLayoutRolesToSpace;
- (bool)shouldPerformRotationAnimationForOrientationChange;
- (bool)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)arg1;
- (long long)toInterfaceOrientation;
- (id)transitionWillBegin;

@end
