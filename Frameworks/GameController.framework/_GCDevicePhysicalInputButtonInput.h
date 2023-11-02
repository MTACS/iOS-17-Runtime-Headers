
@interface _GCDevicePhysicalInputButtonInput : _GCDevicePhysicalInputView <GCLinearInput, GCPressedStateInput> {
    unsigned long long  _isAnalogSlot;
    unsigned long long  _pressedChangedHandlerSlot;
    unsigned long long  _pressedThresholdSlot;
    unsigned long long  _pressedTimestampSlot;
    unsigned long long  _sourcesSlot;
    unsigned long long  _valueChangedHandlerSlot;
    unsigned long long  _valueSlot;
    unsigned long long  _valueTimestampSlot;
}

@property (getter=isAnalog, readonly) bool analog;
@property (readonly) bool canWrap;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) double lastPressedStateLatency;
@property (readonly) double lastPressedStateTimestamp;
@property (readonly) double lastValueLatency;
@property (readonly) double lastValueTimestamp;
@property (getter=isPressed, readonly) bool pressed;
@property (copy) id /* block */ pressedDidChangeHandler;
@property (readonly, copy) NSSet *sources;
@property (readonly) Class superclass;
@property (readonly) float value;
@property (copy) id /* block */ valueDidChangeHandler;

+ (unsigned short)updateContextSize;

- (id /* block */)_pressedDidChangeHandler;
- (bool)_setPressedDidChangeHandler:(id /* block */)arg1;
- (bool)canWrap;
- (id)description;
- (id)init;
- (id)initWithParameters:(id)arg1;
- (id)initWithTemplate:(id)arg1 context:(id)arg2;
- (bool)isAnalog;
- (bool)isPressed;
- (double)lastPressedStateLatency;
- (double)lastPressedStateTimestamp;
- (double)lastValueLatency;
- (double)lastValueTimestamp;
- (void)postCommit:(const void*)arg1 sender:(id)arg2;
- (void)preCommit:(const void*)arg1 sender:(id)arg2;
- (id /* block */)pressedDidChangeHandler;
- (void)setPressedDidChangeHandler:(id /* block */)arg1;
- (void)setValueDidChangeHandler:(id /* block */)arg1;
- (id)sources;
- (bool)update:(void*)arg1 forUsages:(unsigned long long)arg2 with:(id)arg3;
- (float)value;
- (id /* block */)valueDidChangeHandler;

@end
