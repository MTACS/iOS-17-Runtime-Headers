
@protocol SBAmbientPresentationObserver <NSObject>

@optional

- (void)ambientPresentationController:(SBAmbientPresentationController *)arg1 didUpdateAmbientDisplayStyle:(long long)arg2;
- (void)ambientPresentationController:(SBAmbientPresentationController *)arg1 didUpdatePresented:(bool)arg2;
- (void)ambientPresentationController:(SBAmbientPresentationController *)arg1 willUpdatePresented:(bool)arg2;
- (void)ambientPresentationControllerCancelledPossiblePresentation:(SBAmbientPresentationController *)arg1;
- (void)ambientPresentationControllerWillPossiblyPresent:(SBAmbientPresentationController *)arg1;

@end
