
@interface HKSynchronousObserverSet : NSObject {
    NSObject<OS_os_log> * _category;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _name;
    NSHashTable * _observerTable;
}

@property (readonly, copy) NSArray *allObservers;
@property (readonly) unsigned long long count;

- (void).cxx_destruct;
- (id)allObservers;
- (unsigned long long)count;
- (id)initWithName:(id)arg1 loggingCategory:(id)arg2;
- (void)notifyObservers:(id /* block */)arg1;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end
