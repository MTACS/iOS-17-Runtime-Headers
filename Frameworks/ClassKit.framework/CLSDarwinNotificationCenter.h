
@interface CLSDarwinNotificationCenter : NSObject {
    NSMapTable * _notificationsByName;
    NSMapTable * _notificationsByObserver;
    NSMapTable * _observerByHash;
    NSObject<OS_dispatch_queue> * _queue;
    NSMapTable * _tokenByName;
}

+ (id)defaultCenter;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1 notificationName:(id)arg2 block:(id /* block */)arg3;
- (void)handleObserverRemoval;
- (id)init;
- (void)postLocalNotificationName:(id)arg1;
- (void)postNotificationName:(id)arg1;
- (void)removeObserver:(id)arg1 notificationName:(id)arg2;
- (void)unregisterFromDarwinNotification:(id)arg1;

@end
