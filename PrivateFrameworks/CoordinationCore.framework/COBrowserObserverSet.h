
@interface COBrowserObserverSet : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSArray * _observers;
}

@property (nonatomic, retain) NSArray *observers;

- (void).cxx_destruct;
- (void)_withLock:(id /* block */)arg1;
- (void)addObserver:(id)arg1;
- (void)informObserverAboutDevice:(id)arg1 added:(bool)arg2;
- (id)init;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)setObservers:(id)arg1;

@end
