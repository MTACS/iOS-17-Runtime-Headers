
@interface SBHIDUISensorModeAssertion : NSObject <BSInvalidatable> {
    long long  _digitizerMode;
    long long  _displayState;
    bool  _pocketTouchesExpected;
    NSString * _reason;
    SBHIDUISensorModeController * _sensorModeController;
    long long  _source;
    bool  _suspendProximitySensor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long digitizerMode;
@property (nonatomic) long long displayState;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool pocketTouchesExpected;
@property (nonatomic, copy) NSString *reason;
@property (nonatomic) SBHIDUISensorModeController *sensorModeController;
@property (nonatomic) long long source;
@property (readonly) Class superclass;
@property (nonatomic) bool suspendProximitySensor;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (long long)digitizerMode;
- (long long)displayState;
- (void)invalidate;
- (bool)pocketTouchesExpected;
- (id)reason;
- (id)sensorModeController;
- (void)setDigitizerMode:(long long)arg1;
- (void)setDisplayState:(long long)arg1;
- (void)setPocketTouchesExpected:(bool)arg1;
- (void)setReason:(id)arg1;
- (void)setSensorModeController:(id)arg1;
- (void)setSource:(long long)arg1;
- (void)setSuspendProximitySensor:(bool)arg1;
- (long long)source;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)suspendProximitySensor;

@end
