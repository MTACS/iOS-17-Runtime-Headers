
@interface PSUICarrierSpaceManager : NSObject <CTCarrierSpaceClientDelegate, CoreTelephonyClientSubscriberDelegate> {
    CTCarrierSpaceAppsInfo * _appsInfo;
    CTCarrierSpaceCapabilities * _capabilities;
    PSUIAppInstallController * _carrierAppInstallController;
    CTCarrierSpaceClient * _carrierSpaceClient;
    CoreTelephonyClient * _coreTelephonyClient;
    NSNumber * _hasUserConsent;
    CTCarrierSpacePlansInfo * _plansInfo;
    struct __CTServerConnection { } * _serverConnection;
    CTCarrierSpaceUsageInfo * _usageInfo;
    CTCarrierSpaceUserConsentFlowInfo * _userConsentFlowInfo;
    NSNumber * _userConsentResponse;
}

@property (nonatomic, retain) CTCarrierSpaceClient *carrierSpaceClient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)bytesFromString:(id)arg1 carrierSpaceUnits:(long long)arg2;
+ (int)carrierMetricTypeForString:(id)arg1;
+ (id)getNSURLSessionConfiguration;
+ (bool)isCarrierMetricTypeValid:(int)arg1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)appsDidChange;
- (id)appsInfo;
- (id)capabilities;
- (void)capabilitiesDidChange:(id)arg1;
- (id)carrierAppInstallController;
- (id)carrierSpaceClient;
- (void)dealloc;
- (id)descriptionForPlanMetrics:(id)arg1;
- (id)getLogger;
- (bool)hasUserConsent;
- (id)init;
- (id)localizedDataStringFromBytes:(unsigned long long)arg1;
- (bool)planChangeIsRestricted;
- (id)planMetrics;
- (void)plansDidChange;
- (id)plansInfo;
- (void)refresh;
- (void)refreshAndReload;
- (void)reset;
- (void)setCarrierSpaceClient:(id)arg1;
- (void)setUserConsent:(bool)arg1;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (id)subscribedDomesticPlanOptions;
- (id)subscribedPlanOptions;
- (bool)supportsSweetgum;
- (void)usageDidChange;
- (id)usageInfo;
- (void)userConsentAcknowledged:(bool)arg1;
- (id)userConsentFlowInfo;
- (void)userConsentFlowInfoDidChange;

@end
