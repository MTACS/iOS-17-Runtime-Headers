
@protocol MTLVisibleFunctionTable <MTLResource>

@required

- (struct MTLResourceID { unsigned long long x1; })gpuResourceID;
- (void)setFunction:(id <MTLFunctionHandle>)arg1 atIndex:(unsigned long long)arg2;
- (void)setFunctions:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

@end
