
@interface SBSplashBoardController : XBApplicationController {
    bool  _isObservingAppLanguageChanges;
}

- (void)_checkForChangedLocale;
- (void)_handleLocaleDidChangeNotification;
- (void)_observeLocaleChanges;
- (id)_splashBoardApplicationForBundleID:(id)arg1;
- (void)configureForLocaleChanges;
- (void)dealloc;

@end
