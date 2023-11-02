
@protocol SFWebAppServiceViewControllerProtocol <SFServiceViewControllerProtocol>

@required

- (void)clearWebsiteDataWithWebClipIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)handlePushNotificationActivation:(NSDictionary *)arg1;
- (void)loadWebAppWithIdentifier:(NSString *)arg1;
- (void)processWebPushForWebAppWithIdentifier:(NSString *)arg1;
- (void)webAppDidBecomeActive;
- (void)webAppWillResignActive;

@end
