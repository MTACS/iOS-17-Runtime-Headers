
@interface MTDBExtensionAccess : NSObject {
    bool  _hasAttemptedToFix;
    NSHashTable * _observers;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handleChange;
- (void)_startObserving;
- (void)_stopObserving;
- (void)addObserver:(id)arg1;
- (void)attemptToFix;
- (void)dealloc;
- (id)init;
- (bool)isReady;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeObserver:(id)arg1;

@end
