
@interface ATXSmartActivationEarlyExitDetectionLogger : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    BMBiomeScheduler * _scheduler;
    BPSSink * _sink;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_logEventIfEarlyExit:(id)arg1;
- (void)_processNewUserFocusComputedModeEvent:(id)arg1;
- (void)_registerForModeChangeNotifications;
- (id)init;
- (void)stopListening;

@end
