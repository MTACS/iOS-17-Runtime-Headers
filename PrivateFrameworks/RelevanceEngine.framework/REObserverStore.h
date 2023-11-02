
@interface REObserverStore : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSHashTable * _observers;
}

@property (nonatomic, readonly) NSArray *allObservers;
@property (nonatomic, readonly) unsigned long long count;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)allObservers;
- (unsigned long long)count;
- (void)enumerateObserversWithBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithFunctionsOptions:(unsigned long long)arg1;
- (void)removeObserver:(id)arg1;

@end
