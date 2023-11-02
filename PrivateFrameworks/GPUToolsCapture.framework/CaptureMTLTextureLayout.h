
@interface CaptureMTLTextureLayout : NSObject <CaptureMTLObject, MTLTextureLayout> {
    <MTLTextureLayout> * _baseObject;
    struct GTTraceContext { } * _traceContext;
    struct GTTraceStream { } * _traceStream;
}

@property (readonly) unsigned long long alignment;
@property (readonly) <MTLTextureLayout> *baseObject;
@property (readonly) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } copyGranularity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long size;
@property (readonly) unsigned long long streamReference;
@property (readonly) Class superclass;
@property (readonly) struct GTTraceContext { }*traceContext;
@property (readonly) struct GTTraceStream { }*traceStream;
@property (readonly) struct { unsigned long long x1[2]; } watermark;

- (void).cxx_destruct;
- (unsigned long long)alignment;
- (id)baseObject;
- (bool)conformsToProtocol:(id)arg1;
- (void)copyFromLinearBytes:(const void*)arg1 linearOffset:(unsigned long long)arg2 linearBytesPerRow:(unsigned long long)arg3 linearBytesPerImage:(unsigned long long)arg4 toTextureMemory:(void*)arg5 textureSlice:(unsigned long long)arg6 textureLevel:(unsigned long long)arg7 textureRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg8;
- (void)copyFromTextureMemory:(const void*)arg1 textureSlice:(unsigned long long)arg2 textureLevel:(unsigned long long)arg3 textureRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg4 toLinearBytes:(void*)arg5 linearOffset:(unsigned long long)arg6 linearBytesPerRow:(unsigned long long)arg7 linearBytesPerImage:(unsigned long long)arg8;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })copyGranularity;
- (void)dealloc;
- (id)description;
- (void)finalizeTextureMemory:(void*)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithBaseObject:(id)arg1 captureContext:(struct GTTraceContext { }*)arg2;
- (void)initializeTextureMemory:(void*)arg1;
- (id)originalObject;
- (bool)respondsToSelector:(SEL)arg1;
- (unsigned long long)size;
- (unsigned long long)streamReference;
- (void)touch;
- (struct GTTraceContext { }*)traceContext;
- (struct GTTraceStream { }*)traceStream;
- (struct { unsigned long long x1[2]; })watermark;

@end
