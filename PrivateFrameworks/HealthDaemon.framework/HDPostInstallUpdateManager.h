
@interface HDPostInstallUpdateManager : NSObject {
    NSObject<OS_dispatch_source> * _activityPollSource;
    HDDaemon * _daemon;
    NSObject<OS_dispatch_queue> * _monitoringQueue;
    HKObserverSet * _observers;
}

@property (nonatomic, readonly) HDDaemon *daemon;

- (void).cxx_destruct;
- (id)daemon;
- (id)initWithDaemon:(id)arg1;
- (void)registerUpdateTaskHandler:(id)arg1 queue:(id)arg2;
- (void)start;
- (void)unregisterUpdateTaskHandler:(id)arg1;

@end
