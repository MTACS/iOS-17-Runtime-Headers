
@interface _UIFocusActiveSceneObserver_Classic : _UIFocusActiveSceneObserver <BKSHIDEventDeliveryPolicyObserving> {
    struct { 
        unsigned int supportsHIDUpdates : 1; 
    }  _flags;
    NSMapTable * _hidObserverMapTable;
    NSTimer * _inactiveSceneObserverTimer;
    long long  _inactiveSceneObserverTimerFireCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addDeliveryObserverForWindow:(id)arg1;
- (void)_fireInactiveFocusObserver:(id)arg1;
- (id)_initWithScene:(id)arg1;
- (void)_keyWindowDidChangeNotification:(id)arg1;
- (void)_removeDeliverObserverForWindow:(id)arg1;
- (id)_resolvedDisplayForWindow:(id)arg1;
- (void)_screenUUIDDidChangeNotification:(id)arg1;
- (void)_windowDidAttachContext:(id)arg1;
- (void)_windowDidDetachContext:(id)arg1;
- (void)beginMonitoringContextChangesForWindow:(id)arg1;
- (void)dealloc;
- (id)descriptionBuilder;
- (bool)isActive;
- (void)observerDeliveryPolicyDidChange:(id)arg1;
- (void)stopMonitoringContextChangesForWindow:(id)arg1;

@end
