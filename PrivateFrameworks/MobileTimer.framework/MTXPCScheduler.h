
@interface MTXPCScheduler : NSObject <MTSchedulingDelegate> {
    NSString * _eventName;
}

@property (nonatomic, copy) NSString *eventName;

+ (id)xpcSchedulerWithEvent:(id)arg1;

- (void).cxx_destruct;
- (id)eventName;
- (id)initWithEvent:(id)arg1;
- (void)scheduleActivityWithCriteria:(id)arg1 activityHandler:(id /* block */)arg2;
- (void)scheduleActivityWithCriteria:(id)arg1 activityHandler:(id /* block */)arg2 performImmediately:(bool)arg3;
- (void)scheduleTimerForSeconds:(double)arg1;
- (void)setEventName:(id)arg1;
- (void)unscheduleActivity;
- (void)unscheduleTimer;

@end
