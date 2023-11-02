
@interface IOGPUMetalBuffer : IOGPUMetalResource {
    struct __IOSurface { } * _aneIOSurface;
    id /* block */  _deallocator;
    struct __IOSurface { } * _iosurface;
    unsigned long long  _length;
    void * _pointer;
    IOGPUMetalBuffer * _primaryBuffer;
    short  _primaryBufferIndex;
    unsigned long long  _primaryBufferOffset;
    short  _primaryHeapIndex;
}

@property (readonly) struct __IOSurface { }*_aneIOSurface;
@property (readonly) unsigned long long allocatedSize;
@property (nonatomic, readonly) void*contents;
@property (readonly) struct __IOSurface { }*iosurface;
@property (readonly) unsigned long long length;

- (struct __IOSurface { }*)_aneIOSurface;
- (void)addDebugMarker:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)allocatedSize;
- (void*)contents;
- (struct __CFArray { }*)copyAnnotations;
- (void)dealloc;
- (id)description;
- (void)didModifyRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithDevice:(id)arg1 iosurface:(struct __IOSurface { }*)arg2 args:(struct IOGPUNewResourceArgs { struct IOGPUNewResourceData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; unsigned short x_1_1_5; unsigned short x_1_1_6; unsigned char x_1_1_7; unsigned char x_1_1_8; unsigned char x_1_1_9; unsigned char x_1_1_10; unsigned int x_1_1_11; unsigned long long x_1_1_12; unsigned long long x_1_1_13; unsigned long long x_1_1_14; unsigned int x_1_1_15; union { struct { unsigned long long x_1_3_1; unsigned long long x_1_3_2; unsigned long long x_1_3_3; union { unsigned int x_4_4_1; unsigned long long x_4_4_2; } x_1_3_4; } x_16_2_1; struct { unsigned int x_2_3_1; unsigned int x_2_3_2; unsigned int x_2_3_3; unsigned int x_2_3_4; unsigned long long x_2_3_5[2]; } x_16_2_2; } x_1_1_16; } x1; }*)arg3 argsSize:(unsigned int)arg4;
- (id)initWithDevice:(id)arg1 pointer:(void*)arg2 length:(unsigned long long)arg3 alignment:(unsigned int)arg4 options:(unsigned long long)arg5 sysMemSize:(unsigned long long)arg6 gpuAddress:(unsigned long long)arg7 args:(struct IOGPUNewResourceArgs { struct IOGPUNewResourceData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; unsigned short x_1_1_5; unsigned short x_1_1_6; unsigned char x_1_1_7; unsigned char x_1_1_8; unsigned char x_1_1_9; unsigned char x_1_1_10; unsigned int x_1_1_11; unsigned long long x_1_1_12; unsigned long long x_1_1_13; unsigned long long x_1_1_14; unsigned int x_1_1_15; union { struct { unsigned long long x_1_3_1; unsigned long long x_1_3_2; unsigned long long x_1_3_3; union { unsigned int x_4_4_1; unsigned long long x_4_4_2; } x_1_3_4; } x_16_2_1; struct { unsigned int x_2_3_1; unsigned int x_2_3_2; unsigned int x_2_3_3; unsigned int x_2_3_4; unsigned long long x_2_3_5[2]; } x_16_2_2; } x_1_1_16; } x1; }*)arg8 argsSize:(unsigned int)arg9 deallocator:(id /* block */)arg10;
- (id)initWithDevice:(id)arg1 pointer:(void*)arg2 length:(unsigned long long)arg3 options:(unsigned long long)arg4 sysMemSize:(unsigned long long)arg5 gpuAddress:(unsigned long long)arg6 args:(struct IOGPUNewResourceArgs { struct IOGPUNewResourceData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; unsigned short x_1_1_5; unsigned short x_1_1_6; unsigned char x_1_1_7; unsigned char x_1_1_8; unsigned char x_1_1_9; unsigned char x_1_1_10; unsigned int x_1_1_11; unsigned long long x_1_1_12; unsigned long long x_1_1_13; unsigned long long x_1_1_14; unsigned int x_1_1_15; union { struct { unsigned long long x_1_3_1; unsigned long long x_1_3_2; unsigned long long x_1_3_3; union { unsigned int x_4_4_1; unsigned long long x_4_4_2; } x_1_3_4; } x_16_2_1; struct { unsigned int x_2_3_1; unsigned int x_2_3_2; unsigned int x_2_3_3; unsigned int x_2_3_4; unsigned long long x_2_3_5[2]; } x_16_2_2; } x_1_1_16; } x1; }*)arg7 argsSize:(unsigned int)arg8 deallocator:(id /* block */)arg9;
- (id)initWithDevice:(id)arg1 pointer:(void*)arg2 length:(unsigned long long)arg3 options:(unsigned long long)arg4 sysMemSize:(unsigned long long)arg5 vidMemSize:(unsigned long long)arg6 args:(struct IOGPUNewResourceArgs { struct IOGPUNewResourceData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; unsigned short x_1_1_5; unsigned short x_1_1_6; unsigned char x_1_1_7; unsigned char x_1_1_8; unsigned char x_1_1_9; unsigned char x_1_1_10; unsigned int x_1_1_11; unsigned long long x_1_1_12; unsigned long long x_1_1_13; unsigned long long x_1_1_14; unsigned int x_1_1_15; union { struct { unsigned long long x_1_3_1; unsigned long long x_1_3_2; unsigned long long x_1_3_3; union { unsigned int x_4_4_1; unsigned long long x_4_4_2; } x_1_3_4; } x_16_2_1; struct { unsigned int x_2_3_1; unsigned int x_2_3_2; unsigned int x_2_3_3; unsigned int x_2_3_4; unsigned long long x_2_3_5[2]; } x_16_2_2; } x_1_1_16; } x1; }*)arg7 argsSize:(unsigned int)arg8 deallocator:(id /* block */)arg9;
- (id)initWithHeap:(id)arg1 resource:(id)arg2 offset:(unsigned long long)arg3 length:(unsigned long long)arg4;
- (id)initWithPrimaryBuffer:(id)arg1 heapIndex:(short)arg2 bufferIndex:(short)arg3 bufferOffset:(unsigned long long)arg4 length:(unsigned long long)arg5 args:(struct IOGPUNewResourceArgs { struct IOGPUNewResourceData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; unsigned short x_1_1_5; unsigned short x_1_1_6; unsigned char x_1_1_7; unsigned char x_1_1_8; unsigned char x_1_1_9; unsigned char x_1_1_10; unsigned int x_1_1_11; unsigned long long x_1_1_12; unsigned long long x_1_1_13; unsigned long long x_1_1_14; unsigned int x_1_1_15; union { struct { unsigned long long x_1_3_1; unsigned long long x_1_3_2; unsigned long long x_1_3_3; union { unsigned int x_4_4_1; unsigned long long x_4_4_2; } x_1_3_4; } x_16_2_1; struct { unsigned int x_2_3_1; unsigned int x_2_3_2; unsigned int x_2_3_3; unsigned int x_2_3_4; unsigned long long x_2_3_5[2]; } x_16_2_2; } x_1_1_16; } x1; }*)arg6 argsSize:(unsigned int)arg7;
- (struct __IOSurface { }*)iosurface;
- (unsigned long long)length;
- (id)newLinearTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4;
- (void)removeAllDebugMarkers;
- (int)setOwnerWithIdentity:(unsigned int)arg1;

@end
