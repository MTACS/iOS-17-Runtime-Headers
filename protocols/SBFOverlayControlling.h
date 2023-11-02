
@protocol SBFOverlayControlling

@required

- (void)addHomeScreenOverlayObserver:(id <SBFOverlayObserving>)arg1;
- (double)contentWidth;
- (void)dismissAnimated:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)dismissUsingViewControllerTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg1;
- (<SBFOverlayDismissalDelegate> *)dismissalDelegate;
- (double)finalPresentationProgressForTranslation:(double)arg1 velocity:(double)arg2 initialPresentationProgress:(double)arg3 fromLeading:(bool)arg4;
- (bool)isAnimatingPresentationProgress;
- (bool)isPresented;
- (double)layerPresentationProgress;
- (void)presentAnimated:(bool)arg1;
- (void)presentAnimated:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)presentAnimated:(bool)arg1 fromLeading:(bool)arg2;
- (void)presentAnimated:(void *)arg1 fromLeading:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (double)presentationProgress;
- (double)presentationProgressForTranslation:(double)arg1 initialPresentationProgress:(double)arg2 fromLeading:(bool)arg3;
- (void)removeHomeScreenOverlayObserver:(id <SBFOverlayObserving>)arg1;
- (void)setDismissalDelegate:(id <SBFOverlayDismissalDelegate>)arg1;
- (void)setPresentationProgress:(double)arg1;
- (void)setPresentationProgress:(double)arg1 fromLeading:(bool)arg2;
- (void)setPresentationProgress:(void *)arg1 fromLeading:(void *)arg2 interactive:(void *)arg3 animated:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: double, bool, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setPresentationProgress:(void *)arg1 interactive:(void *)arg2 animated:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: double, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
