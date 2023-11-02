
@protocol PXGMutableLoadingStatusComponent

@required

- (struct { unsigned char x1; }*)mutableStates;
- (void)setError:(NSError *)arg1 forEntity:(struct { unsigned int x1; })arg2;
- (void)setState:(struct { unsigned char x1; })arg1 forEntities:(const struct { unsigned int x1; }*)arg2 count:(unsigned long long)arg3;
- (void)setState:(struct { unsigned char x1; })arg1 forEntity:(struct { unsigned int x1; })arg2;

@end
