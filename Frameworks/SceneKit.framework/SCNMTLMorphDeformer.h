
@interface SCNMTLMorphDeformer : NSObject <SCNMTLDeformer> {
    <MTLBuffer> * _baseBufferForComputeKernel;
    short  _baseNormalDataType;
    short  _basePositionDataType;
    SCNMTLComputePipeline * _blendDenseIndexedPipeline;
    SCNMTLComputePipeline * _blendDensePipeline;
    SCNMTLComputePipeline * _blendSparsePipeline;
    SCNMTLComputePipeline * _copyBaseBufferPipeline;
    unsigned char  _dataKindForComputeKernel;
    <MTLBuffer> * _deindexedToFirstDeindexedTableBuffer;
    unsigned char  _finalMeshDataKind;
    unsigned int  _finalMeshVertexCount;
    SCNMTLComputePipeline * _incrementalAddPipeline;
    SCNMTLComputePipeline * _incrementalInitPipeline;
    unsigned int  _lastMorpherIncrementalPassState;
    unsigned int  _lastUpdateFrameIndex;
    unsigned long long  _morphKind;
    bool  _morphNormals;
    unsigned int  _morphTargetCount;
    short  _morphTargetNormalDataType;
    short  _morphTargetPositionDataType;
    struct { float x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned long long x5; } * _morphTargets;
    <MTLBuffer> * _morphTargetsSparseIndicesBuffer;
    <MTLBuffer> * _morphTargetsVertexBuffer;
    struct __C3DMorpher { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; _Atomic unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __C3DGeometry {} *x2; struct __C3DMorph {} *x3; struct __C3DMesh {} *x4; unsigned int x5; unsigned int x6; float *x7; unsigned int x8; unsigned int x9; } * _morpher;
    <MTLBuffer> * _originalToFirstDeindexedTableBuffer;
    SCNMTLResourceManager * _resourceManager;
    SCNMTLComputePipeline * _splatPipeline;
    unsigned int  _vertexCountForComputeKernel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned long long)requiredInputs;
+ (unsigned long long)requiredOutputs;
+ (unsigned long long)supportedOutputs;

- (void)createSparseIndicesBufferForMorphTarget:(struct { float x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned long long x5; }*)arg1 withSetupTarget:(struct { unsigned int x1; struct __C3DGeometry {} *x2; struct __C3DMeshSource {} *x3; struct __C3DMeshSource {} *x4; unsigned long long x5; }*)arg2 indicesBuffer:(char *)arg3 indicesBufferOffset:(unsigned long long)arg4 indexSize:(unsigned long long)arg5 originalToFirstDeindexedTable:(unsigned int*)arg6 computeContext:(id)arg7;
- (void)createVertexBufferForMorphTarget:(struct { float x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned long long x5; }*)arg1 withSetupTarget:(struct { unsigned int x1; struct __C3DGeometry {} *x2; struct __C3DMeshSource {} *x3; struct __C3DMeshSource {} *x4; unsigned long long x5; }*)arg2 vertexBuffer:(char *)arg3 vertexBufferOffset:(unsigned long long)arg4 indicesBuffer:(char *)arg5 indicesBufferOffset:(unsigned long long)arg6 indexSize:(unsigned long long)arg7 originalToFirstDeindexedTable:(unsigned int*)arg8 computeContext:(id)arg9;
- (void)dealloc;
- (unsigned long long)morphIncrementallyWithComputeContext:(id)arg1 positions:(id)arg2 normals:(id)arg3;
- (unsigned long long)morphSparseWithComputeContext:(id)arg1 positions:(id)arg2 normals:(id)arg3;
- (void)setupMorphTargetsWithComputeContext:(id)arg1;
- (unsigned long long)updateWithComputeContext:(id)arg1 positions:(id)arg2 normals:(id)arg3 tangents:(id)arg4;

@end
