
@interface VFXREScene : NSObject {
    void cameraEntity;
    void cancellables;
    void device;
    void effect;
    void isPrepared;
    void reloadBlock;
    void remappingTable;
    void renderOutput;
    void rootEntity;
    void scene;
    void sceneFromWorld;
    void sceneScale;
    void transientDrawCall;
    void uuid;
    void worldFromScene;
}

@property (nonatomic, readonly) float deltaTime;
@property (nonatomic, retain) _TtC3VFX9VFXEffect *effect;
@property (nonatomic, readonly) bool needsCollisionPlanes;
@property (nonatomic, readonly) void*opaqueECS;
@property (nonatomic) int peerPid;
@property (nonatomic) unsigned int peerTaskIdentity;
@property (nonatomic, copy) id /* block */ reloadBlock;
@property (nonatomic, retain) _TtC3VFX8VFXScene *scene;
@property (nonatomic) float sceneScale;
@property (nonatomic, readonly) bool shouldUseDrawCallHandler;
@property (nonatomic, retain) id transientDrawCall;
@property (nonatomic) long long uuid;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[2]; } worldBoundingBox;

- (void).cxx_destruct;
- (id)REMeshAssetBindings;
- (long long)addCollisionPlaneWithCenter:(void *)arg1 extents:(void *)arg2 transform:(void *)arg3; // needs 3 arg types, found 1: struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }
- (long long)addCollisionPlaneWithExtents:(void *)arg1 transform:(void *)arg2; // needs 2 arg types, found 1: struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }
- (void)clear;
- (void)copyBindingValueWithObjectName:(id)arg1 bindingName:(id)arg2 action:(long long)arg3 storageGetterBlock:(id /* block */)arg4;
- (id)createREMeshDataBinding;
- (float)deltaTime;
- (id)effect;
- (long long)fetchClientTextureIDWithNamed:(id)arg1;
- (id)generateMaterialsAndReturnError:(id*)arg1;
- (id)getREMeshAssetPath:(id)arg1;
- (id)init;
- (id)initWithCommandQueue:(id)arg1 model:(id)arg2 options:(id)arg3;
- (id)initWithContentsOf:(id)arg1 commandQueue:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)initWithDevice:(id)arg1 contentsOf:(id)arg2 error:(id*)arg3;
- (id)initWithDevice:(id)arg1 model:(id)arg2;
- (id)initWithDevice:(id)arg1 model:(id)arg2 options:(id)arg3;
- (id)neededModelsAndReturnError:(id*)arg1;
- (bool)needsCollisionPlanes;
- (void*)opaqueECS;
- (int)peerPid;
- (unsigned int)peerTaskIdentity;
- (id /* block */)recycleBuffersGetCompletion;
- (id /* block */)reloadBlock;
- (void)removeCollisionPlaneWithId:(long long)arg1;
- (id)scene;
- (float)sceneScale;
- (void)setCameraEntityTransformProjection;
- (void)setClientTextureWithId:(long long)arg1 texture:(id)arg2;
- (void)setEffect:(id)arg1;
- (void)setFrameConfigurationWithImmersiveEnvironmentCurves;
- (void)setFrameConfigurationWithRenderInCompositeLayer:(bool)arg1 fadeOpacity:(float)arg2 drawsSeparateDepth:(bool)arg3;
- (void)setFrameConfigurationWithRenderInCompositeLayer:(bool)arg1 fadeOpacity:(float)arg2 drawsSeparateDepth:(bool)arg3 drawsBlur:(bool)arg4;
- (void)setFrameConfigurationWithRenderInCompositeLayer:(void *)arg1 fadeOpacity:(void *)arg2 drawsSeparateDepth:(void *)arg3 immersiveEnvironmentCurves:(void *)arg4; // needs 4 arg types, found 3: bool, float, bool
- (void)setPeerPid:(int)arg1;
- (void)setPeerTaskIdentity:(unsigned int)arg1;
- (void)setREMeshDataBinding:(id)arg1 positionData:(id)arg2 normalData:(id)arg3 colorData:(id)arg4;
- (void)setReloadBlock:(id /* block */)arg1;
- (void)setRootEntityTransform;
- (void)setRootTransform;
- (void)setScene:(id)arg1;
- (void)setSceneScale:(float)arg1;
- (void)setSceneTransform;
- (void)setTransientDrawCall:(id)arg1;
- (void)setUuid:(long long)arg1;
- (bool)shouldUseDrawCallHandler;
- (void)tick;
- (void)tickWithCommandBuffer:(id)arg1;
- (void)tickWithDeltaTime:(double)arg1;
- (void)tickWithDeltaTime:(double)arg1 commandBuffer:(id)arg2;
- (id)transientDrawCall;
- (void)updateCollisionPlaneWithId:(void *)arg1 center:(void *)arg2 extents:(void *)arg3 transform:(void *)arg4; // needs 4 arg types, found 2: long long, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }
- (void)updateCollisionPlaneWithId:(void *)arg1 extents:(void *)arg2 transform:(void *)arg3; // needs 3 arg types, found 2: long long, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }
- (void)updateMemoryOwnership;
- (long long)uuid;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[2]; })worldBoundingBox;

@end
