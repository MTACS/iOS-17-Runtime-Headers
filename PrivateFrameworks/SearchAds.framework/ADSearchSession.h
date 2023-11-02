
@interface ADSearchSession : NSObject {
    NSString * _appID;
    NSString * _appVersion;
    int  _appsRank;
    NSString * _campaignNamespace;
    ADCapService * _capService;
    NSString * _clientRequestID;
    NSObject<OS_dispatch_queue> * _idNotificationQueue;
    NSObject * _notificationObserver;
    bool  _notificationReceivedAndWaiting;
    NSObject<OS_dispatch_queue> * _odmlQueue;
    APOdmlSettings * _odmlSettings;
    ADParameterFactory * _parameterFactory;
}

@property (nonatomic, copy) NSString *appID;
@property (nonatomic, copy) NSString *appVersion;
@property (nonatomic) int appsRank;
@property (nonatomic, retain) NSString *campaignNamespace;
@property (nonatomic, retain) ADCapService *capService;
@property (nonatomic, retain) NSString *clientRequestID;
@property (nonatomic, retain) NSObject *notificationObserver;
@property (nonatomic) bool notificationReceivedAndWaiting;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *odmlQueue;
@property (retain) APOdmlSettings *odmlSettings;
@property (nonatomic, retain) ADParameterFactory *parameterFactory;

- (void).cxx_destruct;
- (void)_setODMLProperties:(id)arg1 withSettings:(id)arg2;
- (id)adParameters;
- (id)appID;
- (id)appVersion;
- (int)appsRank;
- (id)campaignNamespace;
- (id)campaignNamespaceParameter;
- (id)capService;
- (id)clientRequestID;
- (void)dealloc;
- (id)initWithAppID:(id)arg1 appVersion:(id)arg2 appsRank:(int)arg3;
- (id)initWithAppID:(id)arg1 appVersion:(id)arg2 appsRank:(int)arg3 storeFront:(id)arg4;
- (id)notificationObserver;
- (bool)notificationReceivedAndWaiting;
- (id)odmlQueue;
- (id)odmlSettings;
- (id)parameterFactory;
- (id)populateStoreFrontLanguageLocale:(id)arg1;
- (void)requestSponsoredSearchDataRoutingInfoAndRequestIDForLocality:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)requestSponsoredSearchURL:(id /* block */)arg1;
- (void)requestUserTargetingIdentifier:(id /* block */)arg1;
- (void)searchObjectForCriteria:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setAppID:(id)arg1;
- (void)setAppVersion:(id)arg1;
- (void)setAppsRank:(int)arg1;
- (void)setCampaignNamespace:(id)arg1;
- (void)setCapService:(id)arg1;
- (void)setClientRequestID:(id)arg1;
- (void)setNotificationObserver:(id)arg1;
- (void)setNotificationReceivedAndWaiting:(bool)arg1;
- (void)setOdmlSettings:(id)arg1;
- (void)setParameterFactory:(id)arg1;
- (id)sponsoredSearchRequestForLanguageLocale:(id)arg1;
- (bool)startUpdatingIDs;
- (id)userTargetingProperties;

@end
