
@protocol MTLIOCommandBuffer <NSObject>

@required

- (void)addBarrier;
- (void)addCompletedHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MTLIOCommandBuffer> *, void*
- (void)commit;
- (void)copyStatusToBuffer:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2;
- (void)enqueue;
- (NSError *)error;
- (NSString *)label;
- (void)loadBuffer:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2 size:(unsigned long long)arg3 sourceHandle:(id <MTLIOFileHandle>)arg4 sourceHandleOffset:(unsigned long long)arg5;
- (void)loadBytes:(void*)arg1 size:(unsigned long long)arg2 sourceHandle:(id <MTLIOFileHandle>)arg3 sourceHandleOffset:(unsigned long long)arg4;
- (void)loadTexture:(id <MTLTexture>)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3 size:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 sourceBytesPerRow:(unsigned long long)arg5 sourceBytesPerImage:(unsigned long long)arg6 destinationOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg7 sourceHandle:(id <MTLIOFileHandle>)arg8 sourceHandleOffset:(unsigned long long)arg9;
- (void)popDebugGroup;
- (void)pushDebugGroup:(NSString *)arg1;
- (void)setLabel:(NSString *)arg1;
- (void)signalEvent:(id <MTLSharedEvent>)arg1 value:(unsigned long long)arg2;
- (long long)status;
- (void)tryCancel;
- (void)waitForEvent:(id <MTLSharedEvent>)arg1 value:(unsigned long long)arg2;
- (void)waitUntilCompleted;

@end
