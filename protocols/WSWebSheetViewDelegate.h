
@protocol WSWebSheetViewDelegate

@required

- (void)handleCompleteNotificationWithRedirectURLtype:(long long)arg1 result:(long long)arg2;
- (void)handleDismissal;
- (void)handleWebNavigationWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)scrapeCredentialsUsingPOSTMessage:(NSString *)arg1 loginURL:(NSString *)arg2;

@end
