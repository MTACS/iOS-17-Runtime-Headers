
@protocol RBAttributeTemplateConfiguring <NSObject>

@required

- (void)setAdditionalRestrictions:(NSDictionary *)arg1;
- (void)setOriginatorEntitlements:(RBEntitlementPredicate *)arg1;
- (void)setRestriction:(RBDomainRestriction *)arg1;
- (void)setTargetBundleProperties:(NSDictionary *)arg1;
- (void)setTargetEntitlements:(RBEntitlementPredicate *)arg1;

@end
