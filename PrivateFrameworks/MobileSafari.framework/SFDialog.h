
@interface SFDialog : NSObject {
    bool  _completed;
    SFDialogController * _dialogController;
    bool  _shouldIgnoreGlobalModalUIDisplayPolicy;
}

@property (nonatomic, readonly, copy) NSArray *additionalCancellationExemptions;
@property (nonatomic, readonly) bool canceledOnApplicationBackground;
@property (nonatomic, readonly) bool canceledOnCommittedNavigation;
@property (nonatomic, readonly) bool canceledOnProvisionalNavigation;
@property (nonatomic, readonly) bool completionHandlerBlocksWebProcess;
@property (nonatomic) SFDialogController *dialogController;
@property (nonatomic, readonly) long long presentationStyle;
@property (nonatomic, readonly) bool shouldIgnoreGlobalModalUIDisplayPolicy;

// Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari

+ (id)_appLinkRedirectDialogWithMessage:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)_dialogWithTitle:(id)arg1 message:(id)arg2 acceptAction:(id)arg3 secondaryAction:(id)arg4 cancelAction:(id)arg5 applicationModal:(bool)arg6 completionHandler:(id /* block */)arg7;
+ (id)_dialogWithTitle:(id)arg1 message:(id)arg2 primaryAction:(id)arg3 secondaryAction:(id)arg4 applicationModal:(bool)arg5 completionHandler:(id /* block */)arg6;
+ (id)authenticationDialogWithAuthenticationChallenge:(id)arg1 committedURL:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)authenticatorDialogForPanel:(id)arg1 dialogController:(id)arg2;
+ (id)blockedPopupWindowDialogWithCompletionHandler:(id /* block */)arg1;
+ (id)continuePrintingDialogWithTitle:(id)arg1 message:(id)arg2 applicationModal:(bool)arg3 completionHandler:(id /* block */)arg4;
+ (id)dialogWithWebUIAlert:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)formSubmissionDialogWithMessage:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)genericErrorDialogWithTitle:(id)arg1 message:(id)arg2 applicationModal:(bool)arg3;
+ (id)increaseApplicationCacheQuotaDialogForOrigin:(id)arg1 newQuota:(long long)arg2 completionHandler:(id /* block */)arg3;
+ (id)increaseDatabaseQuotaDialogForOrigin:(id)arg1 newQuota:(long long)arg2 completionHandler:(id /* block */)arg3;
+ (id)javaScriptAlertDialogWithMessage:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)javaScriptConfirmDialogWithMessage:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)javaScriptPromptDialogWithMessage:(id)arg1 defaultText:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)noFeedAppDialogWithCompletionHandler:(id /* block */)arg1;
+ (id)pageLoadErrorWithMessage:(id)arg1;
+ (id)permanentlyAcceptCertificateDialogWithAcceptanceHandler:(id /* block */)arg1;
+ (id)printBlockedDialogWithCompletionHandler:(id /* block */)arg1;
+ (id)redirectDialogWithMessage:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)requestStorageAccessDialogForDomain:(id)arg1 underCurrentDomain:(id)arg2 extensionsController:(id)arg3 completionHandler:(id /* block */)arg4;
+ (id)telephonyNavigationDialogWithCompletionHandler:(id /* block */)arg1;
+ (id)userMediaPermissionDialogWithHost:(id)arg1 devices:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)webExtensionAlwaysAllowDialogWithExtension:(id)arg1 domains:(id)arg2 includeDenyButton:(bool)arg3 completionHandler:(id /* block */)arg4;
+ (id)webExtensionDisabledBecauseItRequestsAdditionalPermissionsDialogForExtension:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)webExtensionPermissionDialogWithExtension:(id)arg1 domains:(id)arg2 callingAPIName:(id)arg3 showMoreOptionsForAlwaysAllow:(bool)arg4 includeDenyButton:(bool)arg5 completionHandler:(id /* block */)arg6;
+ (id)websiteLocationDialogForURL:(id)arg1 preciseLocation:(bool)arg2 completionHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)additionalCancellationExemptions;
- (bool)canceledOnApplicationBackground;
- (bool)canceledOnCommittedNavigation;
- (bool)canceledOnProvisionalNavigation;
- (void)completeWithResponse:(id)arg1;
- (bool)completionHandlerBlocksWebProcess;
- (id)dialogController;
- (void)didCompleteWithResponse:(id)arg1;
- (id)newDialogViewRepresentation;
- (id)newViewControllerRepresentationWithCompletionHandler:(id /* block */)arg1;
- (long long)presentationStyle;
- (void)setDialogController:(id)arg1;
- (bool)shouldIgnoreGlobalModalUIDisplayPolicy;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

+ (id)allowDownloadDialogWithDownload:(id)arg1 initiatingURL:(id)arg2 allowViewAction:(bool)arg3 completionHandler:(id /* block */)arg4;
+ (id)downloadBlockedDialogWithFileType:(long long)arg1 initiatingURL:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)redirectDialogWithNavigationResult:(id)arg1 promptPolicy:(long long)arg2 completionHandler:(id /* block */)arg3;

@end
