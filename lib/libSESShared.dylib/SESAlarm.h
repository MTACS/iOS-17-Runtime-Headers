
@interface SESAlarm : NSObject {
    NSMutableSet * pendingAlarms;
    NSObject<OS_dispatch_queue> * queue;
    NSMapTable * registered;
}

+ (void)clearAlarm:(id)arg1;
+ (void)deregisterAlarm:(id)arg1;
+ (bool)isAlarmSet:(id)arg1;
+ (void)kickoff;
+ (bool)registerAlarm:(id)arg1 handler:(id)arg2;
+ (void)setAlarm:(id)arg1 secondsFromNow:(double)arg2;
+ (id)sharedObject;

- (void).cxx_destruct;
- (void)_handleAlarmFired:(id)arg1;
- (id)init;

@end
