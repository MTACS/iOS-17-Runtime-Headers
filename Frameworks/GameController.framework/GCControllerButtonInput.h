
@interface GCControllerButtonInput : GCControllerElement {
    float  _deadzone;
    bool  _nonAnalog;
    int  _pressCounter;
    id /* block */  _pressedChangedHandler;
    bool  _touched;
    bool  _touchedAndValueDistinct;
    id /* block */  _touchedChangedHandler;
    float  _value;
    id /* block */  _valueChangedHandler;
}

@property (nonatomic) float deadzone;
@property bool nonAnalog;
@property (getter=isPressed, nonatomic, readonly) bool pressed;
@property (nonatomic, copy) id /* block */ pressedChangedHandler;
@property (getter=isTouched, nonatomic, readonly) bool touched;
@property (getter=areTouchedAndValueDistinct, nonatomic) bool touchedAndValueDistinct;
@property (nonatomic, copy) id /* block */ touchedChangedHandler;
@property (nonatomic, readonly) float value;
@property (nonatomic, copy) id /* block */ valueChangedHandler;

- (void).cxx_destruct;
- (bool)_setTouched:(bool)arg1 queue:(id)arg2;
- (bool)_setValue:(float)arg1;
- (bool)_setValue:(float)arg1 queue:(id)arg2;
- (bool)areTouchedAndValueDistinct;
- (float)deadzone;
- (id)description;
- (int)getAndResetTimesPressed;
- (id)initWithDescriptionName:(id)arg1;
- (bool)isAnalog;
- (bool)isPressed;
- (bool)isTouched;
- (bool)nonAnalog;
- (id /* block */)pressedChangedHandler;
- (void)setDeadzone:(float)arg1;
- (void)setNonAnalog:(bool)arg1;
- (void)setPressedChangedHandler:(id /* block */)arg1;
- (void)setTouchedAndValueDistinct:(bool)arg1;
- (void)setTouchedChangedHandler:(id /* block */)arg1;
- (void)setValue:(float)arg1;
- (void)setValueChangedHandler:(id /* block */)arg1;
- (id /* block */)touchedChangedHandler;
- (float)value;
- (id /* block */)valueChangedHandler;

@end
