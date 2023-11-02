
@interface WFiCloudDriveAccessResource : WFAccessResource

+ (bool)isSystemResource;
+ (bool)mustBeAvailableForDisplay;

- (id)associatedAppIdentifier;
- (void)attemptRecoveryFromErrorWithOptionIndex:(unsigned long long)arg1 userInterface:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dealloc;
- (id)errorReasonForStatus:(unsigned long long)arg1;
- (id)errorRecoveryOptionsForStatus:(unsigned long long)arg1;
- (id)importErrorReasonForStatus:(unsigned long long)arg1;
- (id)initWithDefinition:(id)arg1;
- (id)protectedResourceDescription;
- (unsigned long long)status;

@end
