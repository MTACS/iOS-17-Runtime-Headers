
@interface PBUIWallpaperFloatingLayerAssertion : BSSimpleAssertion <PBUIWallpaperAnimatedInvalidating> {
    UIView * _containerView;
    BSUIAnimationFactory * _invalidationAnimationFactory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)invalidate;
- (void)invalidateWithAnimationFactory:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
