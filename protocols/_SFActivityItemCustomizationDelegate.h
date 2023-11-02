
@protocol _SFActivityItemCustomizationDelegate <NSObject>

@optional

- (void)customizationControllerCustomizationsDidChange:(_SFActivityItemCustomizationController *)arg1;
- (bool)isContentObscuredByDigitalHealthForCustomizationController:(_SFActivityItemCustomizationController *)arg1;
- (bool)isDisplayingQuickLookDocumentForCustomizationController:(_SFActivityItemCustomizationController *)arg1;
- (bool)isReaderAvailableForCustomizationController:(_SFActivityItemCustomizationController *)arg1;
- (bool)isShowingReaderForCustomizationController:(_SFActivityItemCustomizationController *)arg1;
- (WKWebView *)webViewForCustomizationController:(_SFActivityItemCustomizationController *)arg1;

@end
