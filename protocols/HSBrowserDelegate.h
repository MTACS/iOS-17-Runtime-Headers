
@protocol HSBrowserDelegate <NSObject>

@required

- (void)browser:(HSBrowser *)arg1 didAddLibrary:(HSHomeSharingLibrary *)arg2;
- (void)browser:(HSBrowser *)arg1 didRemoveLibrary:(HSHomeSharingLibrary *)arg2;

@end
