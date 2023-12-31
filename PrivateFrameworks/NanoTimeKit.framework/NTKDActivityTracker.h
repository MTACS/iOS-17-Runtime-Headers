
@interface NTKDActivityTracker : NSObject {
    NSMutableSet * _activityIdentifiers;
    NSObject<OS_dispatch_source> * _adjustCriteriaTimer;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _removePostWakeActivityTimer;
    bool  _xpcActivityRegistered;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_queue_beginActivity:(id)arg1;
- (void)_queue_endActivity:(id)arg1;
- (void)_queue_setOrUpdateActivityAndTimer;
- (void)beginActivity:(id)arg1;
- (void)checkin;
- (void)endActivity:(id)arg1;
- (id)init;

@end
