
@interface StocksUI.AppReviewRequestManager : NSObject <FCAppleAccountObserver> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  $__lazy_storage_$_appReviewPromptConfig;
    void __userIsAuthenticatedToAppStore;
    void _appReviewRequestLastSeenDate;
    void _didEngageWithArticle;
    void _started;
    void appConfigurationManager;
    void appleAccount;
    void featureAvailability;
    void store;
    void tracker;
    void userInfo;
}

- (void).cxx_destruct;
- (void)appleAccountChanged;
- (id)init;

@end
