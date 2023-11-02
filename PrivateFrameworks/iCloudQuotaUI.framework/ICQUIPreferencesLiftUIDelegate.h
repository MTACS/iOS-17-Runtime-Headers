
@interface ICQUIPreferencesLiftUIDelegate : NSObject <ICQLiftUIPresenterDelegate> {
    ACAccount * _account;
    <PreferencesRemoteUIDelegateProtocol> * _delegate;
    UINavigationController * _navigation;
    ICQLiftUIPresenter * _presenter;
}

@property (nonatomic, retain) ACAccount *account;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PreferencesRemoteUIDelegateProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UINavigationController *navigation;
@property (nonatomic, retain) ICQLiftUIPresenter *presenter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)account;
- (id)delegate;
- (id)initWithNavigationController:(id)arg1 account:(id)arg2;
- (void)liftUIPresenterDidCancel:(id)arg1;
- (void)liftUIPresenterDidComplete:(id)arg1;
- (void)loadURL:(id)arg1;
- (id)navigation;
- (id)presenter;
- (void)setAccount:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNavigation:(id)arg1;
- (void)setPresenter:(id)arg1;

@end
