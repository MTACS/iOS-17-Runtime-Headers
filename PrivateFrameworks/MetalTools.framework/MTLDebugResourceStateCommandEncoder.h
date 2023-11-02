
@interface MTLDebugResourceStateCommandEncoder : MTLToolsResourceStateCommandEncoder {
    bool  canDealloc;
    bool  canEndEncoding;
    bool  hasEndedEncoding;
    struct deque<id, std::allocator<id>> { 
        /* Warning: unhandled struct encoding: '{__split_buffer<id *, std::allocator<id *>>="__first_"^^@"__begin_"^^@"__end_"^^@"__end_cap_"{__compressed_pair<id **, std::allocator<id *>>="__value_"^^@}}"__start_"Q"__size_"{__compressed_pair<unsigned long, std::allocator<id>>="__value_"Q}}' */ struct __split_buffer<id *, std::allocator<id *>> { 
            __begin_ ***__first_; 
        } __map_; 
    }  updatedFences;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_setDefaults;
- (bool)checkEncoderState;
- (void)dealloc;
- (void)endEncoding;
- (id)initWithResourceStateCommandEncoder:(id)arg1 commandBuffer:(id)arg2 descriptor:(id)arg3;
- (void)moveTextureMappingsFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 sourceSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg9;
- (void)updateFence:(id)arg1;
- (void)updateTextureMapping:(id)arg1 mode:(unsigned long long)arg2 indirectBuffer:(id)arg3 indirectBufferOffset:(unsigned long long)arg4;
- (void)updateTextureMapping:(id)arg1 mode:(unsigned long long)arg2 region:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg3 mipLevel:(unsigned long long)arg4 slice:(unsigned long long)arg5;
- (void)updateTextureMappings:(id)arg1 mode:(unsigned long long)arg2 regions:(const struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; }*)arg3 mipLevels:(const unsigned long long*)arg4 slices:(const unsigned long long*)arg5 numRegions:(unsigned long long)arg6;
- (void)validateSparseTextureMappingMode:(unsigned long long)arg1;
- (void)validateTextureAccess:(id)arg1 region:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg2 mipLevel:(unsigned long long)arg3 slice:(unsigned long long)arg4;
- (void)waitForFence:(id)arg1;

@end
