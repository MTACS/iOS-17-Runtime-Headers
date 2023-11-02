
@interface _SCNGeometryWrapDeformerParameters_Simple : SCNGeometryWrapDeformerParameters {
    void * _bindingBarycentricCoords;
    unsigned long long  _bindingBarycentricCoordsFormat;
    unsigned long long  _bindingBarycentricCoordsStride;
    unsigned long long  _bindingMode;
    float * _bindingOffsetsOrTransforms;
    unsigned long long  _bindingOffsetsOrTransformsLength;
    void * _bindingPointIndices;
    unsigned long long  _bindingPointIndicesFormat;
    unsigned long long  _bindingPointIndicesStride;
    unsigned long long  _deformedNodeUVChannel;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _deformedToDrivingBindingTransform;
    unsigned long long  _drivingNodeUVChannel;
    unsigned int  _vertexCount;
}

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)initParametersIfNeededWithDrivingNodeRef:(struct __C3DNode { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; _Atomic unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __C3DNode {} *x2; struct __C3DNode {} *x3; struct __C3DNode {} *x4; int x5; struct { union C3DMatrix4x4 { float x_1_2_1[16]; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_2_2[4]; void*x_1_2_3; } x_6_1_1; union { } x_6_1_2; } x6; union { unsigned char x_7_1_1; void*x_7_1_2; long doublex_7_1_3; void*x_7_1_4; void*x_7_1_5; void*x_7_1_6; const int x_7_1_7; void*x_7_1_8; void*x_7_1_9; void*x_7_1_10; void*x_7_1_11; } *x7; bool x8; float x9; unsigned long long x10; int x11; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; }*)arg1 deformedNodeRef:(struct __C3DNode { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; _Atomic unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __C3DNode {} *x2; struct __C3DNode {} *x3; struct __C3DNode {} *x4; int x5; struct { union C3DMatrix4x4 { float x_1_2_1[16]; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_2_2[4]; void*x_1_2_3; } x_6_1_1; union { } x_6_1_2; } x6; union { unsigned char x_7_1_1; void*x_7_1_2; long doublex_7_1_3; void*x_7_1_4; void*x_7_1_5; void*x_7_1_6; const int x_7_1_7; void*x_7_1_8; void*x_7_1_9; void*x_7_1_10; void*x_7_1_11; } *x7; bool x8; float x9; unsigned long long x10; int x11; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; }*)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDrivingNode:(id)arg1 deformedNode:(id)arg2 bindingMode:(unsigned long long)arg3 bindingTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg4 drivingNodeUVChannel:(unsigned long long)arg5 deformedNodeUVChannel:(unsigned long long)arg6;

@end
