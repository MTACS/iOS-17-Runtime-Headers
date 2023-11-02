
@protocol _UIClickPresentationInteractionDelegate <NSObject>

@required

- (_UIClickPresentation *)clickPresentationInteraction:(_UIClickPresentationInteraction *)arg1 presentationForPresentingViewController:(UIViewController *)arg2;

@optional

- (UITargetedPreview *)clickPresentationInteraction:(_UIClickPresentationInteraction *)arg1 previewForHighlightingAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)clickPresentationInteractionEnded:(_UIClickPresentationInteraction *)arg1 wasCancelled:(bool)arg2;
- (bool)clickPresentationInteractionShouldBegin:(_UIClickPresentationInteraction *)arg1;
- (bool)clickPresentationInteractionShouldPresent:(_UIClickPresentationInteraction *)arg1;

@end
