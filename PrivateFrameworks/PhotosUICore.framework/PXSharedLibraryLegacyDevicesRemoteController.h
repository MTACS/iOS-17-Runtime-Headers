
@interface PXSharedLibraryLegacyDevicesRemoteController : PXObservable <AAUIGrandSlamRemoteUIPresenterDelegate, AIDAAccountManagerDelegate> {
    AIDAAccountManager * _accountManager;
    ACAccount * _currentAccount;
    AAUIGrandSlamRemoteUIPresenter * _remoteUIPresenter;
    long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long state;
@property (readonly) Class superclass;

+ (id)legacyDevicesRemoteControllerIfEnabledWithSharedLibraryOrPreviewPresent:(bool)arg1;

- (void).cxx_destruct;
- (id)_init;
- (void)_updateStateOnMainQueue:(long long)arg1;
- (id)accountsForAccountManager:(id)arg1;
- (void)beginRemoteUIRequestWithPresenter:(id)arg1;
- (id)init;
- (void)remoteUIDidEndFlow:(id)arg1;
- (void)remoteUIRequestComplete:(id)arg1 error:(id)arg2;
- (void)remoteUIWillLoadRequest:(id)arg1;
- (void)remoteUIWillPresentObjectModel:(id)arg1 modally:(bool)arg2;
- (void)setState:(long long)arg1;
- (long long)state;

@end
