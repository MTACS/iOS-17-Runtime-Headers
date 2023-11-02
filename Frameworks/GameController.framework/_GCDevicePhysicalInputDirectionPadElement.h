
@interface _GCDevicePhysicalInputDirectionPadElement : _GCDevicePhysicalInputElement <GCDirectionPadElement> {
    unsigned long long  _downInputSlot;
    unsigned long long  _downValueFieldSlot;
    unsigned long long  _leftInputSlot;
    unsigned long long  _leftValueFieldSlot;
    unsigned long long  _rightInputSlot;
    unsigned long long  _rightValueFieldSlot;
    unsigned long long  _upInputSlot;
    unsigned long long  _upValueFieldSlot;
    unsigned long long  _xAxisSlot;
    unsigned long long  _yAxisSlot;
}

@property (readonly, copy) NSSet *aliases;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <GCLinearInput><GCPressedStateInput> *down;
@property (readonly) unsigned long long hash;
@property (readonly) <GCLinearInput><GCPressedStateInput> *left;
@property (readonly, copy) NSString *localizedName;
@property (readonly) <GCLinearInput><GCPressedStateInput> *right;
@property (readonly, copy) NSString *sfSymbolsName;
@property (readonly) Class superclass;
@property (readonly) <GCLinearInput><GCPressedStateInput> *up;
@property (readonly) <GCAxisInput> *xAxis;
@property (readonly) <GCAxisInput> *yAxis;

+ (unsigned short)updateContextSize;

- (id)description;
- (id)down;
- (id)initWithParameters:(id)arg1;
- (id)initWithTemplate:(id)arg1 context:(id)arg2;
- (bool)isEqualToElement:(id)arg1;
- (id)left;
- (void)postCommit:(const void*)arg1 sender:(id)arg2;
- (void)preCommit:(const void*)arg1 sender:(id)arg2;
- (id)right;
- (id)up;
- (bool)update:(void*)arg1 forGamepadEvent:(id)arg2 withTimestamp:(double)arg3;
- (bool)update:(void*)arg1 forUsages:(unsigned long long)arg2 with:(id)arg3;
- (id)xAxis;
- (id)yAxis;

@end
