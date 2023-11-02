
@interface GCSteeringWheelElement : _GCDevicePhysicalInputElement <GCAxisElement, GCAxisInput, GCRelativeInput> {
    unsigned long long  _deltaChangedHandlerSlot;
    unsigned long long  _deltaSlot;
    unsigned long long  _maximumDegreesOfRotationSlot;
    unsigned long long  _rotationValueFieldSlot;
    unsigned long long  _sourcesSlot;
    unsigned long long  _timestampSlot;
    unsigned long long  _valueChangedHandlerSlot;
    unsigned long long  _valueSlot;
}

@property (readonly) <GCAxisInput> *absoluteInput;
@property (readonly, copy) NSSet *aliases;
@property (getter=isAnalog, readonly) bool analog;
@property (readonly) bool canWrap;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) float delta;
@property (copy) id /* block */ deltaDidChangeHandler;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) double lastDeltaLatency;
@property (readonly) double lastDeltaTimestamp;
@property (readonly) double lastValueLatency;
@property (readonly) double lastValueTimestamp;
@property (readonly, copy) NSString *localizedName;
@property (readonly) float maximumDegreesOfRotation;
@property (readonly) <GCRelativeInput> *relativeInput;
@property (readonly, copy) NSString *sfSymbolsName;
@property (readonly, copy) NSSet *sources;
@property (readonly) Class superclass;
@property (readonly) float value;
@property (copy) id /* block */ valueDidChangeHandler;

+ (unsigned short)updateContextSize;

- (id)absoluteInput;
- (bool)canWrap;
- (id)debugDescription;
- (float)delta;
- (id /* block */)deltaDidChangeHandler;
- (id)description;
- (id)initWithParameters:(id)arg1;
- (id)initWithTemplate:(id)arg1 context:(id)arg2;
- (bool)isAnalog;
- (bool)isEqualToElement:(id)arg1;
- (double)lastDeltaLatency;
- (double)lastDeltaTimestamp;
- (double)lastValueLatency;
- (double)lastValueTimestamp;
- (float)maximumDegreesOfRotation;
- (void)postCommit:(const void*)arg1 sender:(id)arg2;
- (void)preCommit:(const void*)arg1 sender:(id)arg2;
- (id)relativeInput;
- (void)setDeltaDidChangeHandler:(id /* block */)arg1;
- (void)setValueDidChangeHandler:(id /* block */)arg1;
- (id)sources;
- (bool)update:(void*)arg1 forGamepadEvent:(id)arg2 withTimestamp:(double)arg3;
- (bool)update:(void*)arg1 forUsages:(unsigned long long)arg2 with:(id)arg3;
- (float)value;
- (id /* block */)valueDidChangeHandler;

@end
