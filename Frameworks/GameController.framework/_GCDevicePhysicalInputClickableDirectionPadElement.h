
@interface _GCDevicePhysicalInputClickableDirectionPadElement : _GCDevicePhysicalInputDirectionPadElement <GCButtonElement> {
    unsigned long long  _pressedInputSlot;
    unsigned long long  _pressedValueFieldSlot;
}

@property (readonly, copy) NSSet *aliases;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *localizedName;
@property (readonly) <GCPressedStateInput><GCLinearInput> *pressedInput;
@property (readonly, copy) NSString *sfSymbolsName;
@property (readonly) Class superclass;
@property (readonly) <GCTouchedStateInput> *touchedInput;

+ (unsigned short)updateContextSize;

- (id)description;
- (id)initWithParameters:(id)arg1;
- (id)initWithTemplate:(id)arg1 context:(id)arg2;
- (bool)isEqualToElement:(id)arg1;
- (void)postCommit:(const void*)arg1 sender:(id)arg2;
- (void)preCommit:(const void*)arg1 sender:(id)arg2;
- (id)pressedInput;
- (id)touchedInput;
- (bool)update:(void*)arg1 forGamepadEvent:(id)arg2 withTimestamp:(double)arg3;
- (bool)update:(void*)arg1 forUsages:(unsigned long long)arg2 with:(id)arg3;

@end
