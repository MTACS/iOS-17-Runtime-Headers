
@protocol RBDomainAttributeManaging <NSObject>

@required

- (NSSet *)additionalRestrictionsForDomain:(NSString *)arg1 andName:(NSString *)arg2;
- (NSSet *)allEntitlements;
- (bool)areTargetPropertiesValidForContext:(id <RBAssertionContextProviding>)arg1 forAttributeWithDomain:(NSString *)arg2 andName:(NSString *)arg3;
- (NSArray *)attributesForDomain:(NSString *)arg1 andName:(NSString *)arg2 context:(id <RBAssertionContextProviding>)arg3 withError:(id*)arg4;
- (bool)containsAttributeWithDomain:(NSString *)arg1 andName:(NSString *)arg2;
- (NSString *)endowmentNamespaceForDomain:(NSString *)arg1 andName:(NSString *)arg2;
- (RBEntitlementPredicate *)originatorEntitlementsForDomain:(NSString *)arg1 andName:(NSString *)arg2;
- (RBDomainRestriction *)restrictionsForDomain:(NSString *)arg1 andName:(NSString *)arg2;
- (RBEntitlementPredicate *)targetEntitlementsForDomain:(NSString *)arg1 andName:(NSString *)arg2;

@end
