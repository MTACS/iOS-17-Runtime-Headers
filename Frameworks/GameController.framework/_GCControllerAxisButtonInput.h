
@interface _GCControllerAxisButtonInput : GCControllerButtonInput {
    GCControllerAxisInput * _axis;
    bool  _positive;
}

@property (nonatomic) GCControllerAxisInput *axis;
@property (getter=isPositive, nonatomic, readonly) bool positive;

- (void).cxx_destruct;
- (bool)_commitPendingValueOnQueue:(id)arg1;
- (void)_setPendingValue:(float)arg1;
- (bool)_setValue:(float)arg1;
- (bool)_setValue:(float)arg1 queue:(id)arg2;
- (bool)_setValueFromAxisButton:(float)arg1;
- (bool)_setValueFromAxisButton:(float)arg1 queue:(id)arg2;
- (id)axis;
- (id)collection;
- (id)initWithAxis:(id)arg1 positive:(bool)arg2;
- (bool)isAnalog;
- (bool)isPositive;
- (id)localizedName;
- (void)setAxis:(id)arg1;
- (id)unmappedLocalizedName;
- (float)value;

@end
