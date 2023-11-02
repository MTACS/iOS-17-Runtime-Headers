
@interface CPSWindow : UIWindow {
    NSHashTable * _observers;
}

@property (nonatomic, retain) NSHashTable *observers;

- (void).cxx_destruct;
- (bool)_isKeyWindowForDeferral;
- (void)addEventObserver:(id)arg1;
- (id)observers;
- (void)removeEventObserver:(id)arg1;
- (void)sendEvent:(id)arg1;
- (void)setObservers:(id)arg1;

@end
