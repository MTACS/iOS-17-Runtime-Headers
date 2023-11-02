
@interface GCControllerDirectionPad : GCControllerElement {
    bool  _nonAnalog;
    int  _timesPressed;
    id /* block */  _valueChangedHandler;
    bool  _wasZeroed;
    GCControllerAxisInput * _xAxis;
    GCControllerAxisInput * _yAxis;
}

@property (nonatomic, readonly) GCControllerButtonInput *down;
@property (nonatomic, readonly) GCControllerButtonInput *left;
@property bool nonAnalog;
@property (nonatomic, readonly) GCControllerButtonInput *right;
@property (nonatomic, readonly) GCControllerButtonInput *up;
@property (nonatomic, copy) id /* block */ valueChangedHandler;
@property (nonatomic, retain) GCControllerAxisInput *xAxis;
@property (nonatomic, retain) GCControllerAxisInput *yAxis;

- (void).cxx_destruct;
- (bool)_commitPendingValueOnQueue:(id)arg1;
- (void)_fireValueChanged;
- (void)_fireValueChangedWithQueue:(id)arg1;
- (id)description;
- (id)down;
- (int)getAndResetTimesPressed;
- (id)initWithDigital:(bool)arg1;
- (id)initWithDigital:(bool)arg1 descriptionName:(id)arg2;
- (bool)isAnalog;
- (id)left;
- (bool)nonAnalog;
- (id)right;
- (void)setNonAnalog:(bool)arg1;
- (void)setUnmappedLocalizedName:(id)arg1;
- (void)setUnmappedNameLocalizationKey:(id)arg1;
- (void)setValueChangedHandler:(id /* block */)arg1;
- (void)setValueForXAxis:(float)arg1 yAxis:(float)arg2;
- (void)setXAxis:(id)arg1;
- (void)setYAxis:(id)arg1;
- (id)up;
- (id /* block */)valueChangedHandler;
- (id)xAxis;
- (id)yAxis;

@end
