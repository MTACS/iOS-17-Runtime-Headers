
@interface WFShortcutsAccessResource : WFAccessResource

+ (bool)isSystemResource;

- (id)associatedAppIdentifier;
- (id)attemptRecoveryFromErrorMessage;
- (id)errorReasonForStatus:(unsigned long long)arg1;
- (id)importErrorReasonForStatus:(unsigned long long)arg1;
- (id)protectedResourceDescription;
- (unsigned long long)status;

@end
