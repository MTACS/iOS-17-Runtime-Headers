
@protocol CCUIContentModuleContentViewController <NSObject>

@required

- (double)preferredExpandedContentHeight;

@optional

- (bool)canDismissPresentedContent;
- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;
- (UIViewPropertyAnimator *)customAnimator;
- (void)didTransitionToExpandedContentMode:(bool)arg1;
- (void)dismissPresentedContentAnimated:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)displayWillTurnOff;
- (struct CCUIModuleLayoutSize { unsigned long long x1; unsigned long long x2; })moduleLayoutSizeForOrientation:(long long)arg1;
- (double)preferredExpandedContentWidth;
- (double)preferredExpandedContinuousCornerRadius;
- (bool)providesOwnPlatter;
- (bool)shouldBeginTransitionToExpandedContentModule;
- (bool)shouldExpandModuleOnTouch:(UITouch *)arg1;
- (bool)shouldFinishTransitionToExpandedContentModule;
- (bool)shouldPerformClickInteraction;
- (bool)shouldPerformHoverInteraction;
- (bool)shouldUseCompactContentFrameForExpandedContent;
- (void)willTransitionToExpandedContentMode:(bool)arg1;

@end
