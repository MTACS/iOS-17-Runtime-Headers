
@interface CAPresentationModifier : NSObject {
    unsigned int  _f;
    CAPresentationModifierGroup * _group;
    void * _impl;
    id  _keyPath;
    int  _l;
    id  _value;
    unsigned long long  _value_count;
    id  _velocity;
}

@property (readonly) bool additive;
@property (getter=isEnabled) bool enabled;
@property (readonly) CAPresentationModifierGroup *group;
@property (readonly, copy) NSString *keyPath;
@property (retain) id value;

- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; unsigned int x3 : 8; unsigned int x4 : 24; }*)CA_copyRenderValue;
- (bool)additive;
- (void)dealloc;
- (id)debugDescription;
- (id)group;
- (id)init;
- (id)initWithKeyPath:(id)arg1 initialValue:(id)arg2 additive:(bool)arg3;
- (id)initWithKeyPath:(id)arg1 initialValue:(id)arg2 additive:(bool)arg3 group:(id)arg4;
- (id)initWithKeyPath:(id)arg1 initialValue:(id)arg2 initialVelocity:(id)arg3 additive:(bool)arg4 preferredFrameRateRangeMaximum:(int)arg5 group:(id)arg6;
- (bool)isEnabled;
- (id)keyPath;
- (void)setEnabled:(bool)arg1;
- (void)setValue:(id)arg1;
- (void)setValue:(id)arg1 velocity:(id)arg2;
- (id)value;
- (void)write;

@end
