
@protocol CKAdaptivePresentedControllerProtocol <NSObject>

@required

- (bool)preserveModalPresentationStyle;
- (void)setPreserveModalPresentationStyle:(bool)arg1;
- (void)setWantsWindowedPresentation:(bool)arg1;
- (bool)wantsWindowedPresentation;

@optional

- (bool)constrainToPresentingVCBounds;
- (bool)forceWindowedPresentation;
- (void)setShouldHidePresentingWindow:(bool)arg1;
- (bool)shouldHidePresentingWindow;

@end
