
@interface MPCPlaybackAccount : NSObject <NSCopying> {
    bool  _activeAccount;
    ICURLBag * _bag;
    bool  _delegated;
    bool  _hasCloudLibraryEnabled;
    NSString * _hashedDSID;
    bool  _privateListeningEnabled;
    NSString * _storeFrontIdentifier;
    ICMusicSubscriptionStatus * _subscriptionStatus;
    ICUserIdentity * _userIdentity;
}

@property (getter=isActiveAccount, nonatomic) bool activeAccount;
@property (nonatomic, retain) ICURLBag *bag;
@property (nonatomic, readonly) bool canAutoPlay;
@property (getter=isDelegated, nonatomic, readonly) bool delegated;
@property (nonatomic, readonly) bool hasCatalogPlaybackCapability;
@property (nonatomic) bool hasCloudLibraryEnabled;
@property (nonatomic, copy) NSString *hashedDSID;
@property (getter=isPrivateListeningEnabled, nonatomic) bool privateListeningEnabled;
@property (nonatomic, readonly) bool requiresAuthorizationTokenForPlayback;
@property (nonatomic, readonly, copy) NSString *shortHashedDSID;
@property (nonatomic, copy) NSString *storeFrontIdentifier;
@property (nonatomic, readonly) ICMusicSubscriptionStatus *subscriptionStatus;
@property (nonatomic, readonly) ICUserIdentity *userIdentity;
@property (nonatomic, readonly) bool usesLease;

- (void).cxx_destruct;
- (id)bag;
- (bool)canAutoPlay;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)hasCatalogPlaybackCapability;
- (bool)hasCloudLibraryEnabled;
- (unsigned long long)hash;
- (id)hashedDSID;
- (id)initWithDelegatedUserIdentity:(id)arg1;
- (id)initWithUserIdentity:(id)arg1 subscriptionStatus:(id)arg2;
- (bool)isActiveAccount;
- (bool)isDelegated;
- (bool)isEqual:(id)arg1;
- (bool)isPrivateListeningEnabled;
- (bool)requiresAuthorizationTokenForPlayback;
- (void)setActiveAccount:(bool)arg1;
- (void)setBag:(id)arg1;
- (void)setHasCloudLibraryEnabled:(bool)arg1;
- (void)setHashedDSID:(id)arg1;
- (void)setPrivateListeningEnabled:(bool)arg1;
- (void)setStoreFrontIdentifier:(id)arg1;
- (id)shortHashedDSID;
- (id)storeFrontIdentifier;
- (id)subscriptionStatus;
- (id)userIdentity;
- (bool)usesLease;

@end
