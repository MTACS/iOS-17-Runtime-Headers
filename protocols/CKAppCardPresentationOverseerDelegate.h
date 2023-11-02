
@protocol CKAppCardPresentationOverseerDelegate <NSObject>

@required

- (CKSendMenuPresentation *)activeSendMenuPresentationForAppCardOverseer;
- (void)appCardDidMoveToWindow:(UIWindow *)arg1;
- (void)appCardOverseerCardDidChangeHeight:(double)arg1 isBelowKeyboardDetent:(bool)arg2 isDragging:(bool)arg3 isGeneratingEndOfDragAnimations:(bool)arg4;
- (double)appCardOverseerCompactHeightExcludingSafeArea;
- (void)appCardOverseerDidDismissAppCard;
- (void)appCardOverseerDidPresentAppCard;
- (void)appCardOverseerDidRecognizeTouchTracker;
- (void)appCardOverseerDidRequestPresentationSendMenuWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)appCardOverseerViewStateDidChange:(bool)arg1;
- (void)appCardOverseerWillDismissAppCard;
- (void)appCardOverseerWillPresentAppCard;
- (bool)shouldPresentAppCardInSendMenuWithTraitCollection:(UITraitCollection *)arg1;

@end
