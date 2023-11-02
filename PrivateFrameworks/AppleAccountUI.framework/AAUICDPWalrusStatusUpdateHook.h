
@interface AAUICDPWalrusStatusUpdateHook : AAUICDPStatusUpdateHook {
    ACAccount * _account;
}

- (void).cxx_destruct;
- (id)additionalPayloadForAction:(id)arg1 error:(id)arg2;
- (id)changeControllerForAction:(id)arg1;
- (id)initWithAppleAccount:(id)arg1;
- (void)postCompletionProcessingForAction:(id)arg1 error:(id)arg2;

@end
