
@interface AVTViewThrottler : NSObject <AVTDeviceResourceConsumer> {
    NSTimer * _autoUnthrottlingTimer;
    AVTView * _avtView;
    <AVTDeviceResourceConsumerDelegate> * _consumerDelegate;
    <AVTUILogger> * _logger;
    bool  _throttling;
}

@property (nonatomic, retain) NSTimer *autoUnthrottlingTimer;
@property (nonatomic, readonly) AVTView *avtView;
@property (nonatomic) <AVTDeviceResourceConsumerDelegate> *consumerDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <AVTUILogger> *logger;
@property (readonly) Class superclass;
@property (nonatomic) bool throttling;

- (void).cxx_destruct;
- (void)applyThrottling;
- (void)autoUnthrottle;
- (id)autoUnthrottlingTimer;
- (id)avtView;
- (void)cancelAutoUnthrottling;
- (id)consumerDelegate;
- (void)dealloc;
- (id)initWithAVTView:(id)arg1 environment:(id)arg2;
- (id)logger;
- (void)releaseRenderingResourceForEstimatedDuration:(double)arg1;
- (void)scheduleAutoUnthrottlingAfterDelay:(double)arg1;
- (void)setAutoUnthrottlingTimer:(id)arg1;
- (void)setConsumerDelegate:(id)arg1;
- (void)setThrottling:(bool)arg1;
- (void)throttle;
- (void)throttleForDelay:(double)arg1;
- (bool)throttling;
- (void)unthrottle;

@end
