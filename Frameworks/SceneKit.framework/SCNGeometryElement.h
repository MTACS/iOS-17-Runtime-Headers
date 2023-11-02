
@interface SCNGeometryElement : NSObject <NSSecureCoding> {
    long long  _bytesPerIndex;
    NSData * _elementData;
    long long  _indicesChannelCount;
    bool  _interleavedIndicesChannels;
    float  _maximumPointScreenSpaceRadius;
    struct __C3DMeshElement { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; _Atomic unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; unsigned int x2; unsigned int x3; struct __C3DMeshElement {} *x4; unsigned char x5; unsigned char x6; unsigned char x7; struct { BOOL x_8_1_1; struct __CFData {} *x_8_1_2; unsigned int x_8_1_3; unsigned int *x_8_1_4; struct { /* ? */ } *x_8_1_5; unsigned short x_8_1_6; unsigned char x_8_1_7; bool x_8_1_8; } x8; void *x9; float x10; float x11; float x12; void *x13; struct __C3DMeshSource {} *x14; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x15[2]; } * _meshElement;
    float  _minimumPointScreenSpaceRadius;
    <MTLBuffer> * _mtlBuffer;
    float  _pointSize;
    long long  _primitiveCount;
    NSArray * _primitiveRanges;
    long long  _primitiveType;
}

@property (nonatomic, readonly) long long bytesPerIndex;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic) double maximumPointScreenSpaceRadius;
@property (nonatomic) double minimumPointScreenSpaceRadius;
@property (nonatomic) double pointSize;
@property (nonatomic, readonly) long long primitiveCount;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } primitiveRange;
@property (nonatomic, readonly) long long primitiveType;

+ (id)_optimizedGeometryElementWithData:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 bytesPerIndex:(long long)arg4;
+ (id)geometryElementWithBuffer:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 bytesPerIndex:(long long)arg4;
+ (id)geometryElementWithBuffer:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 indicesChannelCount:(long long)arg4 interleavedIndicesChannels:(bool)arg5 bytesPerIndex:(long long)arg6;
+ (id)geometryElementWithData:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 bytesPerIndex:(long long)arg4;
+ (id)geometryElementWithData:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 indicesChannelCount:(long long)arg4 interleavedIndicesChannels:(bool)arg5 bytesPerIndex:(long long)arg6;
+ (id)geometryElementWithMDLSubmesh:(id)arg1;
+ (id)geometryElementWithMeshElementRef:(struct __C3DMeshElement { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; _Atomic unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; unsigned int x2; unsigned int x3; struct __C3DMeshElement {} *x4; unsigned char x5; unsigned char x6; unsigned char x7; struct { BOOL x_8_1_1; struct __CFData {} *x_8_1_2; unsigned int x_8_1_3; unsigned int *x_8_1_4; struct { /* ? */ } *x_8_1_5; unsigned short x_8_1_6; unsigned char x_8_1_7; bool x_8_1_8; } x8; void *x9; float x10; float x11; float x12; void *x13; struct __C3DMeshSource {} *x14; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x15[2]; }*)arg1;
+ (bool)supportsSecureCoding;

- (void*)__CFObject;
- (double)_computeACMR;
- (void)_optimizeTriangleIndices;
- (void)_printData;
- (long long)bytesPerIndex;
- (id)data;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasInterleavedIndicesChannels;
- (unsigned long long)indexCount;
- (long long)indicesChannelCount;
- (id)init;
- (id)initWithBuffer:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 indicesChannelCount:(long long)arg4 interleavedIndicesChannels:(bool)arg5 bytesPerIndex:(long long)arg6;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 indicesChannelCount:(long long)arg4 interleavedIndicesChannels:(bool)arg5 bytesPerIndex:(long long)arg6;
- (id)initWithMeshElement:(struct __C3DMeshElement { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; _Atomic unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; unsigned int x2; unsigned int x3; struct __C3DMeshElement {} *x4; unsigned char x5; unsigned char x6; unsigned char x7; struct { BOOL x_8_1_1; struct __CFData {} *x_8_1_2; unsigned int x_8_1_3; unsigned int *x_8_1_4; struct { /* ? */ } *x_8_1_5; unsigned short x_8_1_6; unsigned char x_8_1_7; bool x_8_1_8; } x8; void *x9; float x10; float x11; float x12; void *x13; struct __C3DMeshSource {} *x14; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x15[2]; }*)arg1;
- (double)maximumPointScreenSpaceRadius;
- (struct __C3DMeshElement { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; _Atomic unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; unsigned int x2; unsigned int x3; struct __C3DMeshElement {} *x4; unsigned char x5; unsigned char x6; unsigned char x7; struct { BOOL x_8_1_1; struct __CFData {} *x_8_1_2; unsigned int x_8_1_3; unsigned int *x_8_1_4; struct { /* ? */ } *x_8_1_5; unsigned short x_8_1_6; unsigned char x_8_1_7; bool x_8_1_8; } x8; void *x9; float x10; float x11; float x12; void *x13; struct __C3DMeshSource {} *x14; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x15[2]; }*)meshElement;
- (double)minimumPointScreenSpaceRadius;
- (double)pointSize;
- (long long)primitiveCount;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })primitiveRange;
- (id)primitiveRanges;
- (long long)primitiveType;
- (id)scene;
- (struct __C3DScene { }*)sceneRef;
- (void)setMaximumPointScreenSpaceRadius:(double)arg1;
- (void)setMinimumPointScreenSpaceRadius:(double)arg1;
- (void)setPointSize:(double)arg1;
- (void)setPrimitiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setPrimitiveRanges:(id)arg1;

@end
