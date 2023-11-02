
@interface HKWatchAppInstallationManager : NSObject {
    NSString * _bundleIdentifier;
    HKObserverSet * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;

- (void).cxx_destruct;
- (void)_queue_notifyObservers;
- (id)bundleIdentifier;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)isWatchAppInstalledWithError:(id*)arg1;
- (void)registerObserver:(id)arg1;
- (void)registerObserver:(id)arg1 queue:(id)arg2;
- (void)startObserving;
- (void)stopObserving;
- (void)unregisterObserver:(id)arg1;

@end
