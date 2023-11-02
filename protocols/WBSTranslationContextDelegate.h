
@protocol WBSTranslationContextDelegate <NSObject>

@optional

- (NSString *)safariApplicationVersionForTranslationContext:(WBSTranslationContext *)arg1;
- (void)translationContext:(WBSTranslationContext *)arg1 shouldReportProgressInUnifiedField:(bool)arg2;
- (void)translationContext:(void *)arg1 showFeedbackConsentAlertWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: WBSTranslationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)translationContext:(void *)arg1 showFirstTimeConsentAlertWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: WBSTranslationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)translationContext:(WBSTranslationContext *)arg1 showTranslationErrorAlertWithTitle:(NSString *)arg2 message:(NSString *)arg3;
- (void)translationContext:(void *)arg1 urlForCurrentPageWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: WBSTranslationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, void*
- (bool)translationContextIsUsingPrivateBrowsing:(WBSTranslationContext *)arg1;
- (void)translationContextNeedsScrollHeightVisibilityUpdate:(WBSTranslationContext *)arg1;
- (void)translationContextReloadPageInOriginalLanguage:(WBSTranslationContext *)arg1;
- (void)translationContextWillRequestTranslatingWebpage:(WBSTranslationContext *)arg1;

@end
