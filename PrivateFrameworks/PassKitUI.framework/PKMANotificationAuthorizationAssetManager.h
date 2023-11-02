
@interface PKMANotificationAuthorizationAssetManager : NSObject {
    PKMobileAssetManager * _mobileAssetManager;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_notificationAuthorizationImageFilenameForLocale:(id)arg1;
- (void)downloadNotificationAuthorizationImage:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (struct CGImage { }*)notificationAuthorizationImageForLocale:(id)arg1;
- (id)notificationAuthorizationString:(id)arg1;

@end
