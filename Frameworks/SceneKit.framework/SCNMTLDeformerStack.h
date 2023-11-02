
@interface SCNMTLDeformerStack : NSObject <SCNMTLDeformerInitComputeContext, SCNMTLDeformerUpdateComputeContext> {
    struct __C3DMesh { } * _baseMesh;
    SCNGeometryDeformer * _currentInitDeformer;
    SCNMTLRenderContext * _currentInitRenderContext;
    <MTLBlitCommandEncoder> * _currentInitResourceBlitEncoder;
    struct SCNMTLComputeCommandEncoder { id x1[31]; unsigned long long x2[31]; id x3[128]; id x4[16]; id x5; id x6; id x7; struct SCNMTLBufferPool {} *x8; unsigned int x9; unsigned long long x10[2]; unsigned long long x11[1]; } * _currentUpdateComputeCommandEncoder;
    struct { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*screenResolution; 
    }  _currentUpdateFrustumInfo;
    SCNMTLRenderContext * _currentUpdateRenderContext;
    struct { 
        struct { 
            /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
        } modelViewTransform; 
        struct { 
            void*columns[4]; 
        } projectionTransform; 
    }  _currentUpdateTransforms;
    NSMapTable * _customDeformerToInstances;
    unsigned char  _deformDataKind;
    <MTLBuffer> * _deformNormalBuffer;
    struct { 
        bool isActive; 
        unsigned long long bufferAttributeFormat; 
        unsigned long long bufferAttributeOffset; 
        unsigned long long bufferLayoutStride; 
    }  _deformNormalStageInputOutputDescriptorInfo;
    <MTLBuffer> * _deformPositionBuffer;
    struct { 
        bool isActive; 
        unsigned long long bufferAttributeFormat; 
        unsigned long long bufferAttributeOffset; 
        unsigned long long bufferLayoutStride; 
    }  _deformPositionStageInputOutputDescriptorInfo;
    <MTLBuffer> * _deformTangentBuffer;
    struct { 
        bool isActive; 
        unsigned long long bufferAttributeFormat; 
        unsigned long long bufferAttributeOffset; 
        unsigned long long bufferLayoutStride; 
    }  _deformTangentStageInputOutputDescriptorInfo;
    struct __C3DDeformerStack { } * _deformers;
    <MTLBuffer> * _deindexedToFirstDeindexedTableBuffer;
    unsigned long long  _deindexedToFirstDeindexedTableBufferIndexSize;
    <MTLBuffer> * _deindexedToOriginalTableBuffer;
    unsigned long long  _deindexedToOriginalTableBufferIndexSize;
    unsigned char  _finalDataKind;
    SCNMTLMesh * _finalMesh;
    <MTLBuffer> * _finalNormalBuffer;
    <MTLBuffer> * _finalPositionBuffer;
    <MTLBuffer> * _finalTangentBuffer;
    MTLStageInputOutputDescriptor * _initialBuffersStageInputDescriptor;
    <MTLBuffer> * _initialNormalBuffer;
    struct { 
        bool isActive; 
        unsigned long long bufferAttributeFormat; 
        unsigned long long bufferAttributeOffset; 
        unsigned long long bufferLayoutStride; 
    }  _initialNormalStageInputOutputDescriptorInfo;
    <MTLBuffer> * _initialPositionBuffer;
    struct { 
        bool isActive; 
        unsigned long long bufferAttributeFormat; 
        unsigned long long bufferAttributeOffset; 
        unsigned long long bufferLayoutStride; 
    }  _initialPositionStageInputOutputDescriptorInfo;
    <MTLBuffer> * _initialTangentBuffer;
    struct { 
        bool isActive; 
        unsigned long long bufferAttributeFormat; 
        unsigned long long bufferAttributeOffset; 
        unsigned long long bufferLayoutStride; 
    }  _initialTangentStageInputOutputDescriptorInfo;
    bool  _isValid;
    SCNMTLMorphDeformer * _morphDeformer;
    struct __C3DNode { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; _Atomic unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __C3DNode {} *x2; struct __C3DNode {} *x3; struct __C3DNode {} *x4; int x5; struct { union C3DMatrix4x4 { float x_1_2_1[16]; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_2_2[4]; void*x_1_2_3; } x_6_1_1; union { } x_6_1_2; } x6; union { unsigned char x_7_1_1; void*x_7_1_2; long doublex_7_1_3; void*x_7_1_4; void*x_7_1_5; void*x_7_1_6; const int x_7_1_7; void*x_7_1_8; void*x_7_1_9; void*x_7_1_10; void*x_7_1_11; } *x7; bool x8; float x9; unsigned long long x10; int x11; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; } * _node;
    <MTLBuffer> * _originalToFirstDeindexedTableBuffer;
    unsigned long long  _originalToFirstDeindexedTableBufferIndexSize;
    NSMutableArray * _postMorphingDeformerInstances;
    NSMutableArray * _postSkinningDeformerInstances;
    bool  _reliesOnFrustum;
    bool  _reliesOnTransforms;
    SCNMTLResourceManager * _resourceManager;
    SCNMTLSkinDeformer * _skinDeformer;
    SCNMTLSmoothNormalsDeformer * _smoothNormalsDeformer;
    SCNMTLComputePipeline * _splatDeformedToFinalPipeline;
    struct { 
        unsigned int maxIndex; 
    }  _splatUniforms;
}

@property (nonatomic, readonly) <MTLBlitCommandEncoder> *currentBlitEncoder;
@property (nonatomic, readonly) struct SCNMTLComputeCommandEncoder { id x1[31]; unsigned long long x2[31]; id x3[128]; id x4[16]; id x5; id x6; id x7; struct SCNMTLBufferPool {} *x8; unsigned int x9; unsigned long long x10[2]; unsigned long long x11[1]; }*currentComputeEncoder;
@property (nonatomic, readonly) long long currentFrameIndex;
@property (nonatomic, readonly) struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[4]; } x1; struct { void*x_2_1_1[4]; } x2; } currentTransforms;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MTLStageInputOutputDescriptor *stageInputDescriptor;
@property (readonly) Class superclass;

- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[6]; })_currentFrustumInfo;
- (id)currentBlitEncoder;
- (struct SCNMTLComputeCommandEncoder { id x1[31]; unsigned long long x2[31]; id x3[128]; id x4[16]; id x5; id x6; id x7; struct SCNMTLBufferPool {} *x8; unsigned int x9; unsigned long long x10[2]; unsigned long long x11[1]; }*)currentComputeEncoder;
- (long long)currentFrameIndex;
- (struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[4]; } x1; struct { void*x_2_1_1[4]; } x2; })currentTransforms;
- (void)dealloc;
- (id)deindexedToFirstDeindexedTableBufferWithBlitEncoder:(id)arg1 indexSizeOut:(unsigned long long*)arg2;
- (id)deindexedToOriginalTableBufferWithBlitEncoder:(id)arg1 indexSizeOut:(unsigned long long*)arg2;
- (id)newBufferForDataKind:(unsigned char)arg1 meshSource:(struct __C3DMeshSource { struct __C3DGenericSource { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_3_1; _Atomic unsigned long long x_1_3_2; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; struct __C3DScene {} *x_1_2_6; long long x_1_2_7; } x_1_1_1; struct __C3DSourceAccessor {} *x_1_1_2; union { struct __CFData {} *x_3_2_1; void *x_3_2_2; void *x_3_2_3; } x_1_1_3; long long x_1_1_4; unsigned int x_1_1_5 : 1; unsigned int x_1_1_6 : 1; unsigned int x_1_1_7 : 1; } x1; unsigned short x2; unsigned char x3; unsigned char x4; }*)arg2 dataType:(short)arg3 forStageInputOutputDescriptor:(bool)arg4 usePrivateStorageMode:(bool)arg5 outStride:(unsigned long long*)arg6;
- (id)newBufferForDataKind:(unsigned char)arg1 positionSource:(struct __C3DMeshSource { struct __C3DGenericSource { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_3_1; _Atomic unsigned long long x_1_3_2; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; struct __C3DScene {} *x_1_2_6; long long x_1_2_7; } x_1_1_1; struct __C3DSourceAccessor {} *x_1_1_2; union { struct __CFData {} *x_3_2_1; void *x_3_2_2; void *x_3_2_3; } x_1_1_3; long long x_1_1_4; unsigned int x_1_1_5 : 1; unsigned int x_1_1_6 : 1; unsigned int x_1_1_7 : 1; } x1; unsigned short x2; unsigned char x3; unsigned char x4; }*)arg2 normalSource:(struct __C3DMeshSource { struct __C3DGenericSource { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_3_1; _Atomic unsigned long long x_1_3_2; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; struct __C3DScene {} *x_1_2_6; long long x_1_2_7; } x_1_1_1; struct __C3DSourceAccessor {} *x_1_1_2; union { struct __CFData {} *x_3_2_1; void *x_3_2_2; void *x_3_2_3; } x_1_1_3; long long x_1_1_4; unsigned int x_1_1_5 : 1; unsigned int x_1_1_6 : 1; unsigned int x_1_1_7 : 1; } x1; unsigned short x2; unsigned char x3; unsigned char x4; }*)arg3 positionDataType:(short)arg4 normalDataType:(short)arg5 forStageInputOutputDescriptor:(bool)arg6 usePrivateStorageMode:(bool)arg7 outStride:(unsigned long long*)arg8 outPositionOffset:(unsigned long long*)arg9 outNormalOffset:(unsigned long long*)arg10;
- (id)originalToFirstDeindexedTableBufferWithBlitEncoder:(id)arg1 indexSizeOut:(unsigned long long*)arg2;
- (void)reconfigureIfNeededWithContext:(id)arg1 programHashCodeRequirements:(struct { bool x1; })arg2;
- (void)setStageInputOutputBuffersToEncoder:(struct SCNMTLComputeCommandEncoder { id x1[31]; unsigned long long x2[31]; id x3[128]; id x4[16]; id x5; id x6; id x7; struct SCNMTLBufferPool {} *x8; unsigned int x9; unsigned long long x10[2]; unsigned long long x11[1]; }*)arg1;
- (void)setupFinalMeshWithMesh:(struct __C3DMesh { }*)arg1 entityName:(struct __CFString { }*)arg2 info:(struct { bool x1; bool x2; bool x3; bool x4; })arg3 usingDrawIndirect:(bool)arg4;
- (void)setupInitialBuffersWithBaseMesh:(struct __C3DMesh { }*)arg1 entityName:(struct __CFString { }*)arg2 info:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; })arg3;
- (id)stageInputDescriptor;

@end
