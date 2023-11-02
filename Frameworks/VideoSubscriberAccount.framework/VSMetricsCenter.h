
@interface VSMetricsCenter : NSObject <VSManagedProfileConnectionObserver, VSRemoteNotifierDelegate> {
    VSAnalyticsServiceConnection * _analyticsService;
    VSIdentityProvider * _currentIdentityProvider;
    bool  _currentIdentityProviderIsFullySupported;
    bool  _currentIdentityProviderSupportsSTB;
    NSObject<OS_dispatch_queue> * _eventQueue;
    bool  _fetchedSetTopBoxProfile;
    VSPreferences * _preferences;
    NSOperationQueue * _privateQueue;
    VSRemoteNotifier * _remoteNotifier;
    VSSetTopBoxProfile * _stbProfile;
}

@property (nonatomic, retain) VSAnalyticsServiceConnection *analyticsService;
@property (nonatomic, retain) VSIdentityProvider *currentIdentityProvider;
@property (nonatomic) bool currentIdentityProviderIsFullySupported;
@property (nonatomic) bool currentIdentityProviderSupportsSTB;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *eventQueue;
@property (nonatomic) bool fetchedSetTopBoxProfile;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VSPreferences *preferences;
@property (nonatomic, retain) NSOperationQueue *privateQueue;
@property (nonatomic, retain) VSRemoteNotifier *remoteNotifier;
@property (nonatomic, retain) VSSetTopBoxProfile *stbProfile;
@property (readonly) Class superclass;

+ (id)sharedMetricsCenter;

- (void).cxx_destruct;
- (void)accountStoreDidChange;
- (id)analyticsService;
- (id)currentIdentityProvider;
- (bool)currentIdentityProviderIsFullySupported;
- (bool)currentIdentityProviderSupportsSTB;
- (bool)currentProviderIsSetTopBoxProvider;
- (id)eventQueue;
- (void)fetchSetTopBoxProfile;
- (bool)fetchedSetTopBoxProfile;
- (id)flexibleBaseFields;
- (bool)hasSetTopBoxProfile;
- (id)init;
- (id)mutableBaseFields;
- (id)preferences;
- (id)privateQueue;
- (void)profileConnectionProfileChanged:(id)arg1;
- (void)recordClickEventWithPage:(id)arg1 pageType:(id)arg2 target:(id)arg3;
- (void)recordEnterEventWithPage:(id)arg1 pageType:(id)arg2;
- (void)recordExitEventWithPage:(id)arg1 pageType:(id)arg2;
- (void)recordInvalidTemplateErrorWithProviderAppAdamID:(id)arg1;
- (void)recordMetadataRequestWithProviderIdentifier:(id)arg1 channelAdamID:(id)arg2 fulfilledByProvider:(bool)arg3 error:(id)arg4;
- (void)recordSTBOptOutEventWithError:(id)arg1;
- (void)recordSignInEventWithProviderIdentifier:(id)arg1 supportedProvider:(bool)arg2 channelAdamID:(id)arg3 signInType:(id)arg4 error:(id)arg5;
- (void)recordSignOutEventWithProviderIdentifier:(id)arg1;
- (id)remoteNotifier;
- (void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2;
- (void)sendClickEventToAnalyticsServiceWithPage:(id)arg1 pageType:(id)arg2 data:(id)arg3;
- (void)sendEnterEventToAnalyticsServiceWithPage:(id)arg1 pageType:(id)arg2 data:(id)arg3;
- (void)sendExitEventToAnalyticsServiceWithPage:(id)arg1 pageType:(id)arg2 data:(id)arg3;
- (void)sendFlexibleEventToAnalyticsService:(id)arg1 data:(id)arg2;
- (void)setAnalyticsService:(id)arg1;
- (void)setCurrentIdentityProvider:(id)arg1;
- (void)setCurrentIdentityProviderIsFullySupported:(bool)arg1;
- (void)setCurrentIdentityProviderSupportsSTB:(bool)arg1;
- (void)setEventQueue:(id)arg1;
- (void)setFetchedSetTopBoxProfile:(bool)arg1;
- (void)setPreferences:(id)arg1;
- (void)setPrivateQueue:(id)arg1;
- (void)setRemoteNotifier:(id)arg1;
- (void)setStbProfile:(id)arg1;
- (id)stbProfile;
- (id)underlyingErrorsArray:(id)arg1;
- (id)userID;

@end
