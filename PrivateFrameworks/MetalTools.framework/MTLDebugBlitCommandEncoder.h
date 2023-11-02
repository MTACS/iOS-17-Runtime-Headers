
@interface MTLDebugBlitCommandEncoder : MTLToolsBlitCommandEncoder {
    MTLDebugCommandBuffer * _commandBuffer;
    bool  canDealloc;
    bool  canEndEncoding;
    bool  hasEndEncoding;
    struct deque<id, std::allocator<id>> { 
        /* Warning: unhandled struct encoding: '{__split_buffer<id *, std::allocator<id *>>="__first_"^^@"__begin_"^^@"__end_"^^@"__end_cap_"{__compressed_pair<id **, std::allocator<id *>>="__value_"^^@}}"__start_"Q"__size_"{__compressed_pair<unsigned long, std::allocator<id>>="__value_"Q}}' */ struct __split_buffer<id *, std::allocator<id *>> { 
            __begin_ ***__first_; 
        } __map_; 
    }  updatedFences;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_setDefaults;
- (void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 sourceBytesPerRow:(unsigned long long)arg3 sourceBytesPerImage:(unsigned long long)arg4 sourceSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg9;
- (void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 sourceBytesPerRow:(unsigned long long)arg3 sourceBytesPerImage:(unsigned long long)arg4 sourceSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg9 options:(unsigned long long)arg10;
- (void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 toBuffer:(id)arg3 destinationOffset:(unsigned long long)arg4 size:(unsigned long long)arg5;
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 sourceSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg5 toBuffer:(id)arg6 destinationOffset:(unsigned long long)arg7 destinationBytesPerRow:(unsigned long long)arg8 destinationBytesPerImage:(unsigned long long)arg9;
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 sourceSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg5 toBuffer:(id)arg6 destinationOffset:(unsigned long long)arg7 destinationBytesPerRow:(unsigned long long)arg8 destinationBytesPerImage:(unsigned long long)arg9 options:(unsigned long long)arg10;
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 sourceSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg9;
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 sourceSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg9 options:(unsigned long long)arg10;
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 toTexture:(id)arg4 destinationSlice:(unsigned long long)arg5 destinationLevel:(unsigned long long)arg6 sliceCount:(unsigned long long)arg7 levelCount:(unsigned long long)arg8;
- (void)copyFromTexture:(id)arg1 toTexture:(id)arg2;
- (void)copyIndirectCommandBuffer:(id)arg1 sourceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 destination:(id)arg3 destinationIndex:(unsigned long long)arg4;
- (void)dealloc;
- (void)endEncoding;
- (void)fillBuffer:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 pattern4:(unsigned int)arg3;
- (void)fillBuffer:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 value:(unsigned char)arg3;
- (void)fillTexture:(id)arg1 level:(unsigned long long)arg2 slice:(unsigned long long)arg3 region:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg4 bytes:(const void*)arg5 length:(unsigned long long)arg6;
- (void)fillTexture:(id)arg1 level:(unsigned long long)arg2 slice:(unsigned long long)arg3 region:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg4 color:(struct { double x1; double x2; double x3; double x4; })arg5;
- (void)fillTexture:(id)arg1 level:(unsigned long long)arg2 slice:(unsigned long long)arg3 region:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg4 color:(struct { double x1; double x2; double x3; double x4; })arg5 pixelFormat:(unsigned long long)arg6;
- (void)filterCounterRangeWithFirstBatch:(unsigned int)arg1 lastBatch:(unsigned int)arg2 filterIndex:(unsigned int)arg3;
- (void)generateMipmapsForTexture:(id)arg1;
- (void)getTextureAccessCounters:(id)arg1 region:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg2 mipLevel:(unsigned long long)arg3 slice:(unsigned long long)arg4 resetCounters:(bool)arg5 countersBuffer:(id)arg6 countersBufferOffset:(unsigned long long)arg7;
- (id)initWithBlitCommandEncoder:(id)arg1 commandBuffer:(id)arg2 descriptor:(id)arg3;
- (void)internalValidateCopyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 sourceSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg9 options:(unsigned long long)arg10;
- (void)invalidateCompressedTexture:(id)arg1;
- (void)invalidateCompressedTexture:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;
- (void)optimizeContentsForCPUAccess:(id)arg1;
- (void)optimizeContentsForCPUAccess:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;
- (void)optimizeContentsForGPUAccess:(id)arg1;
- (void)optimizeContentsForGPUAccess:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;
- (void)optimizeIndirectCommandBuffer:(id)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)resetCommandsInBuffer:(id)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)resetTextureAccessCounters:(id)arg1 region:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg2 mipLevel:(unsigned long long)arg3 slice:(unsigned long long)arg4;
- (void)resolveCounters:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 destinationBuffer:(id)arg3 destinationOffset:(unsigned long long)arg4;
- (void)sampleCountersInBuffer:(id)arg1 atSampleIndex:(unsigned long long)arg2 withBarrier:(bool)arg3;
- (void)updateFence:(id)arg1;
- (void)validateCopyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 sourceBytesPerRow:(unsigned long long)arg3 sourceBytesPerImage:(unsigned long long)arg4 sourceSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg9 options:(unsigned long long)arg10;
- (void)validateCopyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 sourceSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg5 toBuffer:(id)arg6 destinationOffset:(unsigned long long)arg7 destinationBytesPerRow:(unsigned long long)arg8 destinationBytesPerImage:(unsigned long long)arg9 options:(unsigned long long)arg10;
- (void)validateCopyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 sourceSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg9 options:(unsigned long long)arg10 move:(bool)arg11;
- (void)validateCopyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 toTexture:(id)arg5 destinationSlice:(unsigned long long)arg6 destinationLevel:(unsigned long long)arg7 options:(unsigned long long)arg8 sliceCount:(unsigned long long)arg9 levelCount:(unsigned long long)arg10;
- (void)validateTextureAccess:(id)arg1 region:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg2 mipLevel:(unsigned long long)arg3 slice:(unsigned long long)arg4;
- (void)waitForFence:(id)arg1;

@end
