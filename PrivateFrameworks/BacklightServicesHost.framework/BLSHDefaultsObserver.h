
@interface BLSHDefaultsObserver : NSObject <BSInvalidatable> {
    NSMapTable * _handlers;
    bool  _invalidated;
    NSUserDefaults * _observedDefaults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool invalidated;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addHandlerForKey:(id)arg1 attributes:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (bool)invalidated;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setInvalidated:(bool)arg1;

@end
