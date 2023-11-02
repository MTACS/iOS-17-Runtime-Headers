
@interface ASPublicKeyCredentialOperationTestDelegate : NSObject <ASPublicKeyCredentialManagerDelegate> {
    id /* block */  _didCompletionRegistrationCallback;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didCompletionRegistrationCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didCompleteAssertionWithCredential:(id)arg1 error:(id)arg2;
- (void)didCompleteRegistrationWithCredential:(id)arg1 error:(id)arg2;
- (id /* block */)didCompletionRegistrationCallback;
- (void)didFetchPlatformLoginChoices:(id)arg1;
- (void)didFetchSecurityKeyLoginChoices:(id)arg1;
- (void)didReceiveError:(long long)arg1;
- (void)presentCABLESheetWithCompletionHandler:(id /* block */)arg1;
- (void)requestPINWithRemainingRetries:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)setDidCompletionRegistrationCallback:(id /* block */)arg1;

@end
