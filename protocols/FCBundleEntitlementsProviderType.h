
@protocol FCBundleEntitlementsProviderType

@required

- (<FCEntitlementsOverrideProviderType> *)entitlementsOverrideProvider;
- (void)fetchEntitlementsWithIgnoreCache:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FCBundleEntitlementsProviderResult *, NSError *, void*
- (void)setEntitlementsOverrideProvider:(id <FCEntitlementsOverrideProviderType>)arg1;

@end
