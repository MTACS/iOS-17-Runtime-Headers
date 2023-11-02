
@protocol SFWebExtensionControllerProfileDelegate <NSObject>

@required

- (NSArray *)sfWebExtensionsControllersContentBlockerManagersForAllProfiles:(SFWebExtensionsController *)arg1;
- (NSArray *)sfWebExtensionsControllersForAllProfiles:(SFWebExtensionsController *)arg1;

@optional

- (SFWebExtensionsController *)sfWebExtensionsController:(SFWebExtensionsController *)arg1 forProfileServerID:(NSString *)arg2;
- (NSArray *)sfWebExtensionsControllerAllProfileExtensionsControllers:(SFWebExtensionsController *)arg1;
- (SFContentBlockerManager *)sfWebExtensionsControllerContentBlockerManager:(SFWebExtensionsController *)arg1 forProfileServerID:(NSString *)arg2;
- (WBTabGroupManager *)sfWebExtensionsControllerTabGroupManager:(SFWebExtensionsController *)arg1;

@end
