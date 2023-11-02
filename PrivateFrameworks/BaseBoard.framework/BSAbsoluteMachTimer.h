
@interface BSAbsoluteMachTimer : NSObject <BSCancellable, BSInvalidatable, BSTimerScheduleQuerying> {
    BSDispatchTimer * _timer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (getter=isScheduled, nonatomic, readonly) bool scheduled;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeRemaining;

- (void).cxx_destruct;
- (void)cancel;
- (id)debugDescription;
- (id)description;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (void)invalidate;
- (bool)isScheduled;
- (void)scheduleRepeatingWithFireInterval:(double)arg1 repeatInterval:(double)arg2 leewayInterval:(double)arg3 queue:(id)arg4 handler:(id /* block */)arg5;
- (void)scheduleWithFireInterval:(double)arg1 leewayInterval:(double)arg2 queue:(id)arg3 handler:(id /* block */)arg4;
- (double)timeRemaining;

@end
