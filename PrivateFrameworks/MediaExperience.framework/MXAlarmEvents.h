
@interface MXAlarmEvents : NSObject {
    NSObject<OS_dispatch_queue> * mAccessQueue;
}

+ (id)sharedInstance;

- (void)handleAlarmEventNotification:(id)arg1;
- (id)init;
- (void)resetAlarmEvent:(id)arg1;
- (void)setAlarmEvent:(double)arg1 eventName:(id)arg2;

@end
