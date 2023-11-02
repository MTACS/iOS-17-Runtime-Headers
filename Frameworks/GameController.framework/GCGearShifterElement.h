
@interface GCGearShifterElement : _GCDevicePhysicalInputElement <GCPhysicalInputElement, GCRelativeInput, GCSwitchPositionInput> {
    union { 
        struct { 
            unsigned long long sourcesSlot; 
            unsigned long long positionMinSlot; 
            unsigned long long positionMaxSlot; 
            unsigned long long positionFieldSlot; 
            unsigned long long positionChangedHandlerSlot; 
            unsigned long long positionSlot; 
            unsigned long long timestampSlot; 
        } pattern; 
        struct { 
            unsigned long long sourcesSlot; 
            unsigned long long deltaChangedHandlerSlot; 
            unsigned long long deltaSlot; 
            unsigned long long timestampSlot; 
        } sequential; 
    }  _impl;
    bool  _isPatternShifter;
}

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
@property (readonly) double lastPositionLatency;
@property (readonly) double lastPositionTimestamp;
@property (readonly, copy) NSString *localizedName;
@property (readonly) <GCSwitchPositionInput> *patternInput;
@property (readonly) long long position;
@property (copy) id /* block */ positionDidChangeHandler;
@property (readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } positionRange;
@property (getter=isSequential, readonly) bool sequential;
@property (readonly) <GCRelativeInput> *sequentialInput;
@property (readonly, copy) NSString *sfSymbolsName;
@property (readonly, copy) NSSet *sources;
@property (readonly) Class superclass;

+ (unsigned short)updateContextSize;

- (bool)canWrap;
- (float)delta;
- (id /* block */)deltaDidChangeHandler;
- (id)description;
- (id)initWithParameters:(id)arg1;
- (id)initWithTemplate:(id)arg1 context:(id)arg2;
- (bool)isAnalog;
- (bool)isEqualToElement:(id)arg1;
- (bool)isSequential;
- (double)lastDeltaLatency;
- (double)lastDeltaTimestamp;
- (double)lastPositionLatency;
- (double)lastPositionTimestamp;
- (id)patternInput;
- (long long)position;
- (id /* block */)positionDidChangeHandler;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })positionRange;
- (void)postCommit:(const void*)arg1 sender:(id)arg2;
- (void)preCommit:(const void*)arg1 sender:(id)arg2;
- (id)sequentialInput;
- (void)setDeltaDidChangeHandler:(id /* block */)arg1;
- (void)setPositionDidChangeHandler:(id /* block */)arg1;
- (id)sources;
- (bool)update:(void*)arg1 forGamepadEvent:(id)arg2 withTimestamp:(double)arg3;
- (bool)update:(void*)arg1 forUsages:(unsigned long long)arg2 with:(id)arg3;

@end
