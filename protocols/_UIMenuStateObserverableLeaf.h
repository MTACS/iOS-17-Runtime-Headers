
@protocol _UIMenuStateObserverableLeaf <_UIMenuLeaf>

@required

- (void)_addStateObserver:(id <_UIMenuElementStateObserver>)arg1;
- (NSPointerArray *)_getStateObservers;
- (void)_removeStateObserver:(id <_UIMenuElementStateObserver>)arg1;
- (void)_setState:(long long)arg1 notifyingObservers:(bool)arg2;
- (void)_setStateObservers:(NSPointerArray *)arg1;

@end
