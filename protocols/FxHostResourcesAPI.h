
@protocol FxHostResourcesAPI

@required

- (void*)allocateMemory:(unsigned long long)arg1 clear:(bool)arg2 clearWith:(unsigned char)arg3 error:(id*)arg4;
- (void)createPBuffer:(unsigned int*)arg1 withTarget:(unsigned int)arg2 error:(id*)arg3;
- (void)createTexture:(id*)arg1 withDOD:(struct FxRect { int x1; int x2; int x3; int x4; })arg2 GLTarget:(unsigned int)arg3 level:(int)arg4 internalFormat:(unsigned int)arg5 width:(int)arg6 height:(int)arg7 border:(int)arg8 format:(unsigned int)arg9 type:(unsigned int)arg10 pixels:(const void*)arg11 origin:(unsigned long long)arg12 pixelAspectRatio:(double)arg13 andError:(id*)arg14;
- (void)deletePBuffer:(unsigned int)arg1 error:(id*)arg2;
- (void)deleteTexture:(FxTexture *)arg1 error:(id*)arg2;
- (void)freeMemory:(void*)arg1 error:(id*)arg2;
- (unsigned long long)numberOfCores;
- (void)performSelector:(SEL)arg1 onTarget:(id)arg2 withObject:(id)arg3 onThreads:(long long)arg4 waitUntilDone:(bool)arg5 error:(id*)arg6;
- (void)trackExternalAllocation:(unsigned long long)arg1;

@end
