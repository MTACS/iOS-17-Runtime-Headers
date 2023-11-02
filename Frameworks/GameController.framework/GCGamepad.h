
@interface GCGamepad : GCPhysicalInputProfile <NSSecureCoding> {
    GCControllerButtonInput * _button0;
    GCControllerButtonInput * _button1;
    GCControllerButtonInput * _button2;
    GCControllerButtonInput * _button3;
    GCControllerButtonInput * _buttonMenu;
    GCControllerDirectionPad * _dpad;
    GCControllerButtonInput * _leftShoulder;
    GCControllerButtonInput * _rightShoulder;
    id /* block */  _valueChangedHandler;
}

@property (nonatomic, readonly) GCControllerButtonInput *buttonA;
@property (nonatomic, readonly) GCControllerButtonInput *buttonB;
@property (nonatomic, readonly) GCControllerButtonInput *buttonMenu;
@property (nonatomic, readonly) GCControllerButtonInput *buttonX;
@property (nonatomic, readonly) GCControllerButtonInput *buttonY;
@property (nonatomic, readonly) GCController *controller;
@property (nonatomic, readonly) GCControllerDirectionPad *dpad;
@property (nonatomic, readonly) GCControllerButtonInput *leftShoulder;
@property (nonatomic, readonly) GCControllerButtonInput *rightShoulder;
@property (nonatomic, copy) id /* block */ valueChangedHandler;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_legacy_handleEvent:(struct __IOHIDEvent { }*)arg1;
- (void)_triggerValueChangedHandlerForElement:(id)arg1 queue:(id)arg2;
- (void)_triggerValueChangedHandlerForElements:(id)arg1 queue:(id)arg2;
- (bool)allowsRotation;
- (id)button0;
- (id)button1;
- (id)button2;
- (id)button3;
- (id)buttonA;
- (id)buttonB;
- (id)buttonMenu;
- (id)buttonX;
- (id)buttonY;
- (id)dpad;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)leftShoulder;
- (id)name;
- (id)productCategory;
- (bool)reportsAbsoluteDpadValues;
- (id)rightShoulder;
- (id)saveSnapshot;
- (void)setAllowsRotation:(bool)arg1;
- (void)setReportsAbsoluteDpadValues:(bool)arg1;
- (void)setValueChangedHandler:(id /* block */)arg1;
- (id /* block */)valueChangedHandler;

@end
