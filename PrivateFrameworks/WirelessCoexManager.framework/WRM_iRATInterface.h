
@interface WRM_iRATInterface : WRMClientInterface {
    NSMutableArray * mAppLists;
    bool  mBBAssertionBGAppActive;
    bool  mClientSupportsMultipleAppTypes;
    id /* block */  mGetLinkRecommendationMetricsHandler;
    bool  mGetLinkRecommendationMetricsHandlerEnabled;
    bool  mLinkPreferenceSubscriptionEnabled;
    bool  mLocationAssertionEnabled;
    int  mLocationState;
    id /* block */  mLowPowerModePeriodicWakeUpCb;
    id /* block */  mObserver;
    id /* block */  mOppBtLQMObserver;
    id /* block */  mOppModeObserver;
    bool  mProximityGetLinkRecommendationEnabled;
    id /* block */  mProximityGetLinkRecommendationHandler;
    NSMutableArray * mProximityLinkRecommendationList;
    bool  mProximitySubscribeLinkRecommendationEnabled;
    id /* block */  mProximitySubscribeLinkRecommendationHandler;
    bool  mTelephoneAssertionEnabled;
    bool  mTelephonyStateEnabled;
}

- (void).cxx_destruct;
- (void)_expediteBBAssertionBGAppActive_sync:(bool)arg1 handler:(id /* block */)arg2;
- (void)addAppType:(id)arg1;
- (void)addProximityLinkRecommendationType:(id)arg1;
- (void)assertCommCenterBaseBand:(int)arg1;
- (void)assertCommCenterBaseBandMode:(int)arg1;
- (void)expediteBBAssertionBGAppActive:(bool)arg1 handler:(id /* block */)arg2;
- (void)expediteCellularForReason:(bool)arg1 reason:(id)arg2;
- (void)getLinkRecommendationMetrics:(id /* block */)arg1;
- (void)getMLPredictedThroughput:(id /* block */)arg1 options:(id)arg2;
- (void)getProximityLinkRecommendation:(bool)arg1 recommendation:(id /* block */)arg2;
- (int)getStatusUpdateMessageType:(int)arg1;
- (void)getStreamingInfo:(id /* block */)arg1 linkType:(int)arg2;
- (int)getSubscribeMessageType:(int)arg1;
- (void)handleNotification:(id)arg1 :(bool)arg2;
- (id)init;
- (void)processBTLQMNotification:(id)arg1;
- (void)processLowPowerModePeriodicWakeUpNotification;
- (void)processMetricsNotificationReport:(id)arg1;
- (void)processNotificationList:(id)arg1 :(unsigned long long)arg2;
- (void)processNotificationListForTerminus:(id)arg1;
- (void)processOperatingModeNotification:(id)arg1;
- (void)reConnect;
- (void)registerClient:(int)arg1 queue:(id)arg2;
- (void)removeAppType:(id)arg1;
- (void)removeProximityLinkRecommendationType:(id)arg1;
- (void)setTelephonyEnabled:(bool)arg1;
- (void)statusUpdateAppLinkPreference:(int)arg1 status:(bool)arg2;
- (void)statusUpdateAppType:(int)arg1 linkType:(int)arg2 serviceStatus:(bool)arg3;
- (void)subscribeAppType:(struct { int x1; int x2; int x3; int x4; })arg1 observer:(id /* block */)arg2;
- (void)subscribeBtLqmScoreNotification:(id /* block */)arg1;
- (void)subscribeDataLinkRecommendation:(id /* block */)arg1;
- (void)subscribeLowPowerModePeriodicWakeupNotification:(id /* block */)arg1;
- (void)subscribeMultipleAppTypes:(id)arg1 observer:(id /* block */)arg2;
- (void)subscribeOperatingModeChangeNotification:(id /* block */)arg1;
- (void)subscribeProximityLinkRecommendation:(id /* block */)arg1;
- (void)subscribeStandaloneLinkRecommendation:(id /* block */)arg1;
- (void)unregisterClient;

@end
