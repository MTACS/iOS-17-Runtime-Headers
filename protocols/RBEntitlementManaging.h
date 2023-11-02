
@protocol RBEntitlementManaging <NSObject>

@required

- (NSSet *)allEntitlements;
- (<RBEntitlementPossessing> *)entitlementsForProcess:(RBProcess *)arg1;
- (void)purgeEntitlementsForProcess:(RBProcess *)arg1;

@end
