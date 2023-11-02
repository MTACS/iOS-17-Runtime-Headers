
@interface SUAccountViewController : SUStorePageViewController <SUNavigationItemDelegate> {
    ACAccount * _account;
    NSURL * _accountURL;
    bool  _failed;
    UIBarButtonItem * _logoutButton;
    SUMescalSession * _mescalSession;
    long long  _mescalState;
    NSString * _primingSignature;
    bool  _showAccountGlyph;
    long long  _style;
    NSDictionary * _tidHeaders;
}

@property (getter=_mescalSession, nonatomic, readonly) SUMescalSession *_mescalSession;
@property (nonatomic, retain) ACAccount *account;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIBarButtonItem *logoutButton;
@property (nonatomic) bool showAccountGlyph;
@property (nonatomic) long long style;
@property (readonly) Class superclass;

+ (id)_latestAccountViewController;

- (void).cxx_destruct;
- (id)_URLByRemovingBlacklistedParametersWithURL:(id)arg1;
- (id)_authenticationQueryParametersForStyle:(long long)arg1;
- (id)_bagKeyForStyle:(long long)arg1;
- (void)_closeMescalSession;
- (void)_didEnterBackground:(id)arg1;
- (void)_forceOrientationBackToSupportedOrientation;
- (void)_logoutPressed:(id)arg1;
- (void)_mescalDidOpenWithSession:(id)arg1 error:(id)arg2;
- (id)_mescalSession;
- (bool)_shouldUseWebViewFastPath;
- (id)account;
- (id)copyArchivableContext;
- (void)enqueueFetchOperation;
- (void)handleFailureWithError:(id)arg1;
- (id)init;
- (id)initWithExternalAccountURL:(id)arg1;
- (id)logoutButton;
- (id)navigationItem:(id)arg1 willChangeLeftItem:(id)arg2 toNewItem:(id)arg3;
- (id)navigationItem:(id)arg1 willChangeLeftItems:(id)arg2 toNewItems:(id)arg3;
- (id)newFetchOperation;
- (id)newViewControllerForPage:(id)arg1 ofType:(long long)arg2 returningError:(id*)arg3;
- (void)setAccount:(id)arg1;
- (void)setLogoutButton:(id)arg1;
- (void)setShowAccountGlyph:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (bool)shouldSignRequests;
- (bool)showAccountGlyph;
- (long long)style;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
