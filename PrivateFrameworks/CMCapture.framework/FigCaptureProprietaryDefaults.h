
@interface FigCaptureProprietaryDefaults : NSObject {
    NSUserDefaults * _audioUserDefaults;
    bool  _changingDefaultsMyself;
    id /* block */  _defaultsChangedHandler;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableSet * _observedKeys;
    NSUserDefaults * _videoUserDefaults;
}

+ (void)initialize;

- (void)dealloc;
- (id)initWithDefaultsChangedHandler:(id /* block */)arg1;
- (id)objectForKey:(id)arg1;
- (void)observeChangesForKey:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)sendNotificationOfNewTransientValue:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)stopObservingChangesForKey:(id)arg1;

@end
