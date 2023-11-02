
@interface SFSafariProfileDelegate : NSObject <SFContentBlockerManagerDelegate, SFWebExtensionControllerProfileDelegate> {
    SFExtensionsProfilesDataSource * _dataSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)enumerateContentBlockerManagersUsingBlock:(id /* block */)arg1;
- (id)initWithDataSource:(id)arg1;
- (id)sfWebExtensionsController:(id)arg1 forProfileServerID:(id)arg2;
- (id)sfWebExtensionsControllerAllProfileExtensionsControllers:(id)arg1;
- (id)sfWebExtensionsControllerContentBlockerManager:(id)arg1 forProfileServerID:(id)arg2;
- (id)sfWebExtensionsControllerTabGroupManager:(id)arg1;
- (id)sfWebExtensionsControllersContentBlockerManagersForAllProfiles:(id)arg1;
- (id)sfWebExtensionsControllersForAllProfiles:(id)arg1;

@end
