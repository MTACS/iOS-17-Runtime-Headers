
@protocol QLImageAnalysisManagerDelegate <NSObject>

@required

- (UIView *)imageAnalysisView;
- (UIImage *)imageForAnalysis;

@optional

- (NSDictionary *)clientPreviewOptions;
- (void)imageAnalysisInteractionDidDismissVisualSearchController;
- (void)imageAnalysisInteractionWillPresentVisualSearchController;
- (void)imageAnalyzerWantsUpdateInfoButtonWithAnimation:(bool)arg1;
- (void)imageAnalyzerWantsUpdateOverlayViews;
- (UIViewController *)presentingViewControllerForImageAnalysisInteraction:(VKCImageAnalysisInteraction *)arg1;

@end
