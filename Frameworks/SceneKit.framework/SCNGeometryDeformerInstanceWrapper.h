
@interface SCNGeometryDeformerInstanceWrapper : NSObject <SCNGeometryDeformerInitComputeContext, SCNGeometryDeformerUpdateComputeContext> {
    struct { 
        <MTLBuffer> *srcPositions; 
        <MTLBuffer> *dstPositions; 
        <MTLBuffer> *srcNormals; 
        <MTLBuffer> *dstNormals; 
        <MTLBuffer> *srcTangents; 
        <MTLBuffer> *dstTangents; 
        <MTLBuffer> *dependency0Positions; 
        <MTLBuffer> *dependency0Normals; 
        <MTLBuffer> *dependency0Tangents; 
        <MTLBuffer> *dependency1Positions; 
        <MTLBuffer> *dependency1Normals; 
        <MTLBuffer> *dependency1Tangents; 
    }  _currentUpdateBuffers;
    <MTLComputeCommandEncoder> * _currentUpdateComputeEncoder;
    id /* block */  _currentUpdateComputeEncoderProvider;
    SCNGeometryDeformer * _deformer;
    <SCNGeometryDeformerInstance> * _instance;
    SCNMTLDeformerStack * _stack;
    struct { 
        struct { 
            bool isActive; 
            unsigned long long bufferAttributeFormat; 
            unsigned long long bufferAttributeOffset; 
            unsigned long long bufferLayoutStride; 
        } srcPositions; 
        struct { 
            bool isActive; 
            unsigned long long bufferAttributeFormat; 
            unsigned long long bufferAttributeOffset; 
            unsigned long long bufferLayoutStride; 
        } dstPositions; 
        struct { 
            bool isActive; 
            unsigned long long bufferAttributeFormat; 
            unsigned long long bufferAttributeOffset; 
            unsigned long long bufferLayoutStride; 
        } srcNormals; 
        struct { 
            bool isActive; 
            unsigned long long bufferAttributeFormat; 
            unsigned long long bufferAttributeOffset; 
            unsigned long long bufferLayoutStride; 
        } dstNormals; 
        struct { 
            bool isActive; 
            unsigned long long bufferAttributeFormat; 
            unsigned long long bufferAttributeOffset; 
            unsigned long long bufferLayoutStride; 
        } srcTangents; 
        struct { 
            bool isActive; 
            unsigned long long bufferAttributeFormat; 
            unsigned long long bufferAttributeOffset; 
            unsigned long long bufferLayoutStride; 
        } dstTangents; 
        struct { 
            bool isActive; 
            unsigned long long bufferAttributeFormat; 
            unsigned long long bufferAttributeOffset; 
            unsigned long long bufferLayoutStride; 
        } dependency0Positions; 
        struct { 
            bool isActive; 
            unsigned long long bufferAttributeFormat; 
            unsigned long long bufferAttributeOffset; 
            unsigned long long bufferLayoutStride; 
        } dependency0Normals; 
        struct { 
            bool isActive; 
            unsigned long long bufferAttributeFormat; 
            unsigned long long bufferAttributeOffset; 
            unsigned long long bufferLayoutStride; 
        } dependency0Tangents; 
        struct { 
            bool isActive; 
            unsigned long long bufferAttributeFormat; 
            unsigned long long bufferAttributeOffset; 
            unsigned long long bufferLayoutStride; 
        } dependency1Positions; 
        struct { 
            bool isActive; 
            unsigned long long bufferAttributeFormat; 
            unsigned long long bufferAttributeOffset; 
            unsigned long long bufferLayoutStride; 
        } dependency1Normals; 
        struct { 
            bool isActive; 
            unsigned long long bufferAttributeFormat; 
            unsigned long long bufferAttributeOffset; 
            unsigned long long bufferLayoutStride; 
        } dependency1Tangents; 
    }  _stageInputOutputDescriptors;
}

@property (nonatomic, readonly) <MTLBlitCommandEncoder> *currentBlitEncoder;
@property (nonatomic, readonly) <MTLComputeCommandEncoder> *currentComputeEncoder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <MTLDevice> *device;
@property (nonatomic, readonly) <MTLBuffer> *dstNormalBuffer;
@property (nonatomic, readonly) <MTLBuffer> *dstPositionBuffer;
@property (nonatomic, readonly) <MTLBuffer> *dstTangentBuffer;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <MTLBuffer> *srcNormalBuffer;
@property (nonatomic, readonly) <MTLBuffer> *srcPositionBuffer;
@property (nonatomic, readonly) <MTLBuffer> *srcTangentBuffer;
@property (readonly) Class superclass;

- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[6]; })_currentFrustumInfo;
- (id)_currentRenderContext;
- (id)_currentResourceManager;
- (struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[4]; } x1; struct { void*x_2_1_1[4]; } x2; })_currentTransforms;
- (void)configureStageInputOutputDescriptor:(id)arg1 withDeformerFunction:(id)arg2;
- (id)currentBlitEncoder;
- (id)currentComputeEncoder;
- (void)dealloc;
- (id)deformer;
- (id)dependency0NormalBuffer;
- (id)dependency0PositionBuffer;
- (id)dependency0TangentBuffer;
- (id)dependency1NormalBuffer;
- (id)dependency1PositionBuffer;
- (id)dependency1TangentBuffer;
- (id)dependencyBufferForInput:(unsigned long long)arg1 dependencyMesh:(id)arg2;
- (id)dependencyBufferForInput:(unsigned long long)arg1 dependencyStack:(id)arg2;
- (id)device;
- (id)dstNormalBuffer;
- (id)dstPositionBuffer;
- (id)dstTangentBuffer;
- (void)setStageInputOutputBuffersToComputeEncoder:(struct SCNMTLComputeCommandEncoder { id x1[31]; unsigned long long x2[31]; id x3[128]; id x4[16]; id x5; id x6; id x7; struct SCNMTLBufferPool {} *x8; unsigned int x9; unsigned long long x10[2]; unsigned long long x11[1]; }*)arg1;
- (void)setStageInputOutputBuffersToCurrentComputeEncoder;
- (id)srcNormalBuffer;
- (id)srcPositionBuffer;
- (id)srcTangentBuffer;

@end
