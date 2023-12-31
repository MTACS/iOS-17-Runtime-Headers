
@interface BRContainersMonitor : NSObject {
    NSMutableDictionary * _notifyTokenByContainerID;
    NSMutableDictionary * _observersByContainerID;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)bundleIDFromPrimaryIdentifier:(id)arg1 secondaryIdentifier:(id)arg2;
+ (id)containerIDFromPrimaryIdentifier:(id)arg1 secondaryIdentifier:(id)arg2;
+ (bool)isContainerID:(id)arg1;
+ (bool)isContainerIDForeground:(id)arg1;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1 forContainerID:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)removeObserver:(id)arg1 forContainerID:(id)arg2;

@end
