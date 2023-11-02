
@interface WFSpeechRecognitionAccessResource : WFAccessResource

+ (bool)isSystemResource;

- (void)attemptRecoveryFromErrorWithOptionIndex:(unsigned long long)arg1 userInterface:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)errorRecoveryOptionsForStatus:(unsigned long long)arg1;
- (id)icon;
- (id)localizedErrorReasonForStatus:(unsigned long long)arg1;
- (id)name;
- (id)protectedResourceDescription;
- (unsigned long long)status;

@end
