
@interface MTLDebugIOCommandBuffer : MTLToolsIOCommandBuffer

- (void)addCompletedHandler:(id /* block */)arg1;
- (void)commit;
- (void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)internalValidateEvent:(id)arg1;
- (void)internalValidateLoadBuffer:(id)arg1 offset:(unsigned long long)arg2 size:(unsigned long long)arg3 sourceHandle:(id)arg4 sourceHandleOffset:(unsigned long long)arg5;
- (void)internalValidateLoadBytes:(void*)arg1 size:(unsigned long long)arg2 sourceHandle:(id)arg3 sourceHandleOffset:(unsigned long long)arg4;
- (void)internalValidateLoadTexture:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3 size:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 sourceBytesPerRow:(unsigned long long)arg5 sourceBytesPerImage:(unsigned long long)arg6 destinationOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg7 sourceHandle:(id)arg8 sourceHandleOffset:(unsigned long long)arg9;
- (void)loadBuffer:(id)arg1 offset:(unsigned long long)arg2 size:(unsigned long long)arg3 handle:(id)arg4 handleOffset:(unsigned long long)arg5;
- (void)loadBuffer:(id)arg1 offset:(unsigned long long)arg2 size:(unsigned long long)arg3 sourceHandle:(id)arg4 sourceHandleOffset:(unsigned long long)arg5;
- (void)loadBytes:(void*)arg1 size:(unsigned long long)arg2 sourceHandle:(id)arg3 sourceHandleOffset:(unsigned long long)arg4;
- (void)loadTexture:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3 size:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6 dstOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg7 handle:(id)arg8 handleOffset:(unsigned long long)arg9;
- (void)loadTexture:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3 size:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 sourceBytesPerRow:(unsigned long long)arg5 sourceBytesPerImage:(unsigned long long)arg6 destinationOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg7 sourceHandle:(id)arg8 sourceHandleOffset:(unsigned long long)arg9;
- (void)signalEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)tryCancel;
- (void)waitForEvent:(id)arg1 value:(unsigned long long)arg2;

@end
