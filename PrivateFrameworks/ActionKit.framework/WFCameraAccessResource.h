
@interface WFCameraAccessResource : WFAccessResource

+ (bool)isSystemResource;

- (id)associatedAppIdentifier;
- (id)errorReasonForStatus:(unsigned long long)arg1;
- (id)importErrorReasonForStatus:(unsigned long long)arg1;
- (void)makeAvailableWithUserInterface:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)protectedResourceDescription;
- (unsigned long long)status;

@end
