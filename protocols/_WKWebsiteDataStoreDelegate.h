
@protocol _WKWebsiteDataStoreDelegate <NSObject>

@optional

- (void)didReceiveAuthenticationChallenge:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSURLAuthenticationChallenge *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSURLCredential *, void*
- (NSDictionary *)notificationPermissionsForWebsiteDataStore:(WKWebsiteDataStore *)arg1;
- (void)notifyBackgroundFetchChange:(NSString *)arg1 change:(long long)arg2;
- (void)requestBackgroundFetchPermission:(void *)arg1 frameOrigin:(void *)arg2 decisionHandler:(void *)arg3; // needs 3 arg types, found 8: NSURL *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)requestStorageSpace:(void *)arg1 frameOrigin:(void *)arg2 quota:(void *)arg3 currentSize:(void *)arg4 spaceRequired:(void *)arg5 decisionHandler:(void *)arg6; // needs 6 arg types, found 11: NSURL *, NSURL *, unsigned long long, unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)websiteDataStore:(void *)arg1 getDisplayedNotificationsForWorkerOrigin:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: WKWebsiteDataStore *, WKSecurityOrigin *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)websiteDataStore:(void *)arg1 openWindow:(void *)arg2 fromServiceWorkerOrigin:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: WKWebsiteDataStore *, NSURL *, WKSecurityOrigin *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WKWebView *, void*
- (void)websiteDataStore:(WKWebsiteDataStore *)arg1 reportServiceWorkerConsoleMessage:(NSString *)arg2;
- (void)websiteDataStore:(WKWebsiteDataStore *)arg1 showNotification:(_WKNotificationData *)arg2;
- (void)websiteDataStore:(WKWebsiteDataStore *)arg1 workerOrigin:(WKSecurityOrigin *)arg2 updatedAppBadge:(NSNumber *)arg3;

@end
