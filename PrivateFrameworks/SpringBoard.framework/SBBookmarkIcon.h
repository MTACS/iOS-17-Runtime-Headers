
@interface SBBookmarkIcon : SBHBookmarkIcon

@property (nonatomic, readonly) bool representsWebApp;

- (id)_applicationRecordForDefaultBrowser;
- (id)applicationToLaunch;
- (id)representedSceneIdentifier;
- (bool)representsWebApp;

@end
