
@interface _GCDevicePhysicalInputSwitchElement : _GCDevicePhysicalInputElement <GCSwitchElement, GCSwitchPositionInput> {
    unsigned long long  _canWrapSlot;
    unsigned long long  _isSequentialSlot;
    unsigned long long  _positionChangedHandlerSlot;
    unsigned long long  _positionFieldSlot;
    unsigned long long  _positionMaxSlot;
    unsigned long long  _positionMinSlot;
    unsigned long long  _positionSlot;
    unsigned long long  _sourcesSlot;
    unsigned long long  _timestampSlot;
}

@property (readonly, copy) NSSet *aliases;
@property (readonly) bool canWrap;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) double lastPositionLatency;
@property (readonly) double lastPositionTimestamp;
@property (readonly, copy) NSString *localizedName;
@property (readonly) long long position;
@property (copy) id /* block */ positionDidChangeHandler;
@property (readonly) <GCSwitchPositionInput> *positionInput;
@property (readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } positionRange;
@property (getter=isSequential, readonly) bool sequential;
@property (readonly, copy) NSString *sfSymbolsName;
@property (readonly, copy) NSSet *sources;
@property (readonly) Class superclass;

+ (unsigned short)updateContextSize;

- (bool)canWrap;
- (id)description;
- (id)initWithParameters:(id)arg1;
- (id)initWithTemplate:(id)arg1 context:(id)arg2;
- (bool)isEqualToElement:(id)arg1;
- (bool)isSequential;
- (double)lastPositionLatency;
- (double)lastPositionTimestamp;
- (long long)position;
- (id /* block */)positionDidChangeHandler;
- (id)positionInput;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })positionRange;
- (void)postCommit:(const void*)arg1 sender:(id)arg2;
- (void)preCommit:(const void*)arg1 sender:(id)arg2;
- (void)setPositionDidChangeHandler:(id /* block */)arg1;
- (id)sources;
- (bool)update:(void*)arg1 forGamepadEvent:(id)arg2 withTimestamp:(double)arg3;
- (bool)update:(void*)arg1 forUsages:(unsigned long long)arg2 with:(id)arg3;

@end
