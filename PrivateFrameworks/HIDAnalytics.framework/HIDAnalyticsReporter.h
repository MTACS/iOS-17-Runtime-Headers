
@interface HIDAnalyticsReporter : NSObject {
    NSMutableSet * _events;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _timer;
}

- (void).cxx_destruct;
- (id)createBucketData:(id)arg1 fieldvalue:(id)arg2 fieldDescription:(id)arg3;
- (void)dealloc;
- (void)dispatchAnalyticsForEvent:(id)arg1;
- (id)init;
- (void)logAnalyticsEvent:(id)arg1;
- (void)logAnalyticsEvent:(id)arg1 eventDescription:(id)arg2 eventValue:(id)arg3;
- (void)registerEvent:(id)arg1;
- (void)start;
- (void)stop;
- (void)unregisterEvent:(id)arg1;

@end
