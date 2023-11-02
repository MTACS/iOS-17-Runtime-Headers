
@protocol SFBrowserApplicationProxy <NSObject>

@required

- (WebBookmarkCollection *)bookmarkCollection;
- (UIScene *)currentScene;
- (UIScene *)sceneForTabGroupWithUUIDString:(NSString *)arg1;
- (void)sceneForTabWithUUID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIScene *, void*
- (NSArray *)tabEntitiesForAutomation;
- (void)tabEntitiesMatchingQuery:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (SFTabEntity *)tabEntityWithUUID:(NSUUID *)arg1;
- (WBTabGroupManager *)tabGroupManager;

@end
