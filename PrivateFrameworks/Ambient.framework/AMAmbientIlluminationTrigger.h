
@interface AMAmbientIlluminationTrigger : NSObject {
    double  _activationThresholdLux;
    double  _ambientLux;
    BrightnessSystemClient * _brightnessSystemClient;
    double  _deactivationThresholdLux;
    <AMAmbientIlluminationTriggerDelegate> * _delegate;
    bool  _triggered;
}

@property (nonatomic) double activationThresholdLux;
@property (getter=_ambientLux, setter=_setAmbientLux:, nonatomic) double ambientLux;
@property (nonatomic) double deactivationThresholdLux;
@property (nonatomic) <AMAmbientIlluminationTriggerDelegate> *delegate;
@property (getter=isTriggered, setter=_setTriggered:, nonatomic) bool triggered;

- (void).cxx_destruct;
- (double)_ambientLux;
- (double)_effectiveDeactivationThresholdLux;
- (void)_evaluateTrigger;
- (void)_setAmbientLux:(double)arg1;
- (void)_setTriggered:(bool)arg1;
- (double)activationThresholdLux;
- (double)deactivationThresholdLux;
- (id)delegate;
- (id)init;
- (id)initWithBrightnessSystemClient:(id)arg1;
- (bool)isTriggered;
- (void)setActivationThresholdLux:(double)arg1;
- (void)setDeactivationThresholdLux:(double)arg1;
- (void)setDelegate:(id)arg1;

@end
