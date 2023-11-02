
@interface SFReaderEnabledWebViewController : SFWebViewController <SFAppBannerMetaTagContentObserver, WKNavigationDelegatePrivate, _SFReaderControllerDelegate> {
    _WKRemoteObjectInterface * _appBannerMetaTagContentObserverInterface;
    _SFReaderController * _readerController;
    bool  _supportsAdvancedPrivacyProtections;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFReaderEnabledWebViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _SFReaderController *readerController;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsAdvancedPrivacyProtections;

- (void).cxx_destruct;
- (void)_updateDarkModeEnabled;
- (void)createReaderWebViewForReaderController:(id)arg1;
- (void)dealloc;
- (void)didFindAppBannerWithContent:(id)arg1;
- (void)invalidate;
- (void)loadView;
- (id)readerController;
- (void)readerController:(id)arg1 contentDidBecomeReadyWithDetectedLanguage:(id)arg2;
- (void)readerController:(id)arg1 didClickLinkInReaderWithRequest:(id)arg2;
- (void)readerController:(id)arg1 didClickLinkRequestingNewWindowInReaderWithRequest:(id)arg2;
- (void)readerController:(id)arg1 didDetermineAdditionalTextSamples:(id)arg2 dueTo:(long long)arg3;
- (void)readerController:(id)arg1 didDetermineReaderAvailability:(id)arg2 dueTo:(long long)arg3;
- (void)setSupportsAdvancedPrivacyProtections:(bool)arg1;
- (void)setUpReaderWithReaderWebView:(id)arg1;
- (bool)supportsAdvancedPrivacyProtections;
- (void)traitCollectionDidChange:(id)arg1;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;

@end
