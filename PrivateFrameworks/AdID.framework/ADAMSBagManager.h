
@interface ADAMSBagManager : ADSingleton <AMSBagConsumer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;
+ (id)sharedInstance;

- (bool)authenticateAccountThroughAMSOperation:(id)arg1;
- (bool)retrieveIsSponsoredAdsEnabledValueForAdTrackingdFromAMSBag;
- (bool)retrieveIsSponsoredAdsEnabledValueFromAMSBag;
- (id)retrieveJingleRequestURLFromAMSBagWithPartialityKey:(id)arg1;
- (long long)retrieveLatestPersonalizedAdsConsentVersionFromAMSBag;

@end
