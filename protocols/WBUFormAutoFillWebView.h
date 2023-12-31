
@protocol WBUFormAutoFillWebView <NSObject>

@required

- (WBSFormMetadata *)webui_formMetadataForLastPasswordGenerationOrSubmitEventInFrame:(id <WBUFormAutoFillFrameHandle>)arg1;
- (NSString *)webui_lastGeneratedPasswordForCurrentBackForwardItem;
- (UIViewController *)webui_presentingViewController;
- (id /* block */)webui_preventNavigationDuringAutoFillPrompt:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (bool)webui_privateBrowsingEnabled;
- (void)webui_removeFormMetadataForLastPasswordGenerationOrSubmitEventInFrame:(id <WBUFormAutoFillFrameHandle>)arg1;
- (void)webui_setFormMetadata:(WBSFormMetadata *)arg1 forLastPasswordGenerationOrSubmitEventInFrame:(id <WBUFormAutoFillFrameHandle>)arg2;
- (void)webui_setLastGeneratedPasswordForCurrentBackForwardItem:(NSString *)arg1;

@optional

- (bool)webui_canPromptForAccountSecurityRecommendation;
- (void)webui_setInputDashboardViewController:(UIViewController<UIPredictiveViewController> *)arg1;

@end
