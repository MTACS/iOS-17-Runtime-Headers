
@interface _GCDevicePhysicalInputElement : _GCDevicePhysicalInputView <GCPhysicalInputElement> {
    NSSet * _aliases;
    NSString * _identifier;
    unsigned long long  _localizedNameSlot;
    unsigned long long  _symbolSlot;
}

@property (readonly, copy) NSSet *aliases;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *localizedName;
@property (readonly, copy) NSString *sfSymbolsName;
@property (readonly) Class superclass;

+ (unsigned short)updateContextSize;

- (void).cxx_destruct;
- (id)aliases;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithParameters:(id)arg1;
- (id)initWithTemplate:(id)arg1 context:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToElement:(id)arg1;
- (id)localizedName;
- (void)postCommit:(const void*)arg1 sender:(id)arg2;
- (void)preCommit:(const void*)arg1 sender:(id)arg2;
- (id)sfSymbolsName;
- (id)symbol;
- (bool)update:(void*)arg1 forGamepadEvent:(id)arg2 withTimestamp:(double)arg3;
- (bool)update:(void*)arg1 forMouseEvent:(struct { unsigned long long x1; unsigned long long x2; union { struct { float x_1_2_1; float x_1_2_2; } x_3_1_1; long long x_3_1_2; } x3; })arg2 withTimestamp:(double)arg3;
- (bool)update:(void*)arg1 forUsages:(unsigned long long)arg2 with:(id)arg3;

@end
