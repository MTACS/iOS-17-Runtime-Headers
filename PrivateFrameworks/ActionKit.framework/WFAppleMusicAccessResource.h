
@interface WFAppleMusicAccessResource : WFAccessResource

+ (bool)isSystemResource;

- (id)associatedAppIdentifier;
- (void)dealloc;
- (id)initWithDefinition:(id)arg1;
- (void)makeAvailableWithUserInterface:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)protectedResourceDescription;
- (unsigned long long)status;

@end
