
@interface PXGLoadingStatusComponent : PXGComponent <PXGMutableLoadingStatusComponent> {
    NSMutableDictionary * _errorByEntity;
}

@property (nonatomic, readonly) struct { unsigned char x1; }*mutableStates;
@property (nonatomic, readonly) const struct { unsigned char x1; }*states;

+ (unsigned long long)elementSize;
+ (bool)shouldDiffForChanges;

- (void).cxx_destruct;
- (id)errorForEntity:(struct { unsigned int x1; })arg1;
- (id)initWithDataStore:(id)arg1;
- (struct { unsigned char x1; }*)mutableStates;
- (void)performChanges:(id /* block */)arg1;
- (void)setError:(id)arg1 forEntity:(struct { unsigned int x1; })arg2;
- (void)setState:(struct { unsigned char x1; })arg1 forEntities:(const struct { unsigned int x1; }*)arg2 count:(unsigned long long)arg3;
- (void)setState:(struct { unsigned char x1; })arg1 forEntity:(struct { unsigned int x1; })arg2;
- (struct { unsigned char x1; })stateForEntity:(struct { unsigned int x1; })arg1;
- (const struct { unsigned char x1; }*)states;
- (void)willDestroyEntities:(const struct { unsigned int x1; }*)arg1 count:(long long)arg2;

@end
