
@interface SiriCoreLinkRecommendationInfo : NSObject {
    bool  _btPreference;
    WRM_iRATInterface * _iRATClient;
    WRM_iRATProximityRecommendationLogging * _linkRecommendationMetrics;
    double  _timeTaken;
    bool  _wifiPreference;
}

- (void).cxx_destruct;
- (bool)btPreference;
- (void)fetchLinkMetrics:(id /* block */)arg1;
- (id)initWithPreferences:(bool)arg1 wifiPreference:(bool)arg2 timeTaken:(double)arg3 metrics:(id)arg4;
- (id)initWithQueue:(id)arg1;
- (id)linkMetrics;
- (void)resetLinkMetrics;
- (void)setBTPreference:(bool)arg1;
- (void)setLinkMetrics:(id)arg1;
- (void)setTimeTaken:(double)arg1;
- (void)setWiFiPreference:(bool)arg1;
- (double)timeTaken;
- (bool)wifiPreference;

@end
