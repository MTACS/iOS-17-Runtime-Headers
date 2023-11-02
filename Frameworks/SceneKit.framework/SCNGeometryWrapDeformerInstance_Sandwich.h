
@interface SCNGeometryWrapDeformerInstance_Sandwich : NSObject <SCNGeometryDeformerInstance> {
    struct { 
        <MTLBuffer> *pointIndicesBuffer; 
        <MTLBuffer> *barycentricCoordsBuffer; 
    }  _bindingBuffers;
    <MTLBuffer> * _bindingDriver0InfluencesBuffer;
    SCNMTLComputePipeline * _computePipeline;
    struct __C3DNode { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; _Atomic unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __C3DNode {} *x2; struct __C3DNode {} *x3; struct __C3DNode {} *x4; int x5; struct { union C3DMatrix4x4 { float x_1_2_1[16]; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_2_2[4]; void*x_1_2_3; } x_6_1_1; union { } x_6_1_2; } x6; union { unsigned char x_7_1_1; void*x_7_1_2; long doublex_7_1_3; void*x_7_1_4; void*x_7_1_5; void*x_7_1_6; const int x_7_1_7; void*x_7_1_8; void*x_7_1_9; void*x_7_1_10; void*x_7_1_11; } *x7; bool x8; float x9; unsigned long long x10; int x11; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; } * _deformedNode;
    struct __C3DNode { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; _Atomic unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __C3DNode {} *x2; struct __C3DNode {} *x3; struct __C3DNode {} *x4; int x5; struct { union C3DMatrix4x4 { float x_1_2_1[16]; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_2_2[4]; void*x_1_2_3; } x_6_1_1; union { } x_6_1_2; } x6; union { unsigned char x_7_1_1; void*x_7_1_2; long doublex_7_1_3; void*x_7_1_4; void*x_7_1_5; void*x_7_1_6; const int x_7_1_7; void*x_7_1_8; void*x_7_1_9; void*x_7_1_10; void*x_7_1_11; } *x7; bool x8; float x9; unsigned long long x10; int x11; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; } * _drivingNode0;
    struct __C3DNode { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; _Atomic unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __C3DNode {} *x2; struct __C3DNode {} *x3; struct __C3DNode {} *x4; int x5; struct { union C3DMatrix4x4 { float x_1_2_1[16]; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_2_2[4]; void*x_1_2_3; } x_6_1_1; union { } x_6_1_2; } x6; union { unsigned char x_7_1_1; void*x_7_1_2; long doublex_7_1_3; void*x_7_1_4; void*x_7_1_5; void*x_7_1_6; const int x_7_1_7; void*x_7_1_8; void*x_7_1_9; void*x_7_1_10; void*x_7_1_11; } *x7; bool x8; float x9; unsigned long long x10; int x11; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; } * _drivingNode1;
    unsigned int  _lastUpdateFrameIndex;
    unsigned long long  _mode;
    struct { 
        unsigned int vertexCount; 
        struct { 
            /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
        } driver0ToDeformedTransform; 
    }  _uniforms;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (unsigned long long)updateWithContext:(id)arg1;

@end
