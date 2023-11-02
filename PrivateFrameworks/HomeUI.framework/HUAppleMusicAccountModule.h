
@interface HUAppleMusicAccountModule : HFItemModule <HFAccessoryObserver, HFAppleMusicAccountObserver> {
    HFStaticItemProvider * _appleMusicAccountActionItemProvider;
    HUAppleMusicAccountItemProvider * _appleMusicAccountItemProvider;
    HUAppleMusicItem * _loggedInUsernameItem;
    HUAppleMusicItem * _loginItem;
    HUAppleMusicItem * _logoutItem;
    <HFMediaProfileContainer> * _mediaProfileContainer;
    unsigned long long  _state;
    id /* block */  _stateChangeObserver;
}

@property (nonatomic, readonly) HFStaticItemProvider *appleMusicAccountActionItemProvider;
@property (nonatomic, readonly) HUAppleMusicAccountItemProvider *appleMusicAccountItemProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *explicitAccountSignedInMessage;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HUAppleMusicItem *loggedInUsernameItem;
@property (nonatomic, readonly) HUAppleMusicItem *loginItem;
@property (nonatomic, readonly) HUAppleMusicItem *logoutItem;
@property (nonatomic, readonly) <HFMediaProfileContainer> *mediaProfileContainer;
@property (nonatomic, readonly) unsigned long long numberOfKnownAccounts;
@property (nonatomic) unsigned long long state;
@property (nonatomic, copy) id /* block */ stateChangeObserver;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)accessoryDidUpdatePreferredMediaUser:(id)arg1;
- (id)appleMusicAccountActionItemProvider;
- (id)appleMusicAccountItemProvider;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (void)dispatcher:(id)arg1 appleMusicAccountsDidUpdate:(id)arg2;
- (id)explicitAccountSignedInMessage;
- (id)initWithMediaProfileContainer:(id)arg1 itemUpdater:(id)arg2;
- (id)itemProviders;
- (id)loggedInUsernameItem;
- (id)loginItem;
- (id)logoutItem;
- (id)mediaProfileContainer;
- (unsigned long long)numberOfKnownAccounts;
- (void)setState:(unsigned long long)arg1;
- (void)setStateChangeObserver:(id /* block */)arg1;
- (id)signInMessage:(bool)arg1;
- (unsigned long long)state;
- (id /* block */)stateChangeObserver;

@end
