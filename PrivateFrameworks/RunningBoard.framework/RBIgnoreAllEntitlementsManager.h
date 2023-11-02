
@interface RBIgnoreAllEntitlementsManager : NSObject <RBEntitlementManaging, RBEntitlementPossessing>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)allEntitlements;
- (id)entitlementsForProcess:(id)arg1;
- (bool)hasEntitlement:(id)arg1;
- (bool)hasEntitlementDomain:(unsigned long long)arg1;
- (void)purgeEntitlementsForProcess:(id)arg1;

@end
