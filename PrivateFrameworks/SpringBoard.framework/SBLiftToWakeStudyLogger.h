
@interface SBLiftToWakeStudyLogger : NSObject <SBLiftToWakeObserver> {
    SBLiftToWakeController * _controller;
    SLGLog * _logger;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithController:(id)arg1;
- (void)liftToWakeController:(id)arg1 didObserveTransition:(long long)arg2 deviceOrientation:(long long)arg3;

@end
