
@interface HUNearbyLiveListenControllerWatch : NSObject <HUNearbyLiveListenDeviceImplementation> {
    double  _cachedLevels;
    NSArray * _cachedNearbyDevices;
    long long  _cachedState;
    HUNearbyLiveListenController * _controller;
    NSObject<OS_dispatch_queue> * _updateQueue;
}

@property (nonatomic) double cachedLevels;
@property (nonatomic, copy) NSArray *cachedNearbyDevices;
@property (nonatomic) long long cachedState;
@property (nonatomic) HUNearbyLiveListenController *controller;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *updateQueue;

- (void).cxx_destruct;
- (void)_handleStateChangedMessage:(id)arg1;
- (void)_nearbyDevicesChanged;
- (void)_receivedMessage:(id)arg1 fromDevice:(id)arg2;
- (void)_sendMessageToRequestInitialState;
- (void)_sendStartOrStopMessage:(bool)arg1;
- (void)_updateState;
- (double)cachedLevels;
- (id)cachedNearbyDevices;
- (long long)cachedState;
- (id)controller;
- (id)initWithController:(id)arg1;
- (void)setCachedLevels:(double)arg1;
- (void)setCachedNearbyDevices:(id)arg1;
- (void)setCachedState:(long long)arg1;
- (void)setController:(id)arg1;
- (void)setUpdateQueue:(id)arg1;
- (void)startLiveListen;
- (void)startObserving;
- (void)stopLiveListen;
- (void)stopObserving;
- (id)updateQueue;

@end
