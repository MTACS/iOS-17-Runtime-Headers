
@interface _GCDevicePhysicalInputAxisInput : _GCDevicePhysicalInputView <GCAxisInput> {
    unsigned long long  _canWrapSlot;
    unsigned long long  _isAnalogSlot;
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
@property (readonly) double lastValueLatency;
@property (readonly) double lastValueTimestamp;
@property (readonly, copy) NSSet *sources;
@property (readonly) Class superclass;
@property (readonly) float value;
@property (copy) id /* block */ valueDidChangeHandler;

+ (unsigned short)updateContextSize;

- (bool)canWrap;
- (id)init;
- (id)initWithParameters:(id)arg1;
- (id)initWithTemplate:(id)arg1 context:(id)arg2;
- (bool)isAnalog;
- (double)lastValueLatency;
- (double)lastValueTimestamp;
- (void)postCommit:(const void*)arg1 sender:(id)arg2;
- (void)preCommit:(const void*)arg1 sender:(id)arg2;
- (void)setValueDidChangeHandler:(id /* block */)arg1;
- (id)sources;
- (bool)update:(void*)arg1 forUsages:(unsigned long long)arg2 with:(id)arg3;
- (float)value;
- (id /* block */)valueDidChangeHandler;

@end
