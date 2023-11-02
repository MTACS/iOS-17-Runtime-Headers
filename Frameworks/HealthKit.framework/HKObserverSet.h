
@interface HKObserverSet : NSObject {
    NSObject<OS_os_log> * _category;
    NSObject<OS_dispatch_queue> * _defaultObserverQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _name;
    NSMapTable * _queuesByObserver;
}

@property (readonly, copy) NSArray *allObservers;
@property (readonly) unsigned long long count;

- (void).cxx_destruct;
- (id)allObservers;
- (unsigned long long)count;
- (id)initWithName:(id)arg1 loggingCategory:(id)arg2;
- (void)notifyObserver:(id)arg1 handler:(id /* block */)arg2;
- (void)notifyObservers:(id /* block */)arg1;
- (void)notifyObserversInGroup:(id)arg1 handler:(id /* block */)arg2;
- (void)registerObserver:(id)arg1;
- (void)registerObserver:(id)arg1 queue:(id)arg2;
- (void)registerObserver:(id)arg1 queue:(id)arg2 runIfFirstObserver:(id /* block */)arg3;
- (void)unregisterAllObservers;
- (void)unregisterObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1 runIfLastObserver:(id /* block */)arg2;

@end
