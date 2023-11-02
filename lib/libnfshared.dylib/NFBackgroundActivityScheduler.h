
@interface NFBackgroundActivityScheduler : NSObject {
    NSMutableDictionary * _activityMap;
    bool  _invalidated;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSMutableDictionary *activityMap;
@property (nonatomic) bool invalidated;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)activityMap;
- (void)backgroundActivityScheduler:(id)arg1 interval:(double)arg2 tolerance:(double)arg3 repeats:(bool)arg4 qualityOfService:(long long)arg5 delay:(double)arg6 callback:(id /* block */)arg7;
- (id)getActivity:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (bool)invalidated;
- (id)queue;
- (void)registerActivity:(id)arg1 identifier:(id)arg2;
- (void)schedulePreRegisteredActivity:(id)arg1 callback:(id /* block */)arg2;
- (void)setActivityMap:(id)arg1;
- (void)setInvalidated:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)unregisterActivity:(id)arg1;

@end
