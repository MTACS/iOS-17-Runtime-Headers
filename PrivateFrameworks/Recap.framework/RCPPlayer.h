
@interface RCPPlayer : NSObject {
    <RCPAnalyticsEventSender> * _analyticsEventSender;
    <RCPEventDeliveryServicePool> * _deliveryServicePool;
    RCPEventEnvironment * _environment;
    RCPPlayerPlaybackOptions * _playbackOptions;
    bool  _stompSenderForSimulatorPlayback;
}

@property (nonatomic, readonly) <RCPAnalyticsEventSender> *analyticsEventSender;
@property (nonatomic, retain) <RCPEventDeliveryServicePool> *deliveryServicePool;
@property (nonatomic, retain) RCPEventEnvironment *environment;
@property (nonatomic, retain) RCPPlayerPlaybackOptions *playbackOptions;
@property (nonatomic) bool stompSenderForSimulatorPlayback;

+ (void)playEventStream:(id)arg1 withOptions:(id)arg2;
+ (id)sharedPlayer;
+ (void)tearDown;

- (void).cxx_destruct;
- (struct __IOHIDEvent { }*)_cloneAndTransformHIDEvent:(id)arg1 machTimeOffset:(long long)arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
- (void)_sendEvent:(id)arg1 machTimeOffset:(long long)arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
- (void)_sendEvent:(id)arg1 withService:(id)arg2 machTimeOffset:(long long)arg3 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4;
- (id)analyticsEventSender;
- (id)deliveryServicePool;
- (id)environment;
- (id)init;
- (id)initWithDeliveryServicePool:(id)arg1 environment:(id)arg2 analyticsEventSender:(id)arg3;
- (void)playEventStream:(id)arg1 withOptions:(id)arg2;
- (id)playbackOptions;
- (bool)prewarmForEventStream:(id)arg1 withError:(id*)arg2;
- (void)setDeliveryServicePool:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setPlaybackOptions:(id)arg1;
- (void)setStompSenderForSimulatorPlayback:(bool)arg1;
- (bool)stompSenderForSimulatorPlayback;
- (void)tearDown;

@end
