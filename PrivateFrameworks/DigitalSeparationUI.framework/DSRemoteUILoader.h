
@interface DSRemoteUILoader : NSObject <AAUIGrandSlamRemoteUIPresenterDelegate, AIDAAccountManagerDelegate, DSController> {
    AIDAAccountManager * _accountManager;
    ACAccount * _currentAccount;
    <DSNavigationDelegate> * _delegate;
    AAUIGrandSlamRemoteUIPresenter * _privacyRepairPresenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DSNavigationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (id)accountsForAccountManager:(id)arg1;
- (id)delegate;
- (id)initWithAccountManager:(id)arg1 presenter:(id)arg2 delegate:(id)arg3;
- (id)initWithPresenter:(id)arg1 delegate:(id)arg2;
- (void)loadRemoteUI;
- (void)remoteUIDidEndFlow:(id)arg1;
- (void)remoteUIDidReceiveHTTPResponse:(id)arg1;
- (void)remoteUIRequestComplete:(id)arg1 error:(id)arg2;
- (void)remoteUIWillLoadRequest:(id)arg1;
- (void)remoteUIWillPresentObjectModel:(id)arg1 modally:(bool)arg2;
- (void)setDelegate:(id)arg1;

@end
