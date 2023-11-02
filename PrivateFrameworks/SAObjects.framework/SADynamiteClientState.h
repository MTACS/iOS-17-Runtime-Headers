
@interface SADynamiteClientState : SAAceClientState <SABackgroundContextObject>

@property (nonatomic) bool activeTvUser;
@property (nonatomic) bool ageVerificationRequired;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) SAUserState *defaultUserState;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *eligibleOffers;
@property (nonatomic, retain) SACalendar *expirationDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *iCloudMusicLibraryToggle;
@property (nonatomic, copy) NSString *iTunesMatchSubscriptionStatus;
@property (nonatomic, copy) NSArray *inContextUsersStates;
@property (nonatomic) bool isPromotionRelatedStatus;
@property (nonatomic, copy) NSString *status;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSNumber *userHistoryUnmodifiable;
@property (nonatomic, copy) NSString *userToken;
@property (nonatomic, retain) SAUserTokenStatus *userTokenStatus;
@property (nonatomic, copy) NSString *xpAbCookie;

+ (id)deliveryDeadline;
+ (id)dynamiteClientState;
+ (id)dynamiteClientStateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)persistencePolicy;
+ (id)syncKey;
+ (id)uniqueObjectIdentifier;

- (bool)activeTvUser;
- (bool)ageVerificationRequired;
- (id)defaultUserState;
- (id)eligibleOffers;
- (id)encodedClassName;
- (id)expirationDate;
- (id)groupIdentifier;
- (id)iCloudMusicLibraryToggle;
- (id)iTunesMatchSubscriptionStatus;
- (id)inContextUsersStates;
- (bool)isPromotionRelatedStatus;
- (void)setActiveTvUser:(bool)arg1;
- (void)setAgeVerificationRequired:(bool)arg1;
- (void)setDefaultUserState:(id)arg1;
- (void)setEligibleOffers:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setICloudMusicLibraryToggle:(id)arg1;
- (void)setITunesMatchSubscriptionStatus:(id)arg1;
- (void)setInContextUsersStates:(id)arg1;
- (void)setIsPromotionRelatedStatus:(bool)arg1;
- (void)setStatus:(id)arg1;
- (void)setUserHistoryUnmodifiable:(id)arg1;
- (void)setUserToken:(id)arg1;
- (void)setUserTokenStatus:(id)arg1;
- (void)setXpAbCookie:(id)arg1;
- (id)status;
- (id)userHistoryUnmodifiable;
- (id)userToken;
- (id)userTokenStatus;
- (id)xpAbCookie;

@end
