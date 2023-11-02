
@interface GCMicroGamepad : GCPhysicalInputProfile <NSSecureCoding> {
    bool  _allowsRotation;
    GCControllerButtonInput * _button0;
    GCControllerButtonInput * _button1;
    GCControllerButtonInput * _buttonMenu;
    long long  _deviceType;
    GCControllerDirectionPad * _dpad;
    bool  _reportsAbsoluteDpadValues;
    id /* block */  _valueChangedHandler;
}

@property (nonatomic) bool allowsRotation;
@property (nonatomic, readonly) GCControllerButtonInput *buttonA;
@property (nonatomic, readonly) GCControllerButtonInput *buttonMenu;
@property (nonatomic, readonly) GCControllerButtonInput *buttonX;
@property (nonatomic, readonly) GCController *controller;
@property (nonatomic, readonly) GCControllerDirectionPad *dpad;
@property (nonatomic) bool reportsAbsoluteDpadValues;
@property (nonatomic, copy) id /* block */ valueChangedHandler;

+ (id)_current;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_legacy_handleEvent:(struct __IOHIDEvent { }*)arg1;
- (void)_triggerValueChangedHandlerForElement:(id)arg1 queue:(id)arg2;
- (bool)allowsRotation;
- (id)button0;
- (id)button1;
- (id)buttonA;
- (id)buttonB;
- (id)buttonMenu;
- (id)buttonX;
- (id)dpad;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)microControllerWithDigitizerX:(float)arg1 digitizerY:(float)arg2 timestamp:(unsigned long long)arg3 touchDown:(bool)arg4;
- (id)name;
- (id)productCategory;
- (bool)reportsAbsoluteDpadValues;
- (id)saveSnapshot;
- (void)setAllowsRotation:(bool)arg1;
- (void)setLastEventTimestamp:(double)arg1;
- (void)setReportsAbsoluteDpadValues:(bool)arg1;
- (void)setStateFromMicroGamepad:(id)arg1;
- (void)setValueChangedHandler:(id /* block */)arg1;
- (bool)supportsDpadTaps;
- (id /* block */)valueChangedHandler;

@end
