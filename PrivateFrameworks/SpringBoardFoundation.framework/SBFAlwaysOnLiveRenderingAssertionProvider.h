
@interface SBFAlwaysOnLiveRenderingAssertionProvider : NSObject {
    <SBFAlwaysOnLiveRenderingBLSAssertionProvider> * _assertionProvider;
    SBFAlwaysOnLiveRenderingAssertionWeakCollection * _assertions;
    <BLSBacklightStateObservable> * _backlight;
}

@property (nonatomic, retain) <SBFAlwaysOnLiveRenderingBLSAssertionProvider> *assertionProvider;
@property (nonatomic, retain) <BLSBacklightStateObservable> *backlight;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_acquireLiveRenderingAssertionForScene:(id)arg1 identifier:(id)arg2 reason:(id)arg3 attributes:(id)arg4;
- (id)_assertionManagerForScene:(id)arg1;
- (void)_setAssertionManager:(id)arg1 forScene:(id)arg2;
- (id)acquireLiveRenderingAssertionForFBSScene:(id)arg1 reason:(id)arg2;
- (id)acquireLiveRenderingAssertionForUIScene:(id)arg1 reason:(id)arg2;
- (id)assertionProvider;
- (id)backlight;
- (id)description;
- (id)init;
- (void)invalidateAllAssertions;
- (void)setAssertionProvider:(id)arg1;
- (void)setBacklight:(id)arg1;

@end
