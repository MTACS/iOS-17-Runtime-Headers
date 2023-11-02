
@interface SAUserState : AceObject <SABackgroundContextObject>

@property (nonatomic) bool ageVerificationRequired;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSString *defaultMediaPlaybackAppBundleIdentifier;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *eligibleOffers;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *iTunesMatchSubscriptionStatus;
@property (nonatomic) bool isPromotionRelatedStatus;
@property (nonatomic, copy) NSString *sharedUserId;
@property (nonatomic, copy) NSString *status;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *syncSharedUserId;
@property (nonatomic, copy) NSNumber *userHistoryUnmodifiable;
@property (nonatomic, copy) NSString *userToken;
@property (nonatomic, retain) SAUserTokenStatus *userTokenStatus;
@property (nonatomic, copy) NSString *xpAbCookie;

+ (id)userState;
+ (id)userStateWithDictionary:(id)arg1 context:(id)arg2;

- (bool)ageVerificationRequired;
- (id)defaultMediaPlaybackAppBundleIdentifier;
- (id)eligibleOffers;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)iTunesMatchSubscriptionStatus;
- (bool)isPromotionRelatedStatus;
- (void)setAgeVerificationRequired:(bool)arg1;
- (void)setDefaultMediaPlaybackAppBundleIdentifier:(id)arg1;
- (void)setEligibleOffers:(id)arg1;
- (void)setITunesMatchSubscriptionStatus:(id)arg1;
- (void)setIsPromotionRelatedStatus:(bool)arg1;
- (void)setSharedUserId:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setSyncSharedUserId:(id)arg1;
- (void)setUserHistoryUnmodifiable:(id)arg1;
- (void)setUserToken:(id)arg1;
- (void)setUserTokenStatus:(id)arg1;
- (void)setXpAbCookie:(id)arg1;
- (id)sharedUserId;
- (id)status;
- (id)syncSharedUserId;
- (id)userHistoryUnmodifiable;
- (id)userToken;
- (id)userTokenStatus;
- (id)xpAbCookie;

@end
