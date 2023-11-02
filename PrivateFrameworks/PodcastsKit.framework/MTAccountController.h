
@interface MTAccountController : MTSingleton <MTAccountControllerProtocol> {
    ACAccount * __activeAccount;
    ACAccount * _accountOverride;
    NSObject<OS_dispatch_queue> * _accountQueue;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSMutableSet * _declinedAuthRequests;
    bool  _hasFetchedInitialAccount;
    NSMutableSet * _inFlightAuthRequests;
}

@property (nonatomic, retain) ACAccount *_activeAccount;
@property (nonatomic, retain) ACAccount *accountOverride;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSMutableSet *declinedAuthRequests;
@property (readonly, copy) NSString *description;
@property bool hasFetchedInitialAccount;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableSet *inFlightAuthRequests;
@property (readonly) Class superclass;

+ (bool)iTunesAccountDidChangeForACAccountNotification:(id)arg1;

- (void).cxx_destruct;
- (id)_activeAccount;
- (id)_activeAccountBlocking;
- (void)_updateActiveAccount;
- (id)accountOverride;
- (id)activeAccount;
- (bool)activeAccountIsManagedAppleID;
- (id)activeDsid;
- (id)activeEmail;
- (id)activeFullName;
- (id)activeStorefront;
- (void)dealloc;
- (id)declinedAuthRequests;
- (void)didChangeStoreAccount:(id)arg1;
- (void)fetchActiveAccountWithCompletion:(id /* block */)arg1;
- (bool)hasFetchedInitialAccount;
- (id)inFlightAuthRequests;
- (id)init;
- (bool)isPrimaryUserActiveAccount;
- (bool)isUserLoggedIn;
- (id)primaryUser;
- (void)setAccountOverride:(id)arg1;
- (void)setActiveAccount:(id)arg1;
- (void)setDeclinedAuthRequests:(id)arg1;
- (void)setHasFetchedInitialAccount:(bool)arg1;
- (void)setInFlightAuthRequests:(id)arg1;
- (void)set_activeAccount:(id)arg1;

@end
