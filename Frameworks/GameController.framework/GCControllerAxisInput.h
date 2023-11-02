
@interface GCControllerAxisInput : GCControllerElement {
    bool  _horizontal;
    float  _maxValue;
    float  _minValue;
    GCControllerButtonInput * _negative;
    GCControllerButtonInput * _positive;
    float  _value;
    id /* block */  _valueChangedHandler;
}

@property (getter=isHorizontal, nonatomic) bool horizontal;
@property (nonatomic, retain) GCControllerButtonInput *negative;
@property (nonatomic, retain) GCControllerButtonInput *positive;
@property (nonatomic) float value;
@property (nonatomic, copy) id /* block */ valueChangedHandler;

- (void).cxx_destruct;
- (bool)_setValue:(float)arg1;
- (bool)_setValue:(float)arg1 queue:(id)arg2;
- (id)description;
- (int)getAndResetTimesPressed;
- (id)initWithCollection:(id)arg1;
- (id)initWithCollection:(id)arg1 horizontal:(bool)arg2;
- (bool)isAnalog;
- (bool)isHorizontal;
- (id)localizedName;
- (float)maxValue;
- (float)minValue;
- (id)negative;
- (id)positive;
- (void)setHorizontal:(bool)arg1;
- (void)setMinValue:(float)arg1 andMaxValue:(float)arg2;
- (void)setNegative:(id)arg1;
- (void)setPositive:(id)arg1;
- (void)setValue:(float)arg1;
- (void)setValueChangedHandler:(id /* block */)arg1;
- (id)unmappedLocalizedName;
- (float)value;
- (id /* block */)valueChangedHandler;

@end
