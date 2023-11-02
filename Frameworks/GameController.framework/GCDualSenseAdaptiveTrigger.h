
@interface GCDualSenseAdaptiveTrigger : GCControllerButtonInput {
    <GCAdaptiveTriggers> * _adaptiveTriggers;
    float  _armPosition;
    _GCControllerManagerAppClient * _controllerManagerApp;
    <GCControllerHIDInfo> * _hidInfo;
    int  _index;
    long long  _mode;
    long long  _status;
}

@property (nonatomic) float armPosition;
@property (nonatomic) int index;
@property (nonatomic) long long mode;
@property (nonatomic) long long status;

- (void).cxx_destruct;
- (float)armPosition;
- (void)dealloc;
- (int)index;
- (void)locateAdaptiveTriggerComponent;
- (void)locateControllerManagerApp;
- (long long)mode;
- (void)observeChangesForAdaptiveTriggers:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)sendAdaptiveTriggerPayload:(id)arg1;
- (void)sendAdaptiveTriggerPayloadDict:(id)arg1;
- (void)setArmPosition:(float)arg1;
- (void)setIndex:(int)arg1;
- (void)setMode:(long long)arg1;
- (void)setModeFeedbackWithResistiveStrengths:(struct { float x1[10]; })arg1;
- (void)setModeFeedbackWithStartPosition:(float)arg1 resistiveStrength:(float)arg2;
- (void)setModeOff;
- (void)setModeSlopeFeedbackWithStartPosition:(float)arg1 endPosition:(float)arg2 startStrength:(float)arg3 endStrength:(float)arg4;
- (void)setModeVibrationWithAmplitudes:(struct { float x1[10]; })arg1 frequency:(float)arg2;
- (void)setModeVibrationWithStartPosition:(float)arg1 amplitude:(float)arg2 frequency:(float)arg3;
- (void)setModeWeaponWithStartPosition:(float)arg1 endPosition:(float)arg2 resistiveStrength:(float)arg3;
- (void)setStatus:(long long)arg1;
- (long long)status;
- (void)stopObservingChangesForAdaptiveTriggers:(id)arg1;
- (void)updateStatus;

@end
