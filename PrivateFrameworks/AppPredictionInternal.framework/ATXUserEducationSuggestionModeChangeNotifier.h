
@interface ATXUserEducationSuggestionModeChangeNotifier : NSObject {
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
    BMBiomeScheduler * _scheduler;
    BPSSink * _sink;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)processModeChangeEvent:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end
