
@protocol FBSApplicationInfoProvider <NSObject>

@required

- (FBSApplicationInfo *)applicationInfoForAuditToken:(BSAuditToken *)arg1;
- (FBSApplicationInfo *)applicationInfoForBundleIdentifier:(NSString *)arg1;

@optional

- (void)synchronize:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
