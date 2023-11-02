
@interface SHRemoteConfiguration : NSObject {
    AMSBag * _amsBag;
    AMSBagValue * _cacheValuesBagValue;
    AMSBagValue * _campaignTokenBagValue;
    AMSBagValue * _defaultValuesBagValue;
    AMSBagValue * _endpointsBagValue;
    AMSBagValue * _externalHostBagValue;
    AMSBagValue * _featureFlagsBagValue;
    AMSBagValue * _internalHostBagValue;
    AMSBagValue * _languageTagBagValue;
    SHMusicSubscriptionStatus * _musicSubscriptionStatus;
    AMSBagValue * _recorderConfigurationBagValue;
    AMSBagValue * _shazamOfferAPIEndpointsBagValue;
    AMSBagValue * _shazamOfferAPIHostsBagValue;
    ICLightweightMusicSubscriptionStatusRequest * _subscriptionRequest;
}

@property (nonatomic, retain) AMSBag *amsBag;
@property (nonatomic, retain) AMSBagValue *cacheValuesBagValue;
@property (nonatomic, retain) AMSBagValue *campaignTokenBagValue;
@property (nonatomic, retain) AMSBagValue *defaultValuesBagValue;
@property (nonatomic, retain) AMSBagValue *endpointsBagValue;
@property (nonatomic, retain) AMSBagValue *externalHostBagValue;
@property (nonatomic, retain) AMSBagValue *featureFlagsBagValue;
@property (nonatomic, retain) AMSBagValue *internalHostBagValue;
@property (nonatomic, retain) AMSBagValue *languageTagBagValue;
@property (nonatomic, retain) SHMusicSubscriptionStatus *musicSubscriptionStatus;
@property (nonatomic, retain) AMSBagValue *recorderConfigurationBagValue;
@property (nonatomic, retain) AMSBagValue *shazamOfferAPIEndpointsBagValue;
@property (nonatomic, retain) AMSBagValue *shazamOfferAPIHostsBagValue;
@property (nonatomic, retain) ICLightweightMusicSubscriptionStatusRequest *subscriptionRequest;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)amsBag;
- (id)cacheValuesBagValue;
- (void)cacheValuesWithCompletion:(id /* block */)arg1;
- (id)campaignTokenBagValue;
- (void)campaignTokenWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)defaultValuesBagValue;
- (void)defaultValuesWithCompletion:(id /* block */)arg1;
- (void)didChangeMusicSubscriptionStatus:(id)arg1;
- (id)endpointsBagValue;
- (void)endpointsWithCompletion:(id /* block */)arg1;
- (id)externalHostBagValue;
- (id)featureFlagsBagValue;
- (void)featureFlagsWithCompletion:(id /* block */)arg1;
- (void)fetchMusicSubscriptionStatus;
- (void)hostForClientType:(long long)arg1 completion:(id /* block */)arg2;
- (id)initWithBag:(id)arg1;
- (id)internalHostBagValue;
- (id)languageTagBagValue;
- (id)musicSubscriptionStatus;
- (void)offerValuesWithCompletion:(id /* block */)arg1;
- (void)populateRemoteConfiguration;
- (id)recorderConfigurationBagValue;
- (void)recorderConfigurationWithCompletion:(id /* block */)arg1;
- (id)recorderConfigurationWithPromise;
- (void)setAmsBag:(id)arg1;
- (void)setCacheValuesBagValue:(id)arg1;
- (void)setCampaignTokenBagValue:(id)arg1;
- (void)setDefaultValuesBagValue:(id)arg1;
- (void)setEndpointsBagValue:(id)arg1;
- (void)setExternalHostBagValue:(id)arg1;
- (void)setFeatureFlagsBagValue:(id)arg1;
- (void)setInternalHostBagValue:(id)arg1;
- (void)setLanguageTagBagValue:(id)arg1;
- (void)setMusicSubscriptionStatus:(id)arg1;
- (void)setRecorderConfigurationBagValue:(id)arg1;
- (void)setShazamOfferAPIEndpointsBagValue:(id)arg1;
- (void)setShazamOfferAPIHostsBagValue:(id)arg1;
- (void)setSubscriptionRequest:(id)arg1;
- (id)shazamOfferAPIEndpointsBagValue;
- (void)shazamOfferAPIHostWithCompletion:(id /* block */)arg1;
- (id)shazamOfferAPIHostsBagValue;
- (void)shazamOfferAPIURLPathWithCompletion:(id /* block */)arg1;
- (id)subscriptionRequest;

@end
