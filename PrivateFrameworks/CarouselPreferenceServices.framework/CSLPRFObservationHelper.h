
@interface CSLPRFObservationHelper : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSHashTable * _lock_observers;
}

@property (nonatomic, readonly) unsigned long long observerCount;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)init;
- (void)notifyObserversWithBlock:(id /* block */)arg1;
- (unsigned long long)observerCount;
- (void)removeObserver:(id)arg1;

@end
