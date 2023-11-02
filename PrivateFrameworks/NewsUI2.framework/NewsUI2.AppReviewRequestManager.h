
@interface NewsUI2.AppReviewRequestManager : NSObject <FCAppleAccountObserver> {
    void $__lazy_storage_$_appReviewRequestConfig;
    void $__lazy_storage_$_useAppReviewRequest;
    void _started;
    void _userIsAuthenticatedToAppStore;
    void appleAccount;
    void configurationManager;
    void store;
    void tracker;
    void userInfo;
}

- (void).cxx_destruct;
- (void)appleAccountChanged;
- (id)init;

@end
