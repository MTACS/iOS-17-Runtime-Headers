
@interface VUIAppInstallConfirmationViewController : VUIAppLoadingViewController {
    id /* block */  _actionHandler;
    id /* block */  _appStoreHandler;
    UIBarButtonItem * _barButtonItem;
    id /* block */  _cancelationHandler;
    VUIAppInstallConfirmationView * _confirmationView;
    <WLKInstallable> * _installable;
    id /* block */  _secondaryLinkHandler;
    unsigned long long  _state;
    NSString * _updateMessage;
    NSString * _updateTitle;
}

@property (nonatomic, readonly) UIButton *actionButton;
@property (nonatomic, copy) id /* block */ actionHandler;
@property (nonatomic, copy) id /* block */ appStoreHandler;
@property (nonatomic, retain) UIBarButtonItem *barButtonItem;
@property (nonatomic, copy) id /* block */ cancelationHandler;
@property (nonatomic, retain) VUIAppInstallConfirmationView *confirmationView;
@property (nonatomic, retain) <WLKInstallable> *installable;
@property (nonatomic, readonly) VUIAppInstallLockup *lockup;
@property (nonatomic, copy) id /* block */ secondaryLinkHandler;
@property (nonatomic) unsigned long long state;

- (void).cxx_destruct;
- (void)_fetchAppInfo;
- (void)_fetchStoreInfoForAdamID:(id)arg1 completion:(id /* block */)arg2;
- (id)_fileSizeWithDeviceSizes:(id)arg1;
- (void)_handleAction;
- (void)_handleAppStore;
- (void)_handleCancel;
- (void)_handleSecondaryLink;
- (id)_namedRatingWithRatings:(id)arg1;
- (id)actionButton;
- (id /* block */)actionHandler;
- (id /* block */)appStoreHandler;
- (id)barButtonItem;
- (id /* block */)cancelationHandler;
- (id)confirmationView;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)init;
- (id)initWithInstallable:(id)arg1;
- (id)installable;
- (void)loadView;
- (id)lockup;
- (id /* block */)secondaryLinkHandler;
- (void)setActionHandler:(id /* block */)arg1;
- (void)setAppStoreHandler:(id /* block */)arg1;
- (void)setBarButtonItem:(id)arg1;
- (void)setCancelationHandler:(id /* block */)arg1;
- (void)setConfirmationView:(id)arg1;
- (void)setInstallable:(id)arg1;
- (void)setInstallingState;
- (void)setMessage:(id)arg1;
- (void)setPreInstallState;
- (void)setSecondaryLinkHandler:(id /* block */)arg1;
- (void)setSecondaryLinkTitle:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setUpdateMessage:(id)arg1;
- (void)setUpdateTitle:(id)arg1;
- (unsigned long long)state;
- (void)viewDidAppear:(bool)arg1;

@end
