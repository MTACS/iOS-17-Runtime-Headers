
@interface WFDelayAction : WFAction {
    WFAutoIncrementingProgress * _delayProgress;
    NSObject<OS_dispatch_source> * _timer;
}

@property (nonatomic, retain) WFAutoIncrementingProgress *delayProgress;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timer;

- (void).cxx_destruct;
- (id)delayProgress;
- (void)finishRunningWithError:(id)arg1;
- (bool)isProgressIndeterminate;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)setDelayProgress:(id)arg1;
- (void)setTimer:(id)arg1;
- (id)timer;

@end
