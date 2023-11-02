
@interface NTKDarwinNotificationCenter : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _observersByNotificationName;
}

@property (nonatomic, retain) NSMutableDictionary *observersByNotificationName;

+ (id)defaultCenter;
+ (void)postNotification:(id)arg1;

- (void).cxx_destruct;
- (void)_addObserver:(id)arg1;
- (void)_registerForNotificationName:(id)arg1;
- (void)_unregisterForNotificationNameIfNeeded:(id)arg1;
- (void)addObserver:(id)arg1 notificationName:(id)arg2 selector:(SEL)arg3;
- (void)addObserver:(id)arg1 notificationName:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)handleDarwinNotification:(id)arg1;
- (id)init;
- (id)observersByNotificationName;
- (void)removeObserver:(id)arg1 notificationName:(id)arg2;
- (void)setObserversByNotificationName:(id)arg1;

@end
