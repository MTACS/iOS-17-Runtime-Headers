
@interface ARSpatialMappingResultData : NSObject <ARResultData> {
    bool  _empty;
    NSArray * _meshChunks;
    bool  _meshConfidenceEnabled;
    struct CV3DReconMeshList { } * _meshList;
    <MTLDevice> * _mtlDevice;
    unsigned long long  _sceneReconstruction;
    double  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEmpty, nonatomic) bool empty;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *meshChunks;
@property (nonatomic, readonly) bool meshConfidenceEnabled;
@property (nonatomic) struct CV3DReconMeshList { }*meshList;
@property (nonatomic, retain) <MTLDevice> *mtlDevice;
@property (nonatomic) unsigned long long sceneReconstruction;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;

+ (id)emptyResultData;

- (void).cxx_destruct;
- (id)anchorsForCameraWithTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 referenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4;
- (id)anchorsFromMeshChunksForCameraWithTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 referenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4;
- (id)anchorsFromMeshListForCameraWithTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 referenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4;
- (void)dealloc;
- (id)initWithMeshChunks:(id)arg1;
- (id)initWithMeshList:(struct CV3DReconMeshList { }*)arg1 sceneReconstruction:(unsigned long long)arg2 timestamp:(double)arg3;
- (bool)isEmpty;
- (id)meshChunks;
- (bool)meshConfidenceEnabled;
- (struct CV3DReconMeshList { }*)meshList;
- (id)mtlDevice;
- (unsigned long long)sceneReconstruction;
- (void)setEmpty:(bool)arg1;
- (void)setMeshChunks:(id)arg1;
- (void)setMeshList:(struct CV3DReconMeshList { }*)arg1;
- (void)setMtlDevice:(id)arg1;
- (void)setSceneReconstruction:(unsigned long long)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (void)updateSemanticsFromSamplingData:(struct __CFData { }*)arg1;

@end
