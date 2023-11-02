
@interface GCCursorElement : _GCDevicePhysicalInputElement <GCCursorPositionInput, GCPhysicalInputElement> {
    unsigned long long  _positionChangedHandlerSlot;
    unsigned long long  _xDeltaSlot;
    unsigned long long  _yDeltaSlot;
}

@property (readonly, copy) NSSet *aliases;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) struct { double x1; double x2; } delta;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *localizedName;
@property (readonly) <GCCursorPositionInput> *position;
@property (copy) id /* block */ positionDidChangeHandler;
@property (readonly, copy) NSString *sfSymbolsName;
@property (readonly) Class superclass;

+ (unsigned short)updateContextSize;

- (bool)_setPositionDidChangeHandler:(id /* block */)arg1;
- (struct { double x1; double x2; })delta;
- (id)initWithTemplate:(id)arg1 context:(id)arg2;
- (id)position;
- (id /* block */)positionDidChangeHandler;
- (void)postCommit:(const void*)arg1 sender:(id)arg2;
- (void)preCommit:(const void*)arg1 sender:(id)arg2;
- (void)setPositionDidChangeHandler:(id /* block */)arg1;
- (bool)update:(void*)arg1 forMouseEvent:(struct { unsigned long long x1; unsigned long long x2; union { struct { float x_1_2_1; float x_1_2_2; } x_3_1_1; long long x_3_1_2; } x3; })arg2 withTimestamp:(double)arg3;
- (bool)update:(void*)arg1 forUsages:(unsigned long long)arg2 with:(id)arg3;

@end
