
@interface _GCDevicePhysicalInputButtonElement : _GCDevicePhysicalInputElement <GCButtonElement, GCLinearInput, GCPressedStateInput> {
    unsigned long long  _isAnalogSlot;
    unsigned long long  _pressedChangedHandlerSlot;
    unsigned long long  _pressedThresholdSlot;
    unsigned long long  _pressedTimestampSlot;
    unsigned long long  _pressedValueFieldSlot;
    unsigned long long  _sourcesSlot;
    unsigned long long  _valueChangedHandlerSlot;
    unsigned long long  _valueSlot;
    unsigned long long  _valueTimestampSlot;
}

@property (readonly, copy) NSSet *aliases;
@property (getter=isAnalog, readonly) bool analog;
@property (readonly) bool canWrap;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) double lastPressedStateLatency;
@property (readonly) double lastPressedStateTimestamp;
@property (readonly) double lastValueLatency;
@property (readonly) double lastValueTimestamp;
@property (readonly, copy) NSString *localizedName;
@property (getter=isPressed, readonly) bool pressed;
@property (copy) id /* block */ pressedDidChangeHandler;
@property (readonly) <GCPressedStateInput><GCLinearInput> *pressedInput;
@property (readonly, copy) NSString *sfSymbolsName;
@property (readonly, copy) NSSet *sources;
@property (readonly) Class superclass;
@property (readonly) <GCTouchedStateInput> *touchedInput;
@property (readonly) float value;
@property (copy) id /* block */ valueDidChangeHandler;

+ (unsigned short)updateContextSize;

- (bool)canWrap;
- (id)debugDescription;
- (id)description;
- (id)initWithParameters:(id)arg1;
- (id)initWithTemplate:(id)arg1 context:(id)arg2;
- (bool)isAnalog;
- (bool)isEqualToElement:(id)arg1;
- (bool)isPressed;
- (double)lastPressedStateLatency;
- (double)lastPressedStateTimestamp;
- (double)lastValueLatency;
- (double)lastValueTimestamp;
- (void)postCommit:(const void*)arg1 sender:(id)arg2;
- (void)preCommit:(const void*)arg1 sender:(id)arg2;
- (id /* block */)pressedDidChangeHandler;
- (id)pressedInput;
- (void)setPressedDidChangeHandler:(id /* block */)arg1;
- (void)setValueDidChangeHandler:(id /* block */)arg1;
- (id)sources;
- (id)touchedInput;
- (bool)update:(void*)arg1 forGamepadEvent:(id)arg2 withTimestamp:(double)arg3;
- (bool)update:(void*)arg1 forUsages:(unsigned long long)arg2 with:(id)arg3;
- (float)value;
- (id /* block */)valueDidChangeHandler;

@end
