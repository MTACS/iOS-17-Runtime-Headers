
@interface SBAmbientMainDisplayController : NSObject <SBAmbientPresentationObserver, SBBacklightControllerObserver> {
    SBAmbientPresentationController * _ambientPresentationController;
    bool  _ambientPresented;
    SBBacklightController * _backlightController;
    long long  _backlightState;
    BrightnessSystemClient * _brightnessSystemClient;
    NSObject<OS_dispatch_queue> * _brightnessSystemQueue;
    bool  _isCoreBrightnessAmbientModeEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_shouldEnableCoreBrightnessAmbientMode;
- (void)_updateCoreBrightnessAmbientMode;
- (void)_updateCoreBrightnessAmbientModeForce:(bool)arg1;
- (void)ambientPresentationController:(id)arg1 didUpdatePresented:(bool)arg2;
- (void)backlightController:(id)arg1 didTransitionToBacklightState:(long long)arg2 source:(long long)arg3;
- (void)dealloc;
- (id)init;
- (id)initWithAmbientPresentationController:(id)arg1;

@end
