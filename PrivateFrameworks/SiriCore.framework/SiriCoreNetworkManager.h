
@interface SiriCoreNetworkManager : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientDataDelegate, CoreTelephonyClientSubscriberDelegate> {
    NSString * _carrierName;
    CoreTelephonyClient * _coreTelephonyClient;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _ctLock;
    CTServiceDescriptor * _dataServiceDescriptor;
    bool  _hasSymptomsBasedHistoricalCellQuality;
    bool  _hasSymptomsBasedHistoricalWiFiQuality;
    bool  _hasSymptomsBasedInstantCellQuality;
    bool  _hasSymptomsBasedInstantWiFiQuality;
    bool  _iRATCallInProgress;
    unsigned long long  _iRATCallNumber;
    WRM_iRATInterface * _interface;
    long long  _lastDataSubscriptionSlot;
    bool  _lastFetchInProgress;
    NSNumber * _lastSignalStrength;
    double  _lastSuccessfulSymptomsFetch;
    double  _lastiRATFetch;
    SiriCoreLinkRecommendationInfo * _linkMetricsInfo;
    SiriCoreLinkRecommendationInfo * _linkRecommendationInfo;
    NSHashTable * _observers;
    NSObject<OS_nw_path_evaluator> * _pathEvaluator;
    int  _pathStatus;
    bool  _pathUsesCellular;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _subscriptionCount;
    NSString * _subscriptionSlotOneStatus;
    NSString * _subscriptionSlotTwoStatus;
    bool  _symptomsBasedHistoricalCellQualityIsGood;
    bool  _symptomsBasedHistoricalWiFiQualityIsGood;
    bool  _symptomsBasedInstantCellQualityIsGood;
    bool  _symptomsBasedInstantWiFiQualityIsGood;
    SiriCoreWiFiManagerClient * _wiFiManagerClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_ifnameTypeForName:(char *)arg1 isWiFi:(bool*)arg2 isCellular:(bool*)arg3;
+ (void)acquireDormancySuspendAssertion:(const void**)arg1;
+ (long long)connectionSubTypeForCellularInterface;
+ (long long)connectionTypeForInterface:(id)arg1;
+ (id)connectionTypeForInterfaceName:(id)arg1 isCellular:(bool)arg2;
+ (void)getCarrierName:(id*)arg1 signalStrength:(id*)arg2 subscriptionCount:(id*)arg3;
+ (void)releaseDormancySuspendAssertion:(void*)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_dataServiceDescriptorUpdate;
- (void)_dataSubscriptionContextChange:(id)arg1;
- (bool)_defaultBTLinkRecommendation;
- (bool)_defaultWiFiLinkRecommendation;
- (void)_getCarrierName:(id*)arg1;
- (bool)_getConnectionSuccessRate:(id)arg1 hasMetric:(bool*)arg2;
- (long long)_getConnectionTechnologyForCellularInterface;
- (void)_getLinkRecommendationSafe:(bool)arg1 recommendation:(id /* block */)arg2;
- (void)_getNetworkPerformanceFeed;
- (id)_init;
- (void)_pathUpdated:(id)arg1;
- (long long)_reportCellularHistoricalQuality;
- (long long)_reportCellularInstantQuality;
- (long long)_reportWiFiHistoricalQuality;
- (long long)_reportWiFiInstantQuality;
- (void)_serviceSubscriptionInfoUpdate;
- (void)_signalStrengthChange:(id)arg1;
- (void)_signalStrengthUpdate;
- (void)_stopMonitoringNetwork;
- (void)_subscribeToLinkRecommendations:(id)arg1;
- (id)_wiFiManagerClient;
- (void)acquireWiFiAssertion:(long long)arg1;
- (void)addObserver:(id)arg1;
- (long long)anyNetworkQuality;
- (void)carrierBundleChange:(id)arg1;
- (long long)cellularNetworkQuality;
- (void)deRegisterWithWirelessCoexManager;
- (void)dealloc;
- (void)forceFastDormancy;
- (void)getLinkRecommendation:(bool)arg1 recommendation:(id /* block */)arg2;
- (void)getNetworkPerformanceFeed;
- (void)getQualityReport:(id /* block */)arg1;
- (void)getSignalStrength:(id*)arg1 subscriptionCount:(unsigned long long*)arg2;
- (void)preferredDataSimChanged:(id)arg1;
- (void)proximityRecomendationWithCompletion:(id /* block */)arg1;
- (void)registerWithWirelessCoexManager;
- (void)releaseWiFiAssertion;
- (void)removeObserver:(id)arg1;
- (void)resetLinkMetrics;
- (void)signalStrengthChanged:(id)arg1 info:(id)arg2;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (void)startMonitoringNetworkForHost:(id)arg1;
- (void)stopMonitoringNetwork;
- (long long)wifiNetworkQuality;

@end
