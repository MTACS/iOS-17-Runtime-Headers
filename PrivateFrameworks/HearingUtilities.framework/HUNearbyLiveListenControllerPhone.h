
@interface HUNearbyLiveListenControllerPhone : NSObject <HUNearbyLiveListenDeviceImplementation> {
    float  _cachedAudioLevel;
    unsigned long long  _cachedCurrentCallsCount;
    bool  _cachedHasHearingAidRoute;
    bool  _cachedHasLiveListenRoute;
    bool  _cachedIsListening;
    NSArray * _cachedNearbyWatches;
    bool  _cachedWirelessSplitterEnabled;
    HUNearbyLiveListenController * _controller;
    NSString * _currentOtherDeviceName;
    NSString * _currentOtherDeviceType;
    AXHALiveListenObserver * _liveListenObserver;
    NSObject<OS_dispatch_queue> * _updateQueue;
}

@property (nonatomic) float cachedAudioLevel;
@property (nonatomic) unsigned long long cachedCurrentCallsCount;
@property (nonatomic) bool cachedHasHearingAidRoute;
@property (nonatomic) bool cachedHasLiveListenRoute;
@property (nonatomic) bool cachedIsListening;
@property (nonatomic, copy) NSArray *cachedNearbyWatches;
@property (nonatomic) bool cachedWirelessSplitterEnabled;
@property (nonatomic) HUNearbyLiveListenController *controller;
@property (nonatomic, copy) NSString *currentOtherDeviceName;
@property (nonatomic, copy) NSString *currentOtherDeviceType;
@property (nonatomic, retain) AXHALiveListenObserver *liveListenObserver;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *updateQueue;

- (void).cxx_destruct;
- (void)_audioRoutesChanged:(id)arg1;
- (void)_callsStatusChanged:(id)arg1;
- (void)_handleRequestCurrentStateMessageFromDevice:(id)arg1;
- (void)_handleStartOrStopMessageFromRemoteWatch:(id)arg1 message:(id)arg2;
- (void)_isListeningChanged:(bool)arg1 audioLevel:(float)arg2;
- (void)_logLiveListenAnalytics;
- (void)_nearbyDevicesChanged;
- (void)_receivedMessage:(id)arg1 fromDevice:(id)arg2;
- (void)_startLiveListenFromRemoteDevice:(id)arg1;
- (void)_stopLiveListenFromRemoteDevice:(id)arg1;
- (void)_updateAnalyticsInformation;
- (void)_updateState;
- (void)_wirelessSplitterEnabledChanged:(id)arg1;
- (float)cachedAudioLevel;
- (unsigned long long)cachedCurrentCallsCount;
- (bool)cachedHasHearingAidRoute;
- (bool)cachedHasLiveListenRoute;
- (bool)cachedIsListening;
- (id)cachedNearbyWatches;
- (bool)cachedWirelessSplitterEnabled;
- (id)controller;
- (id)currentOtherDeviceName;
- (id)currentOtherDeviceType;
- (id)initWithController:(id)arg1;
- (id)liveListenObserver;
- (void)setCachedAudioLevel:(float)arg1;
- (void)setCachedCurrentCallsCount:(unsigned long long)arg1;
- (void)setCachedHasHearingAidRoute:(bool)arg1;
- (void)setCachedHasLiveListenRoute:(bool)arg1;
- (void)setCachedIsListening:(bool)arg1;
- (void)setCachedNearbyWatches:(id)arg1;
- (void)setCachedWirelessSplitterEnabled:(bool)arg1;
- (void)setController:(id)arg1;
- (void)setCurrentOtherDeviceName:(id)arg1;
- (void)setCurrentOtherDeviceType:(id)arg1;
- (void)setLiveListenObserver:(id)arg1;
- (void)setUpdateQueue:(id)arg1;
- (void)startLiveListen;
- (void)startObserving;
- (void)stopLiveListen;
- (void)stopObserving;
- (id)updateQueue;

@end
