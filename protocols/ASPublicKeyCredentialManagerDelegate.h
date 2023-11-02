
@protocol ASPublicKeyCredentialManagerDelegate <NSObject>

@required

- (void)didCompleteAssertionWithCredential:(id <ASCCredentialProtocol>)arg1 error:(NSError *)arg2;
- (void)didCompleteRegistrationWithCredential:(id <ASCCredentialProtocol>)arg1 error:(NSError *)arg2;
- (void)didFetchPlatformLoginChoices:(NSArray *)arg1;
- (void)didFetchSecurityKeyLoginChoices:(NSArray *)arg1;
- (void)didReceiveError:(long long)arg1;
- (void)presentCABLESheetWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)requestPINWithRemainingRetries:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (NSXPCListenerEndpoint *)viewServiceListenerEndpoint;

@end
