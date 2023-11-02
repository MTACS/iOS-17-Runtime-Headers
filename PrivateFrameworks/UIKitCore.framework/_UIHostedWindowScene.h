
@interface _UIHostedWindowScene : UIWindowScene <_UISceneHostingViewAppearanceActionHandler, _UISheetPresentationControllerClientRemotePresentationDelegate> {
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredContentSize;
    <_UIHostedWindowSceneTraitCollectionModificationProviding> * _traitCollectionModifier;
}

@property (setter=_setPreferredContentSize:, nonatomic) struct CGSize { double x1; double x2; } _preferredContentSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishSceneConnection;
- (id)_hostedWindowSceneDelegate;
- (void)_invalidate;
- (struct CGSize { double x1; double x2; })_preferredContentSize;
- (bool)_pushesTraitCollectionToScreen;
- (void)_readySceneForConnection;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_safeAreaInsetsForInterfaceOrientation:(long long)arg1;
- (void)_setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_sheetGrabberDidTriggerPrimaryAction;
- (void)_sheetInteractionDraggingDidBeginWithRubberBandCoefficient:(double)arg1 dismissible:(bool)arg2 interruptedOffset:(struct CGPoint { double x1; double x2; })arg3;
- (void)_sheetInteractionDraggingDidChangeWithTranslation:(struct CGPoint { double x1; double x2; })arg1 velocity:(struct CGPoint { double x1; double x2; })arg2 animateChange:(bool)arg3 dismissible:(bool)arg4;
- (void)_sheetInteractionDraggingDidEnd;
- (void)_sheetPresentationControllerClientConfigurationDidChange:(id)arg1;
- (bool)_usesMinimumSafeAreaInsets;
- (void)_windowDidCreateRootPresentationController:(id)arg1;
- (void)hostTraitCollectionDidChange:(id)arg1;
- (void)hostViewDidDisappear;
- (void)hostViewWillAppear;
- (void)hostViewWillDisappear;
- (id)initWithSession:(id)arg1 connectionOptions:(id)arg2;
- (void)sendAction:(id)arg1;

@end
