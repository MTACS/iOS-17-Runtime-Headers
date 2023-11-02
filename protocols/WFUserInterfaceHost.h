
@protocol WFUserInterfaceHost <NSObject>

@required

- (bool)isRunningInSiri;
- (void)presentAlert:(WFAlert *)arg1;
- (NSString *)userInterfaceType;

@optional

- (NSArray *)airPlayRouteIDs;
- (void)configureIntent:(INIntent *)arg1;
- (WFDialogTransformer *)dialogTransformer;
- (void)dismissPresentedContentWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (long long)executionContext;
- (void)getEnvironmentForLinkViewSnippetWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, LNSnippetEnvironment *, void*
- (void)getPreferredSizeForLinkViewSnippetWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSValue *, void*
- (void)openURL:(void *)arg1 withBundleIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSURL *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (bool)performSiriRequest:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: WFSiriActionRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFSiriActionResponse *, void*
- (void)presentAlertWithSmartPromptConfiguration:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: WFSmartPromptConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)requestActionInterfacePresentationForActionClassName:(void *)arg1 classNamesByType:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <WFActionRemoteUserInterface> *, NSError *, void*
- (void)requestAuthorizationWithConfiguration:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: WFWorkflowAuthorizationConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)requestFileAccessForURLs:(void *)arg1 workflowName:(void *)arg2 workflowID:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSArray *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (bool)requestedFromAnotherDevice;
- (bool)requestedInHomeResident;
- (void)resolveDescriptor:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: INAppDescriptor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INAppDescriptor *, void*
- (bool)shortcutIsShowingRunningProgressInSystemAperture;
- (bool)shouldNotHandoff;
- (void)showConfirmInteraction:(void *)arg1 prompt:(void *)arg2 requireAuthentication:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: INInteraction *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)showHandleInteraction:(void *)arg1 prompt:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: INInteraction *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)showLinkActionConfirmationWithActionMetadata:(void *)arg1 showPrompt:(void *)arg2 dialogString:(void *)arg3 viewSnippet:(void *)arg4 confirmationActionName:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 11: LNActionMetadata *, bool, NSString *, LNViewSnippet *, LNConfirmationActionName *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)showLinkParameterConfirmationWithActionMetadata:(void *)arg1 dialogString:(void *)arg2 viewSnippet:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: LNActionParameterMetadata *, NSString *, LNViewSnippet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)showLinkResult:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: LNSuccessResult *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)showPreviewForContentCollection:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: WFContentCollection *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)willBeginExecutingShortcutStep:(NSNumber *)arg1;

@end
