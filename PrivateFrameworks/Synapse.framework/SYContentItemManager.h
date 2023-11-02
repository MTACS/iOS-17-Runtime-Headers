
@interface SYContentItemManager : NSObject

+ (id)sharedManager;

- (void)_navigateToURL:(id)arg1 completion:(id /* block */)arg2;
- (void)_navigateToUserActivity:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchLinkableContentItemsWithCompletion:(id /* block */)arg1;
- (void)navigateToContentItem:(id)arg1 completion:(id /* block */)arg2;

@end
