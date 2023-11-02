
@interface SBFAlwaysOnLiveRenderingAssertionManager : NSObject <BLSAssertionObserving, BLSBacklightStateObserving> {
    <SBFAlwaysOnLiveRenderingBLSAssertionProvider> * _assertionProvider;
    <SBFAlwaysOnLiveRenderingBLSAttributesProvider> * _attributesProvider;
    <BLSBacklightStateObservable> * _backlight;
    BLSAssertion * _liveRenderingAssertion;
    SBFAlwaysOnLiveRenderingAssertionWeakCollection * _liveRenderingAssertionProxies;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_acquireLiveRenderingAssertionIfNeededForProxy:(id)arg1 backlight:(id)arg2;
- (void)_acquireLiveRenderingAssertionProxy:(id)arg1;
- (void)_invalidateWithReason:(id)arg1;
- (id)_nextLiveRenderingAssertionProxyIfAny;
- (void)_releaseLiveRenderingAssertionProxy:(id)arg1;
- (void)_releaseLiveRenderingAssertionWithReason:(id)arg1;
- (id)acquireLiveRenderingAssertionWithReason:(id)arg1;
- (void)assertion:(id)arg1 didCancelWithError:(id)arg2;
- (void)assertion:(id)arg1 didFailToAcquireWithError:(id)arg2;
- (id)backlight;
- (void)backlight:(id)arg1 didChangeAlwaysOnEnabled:(bool)arg2;
- (void)backlight:(id)arg1 didCompleteUpdateToState:(long long)arg2 forEvent:(id)arg3;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)initWithBacklight:(id)arg1 assertionProvider:(id)arg2 attributesProvider:(id)arg3;
- (void)invalidate;

@end
