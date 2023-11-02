
@protocol RBBundlePropertiesManaging <NSObject>

@required

- (<RBBundleProperties> *)propertiesForIdentity:(RBSProcessIdentity *)arg1 identifier:(RBSProcessIdentifier *)arg2;
- (void)removeProcess:(RBProcess *)arg1;

@end
