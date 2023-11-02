
@interface BAAppStoreProgressObserver : NSObject <BAAppStoreProgressObserverConfiguring> {
    BAAppStoreProgressConfiguration * _configuration;
    bool  _configuring;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _observing;
    BAAgentSystemProxy * _systemProxy;
    bool  _valid;
}

+ (id)new;
+ (id)progressObserverWithConfiguration:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)setAppBundleIdentifiers:(id)arg1;
- (void)setHandlerQueue:(id)arg1;
- (void)setUpdateHandler:(id /* block */)arg1;
- (void)updateConfiguration:(id /* block */)arg1;

@end
