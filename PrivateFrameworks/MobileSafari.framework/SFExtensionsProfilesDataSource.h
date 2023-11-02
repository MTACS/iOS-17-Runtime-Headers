
@interface SFExtensionsProfilesDataSource : NSObject {
    SFSafariProfileDelegate * _sharedProfileDelegate;
    WBTabGroupManager * _tabGroupManager;
}

@property (nonatomic, readonly) NSDictionary *profileServerIDToContentBlockerManagers;
@property (nonatomic, readonly) NSDictionary *profileServerIDToWebExtensionsControllers;
@property (nonatomic, readonly) WBTabGroupManager *tabGroupManager;

- (void).cxx_destruct;
- (id)initWithTabGroupManager:(id)arg1;
- (id)profileServerIDToContentBlockerManagers;
- (id)profileServerIDToWebExtensionsControllers;
- (id)tabGroupManager;

@end
