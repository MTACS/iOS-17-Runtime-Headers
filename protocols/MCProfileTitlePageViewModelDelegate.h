
@protocol MCProfileTitlePageViewModelDelegate <NSObject>

@required

- (void)informQuestionViewControllerOfPreflightResult:(NSError *)arg1 profileConnection:(MCProfileConnection *)arg2;
- (void)installationFinishedSuccessfully:(bool)arg1 shouldDismiss:(bool)arg2 shouldRedirect:(bool)arg3 errorToDisplay:(NSError *)arg4;
- (void)presentAuthenticationViewControllerWithContext:(void *)arg1 authenticationPreparationHandler:(void *)arg2 authenticationCompletionHandler:(void *)arg3; // needs 3 arg types, found 19: AKAppleIDAuthenticationInAppContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*, id /* block */, void*, void, id /* block */, NSMutableDictionary *, NSError *, bool, void*
- (void)presentRestoreFailedAlertWithError:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)presentSpinnerViewController;
- (void)promptForManagedRestoreWithManagedAppleID:(void *)arg1 snapshot:(void *)arg2 conflictingApps:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSString *, <DMCRFSnapshot> *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)promptForPasscodeWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSString *, void*
- (void)promptForUserInput:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, bool, void*
- (void)setUserInteractionEnabled:(bool)arg1;

@end
