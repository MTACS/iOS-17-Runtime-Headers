
@interface ICMusicUserState : NSObject <ICMutableMusicUserState, NSCopying, NSSecureCoding> {
    NSString * _carrierBundleDeviceID;
    long long  _cloudLibrarySyncStatus;
    ICMusicUserStateCookies * _cookies;
    ICDelegateToken * _delegateToken;
    bool  _frozen;
    bool  _isDelegated;
    ICMusicLibraryAuthTokenStatus * _libraryAuthTokenStatus;
    ICLightweightMusicSubscriptionStatus * _lightweightSubscriptionStatus;
    ICMusicSubscriptionStatus * _subscriptionStatus;
    ICMusicUserProfile * _userProfile;
    bool  _usesListeningHistory;
}

@property (nonatomic, copy) NSString *carrierBundleDeviceID;
@property (nonatomic) long long cloudLibrarySyncStatus;
@property (nonatomic, copy) ICMusicUserStateCookies *cookies;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) ICDelegateToken *delegateToken;
@property (readonly, copy) NSString *description;
@property (getter=isFrozen, nonatomic) bool frozen;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDelegated;
@property (nonatomic, copy) ICMusicLibraryAuthTokenStatus *libraryAuthTokenStatus;
@property (nonatomic, copy) ICLightweightMusicSubscriptionStatus *lightweightSubscriptionStatus;
@property (nonatomic, copy) ICMusicSubscriptionStatus *subscriptionStatus;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) ICMusicUserProfile *userProfile;
@property (nonatomic) bool usesListeningHistory;

+ (long long)groupSessionCapableStatus;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)carrierBundleDeviceID;
- (long long)cloudLibrarySyncStatus;
- (id)cookies;
- (id)copyWithBlock:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegateToken;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBlock:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isDelegated;
- (bool)isEqual:(id)arg1;
- (bool)isFrozen;
- (id)libraryAuthTokenStatus;
- (id)lightweightSubscriptionStatus;
- (void)setCarrierBundleDeviceID:(id)arg1;
- (void)setCloudLibrarySyncStatus:(long long)arg1;
- (void)setCookies:(id)arg1;
- (void)setFrozen:(bool)arg1;
- (void)setLibraryAuthTokenStatus:(id)arg1;
- (void)setLightweightSubscriptionStatus:(id)arg1;
- (void)setSubscriptionStatus:(id)arg1;
- (void)setUserProfile:(id)arg1;
- (void)setUsesListeningHistory:(bool)arg1;
- (id)subscriptionStatus;
- (id)userProfile;
- (bool)usesListeningHistory;

@end
