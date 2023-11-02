
@interface SPShared.UserDefaultsObserver : NSObject {
    void defaults;
    void monitoredKeys;
    void notify;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
