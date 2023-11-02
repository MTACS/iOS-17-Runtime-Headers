
@interface CKFullscreenBrowserNavigationController : UINavigationController <CKAdaptivePresentedControllerProtocol> {
    bool  _preserveModalPresentationStyle;
    bool  _wantsWindowedPresentation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool preserveModalPresentationStyle;
@property (nonatomic) bool shouldHidePresentingWindow;
@property (readonly) Class superclass;
@property (nonatomic) bool wantsWindowedPresentation;

- (bool)constrainToPresentingVCBounds;
- (bool)forceWindowedPresentation;
- (void)loadView;
- (bool)preserveModalPresentationStyle;
- (void)setPreserveModalPresentationStyle:(bool)arg1;
- (void)setWantsWindowedPresentation:(bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (bool)wantsWindowedPresentation;

@end
