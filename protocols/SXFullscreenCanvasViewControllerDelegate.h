
@protocol SXFullscreenCanvasViewControllerDelegate <NSObject>

@required

- (void)fullScreenCanvasViewControllerWantsToDismiss:(SXFullscreenCanvasViewController *)arg1;

@optional

- (void)fullscreenCanvasViewController:(SXFullscreenCanvasViewController *)arg1 willTransitionToSize:(struct CGSize { double x1; double x2; })arg2 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg3;
- (void)handleNextCommand;
- (void)handlePreviousCommand;

@end
