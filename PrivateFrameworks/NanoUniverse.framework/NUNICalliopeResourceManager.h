
@interface NUNICalliopeResourceManager : NSObject <CLKUIResourceProviderDelegate> {
    <MTLBuffer> * _atmosphereRingVerticesBuffer;
    unsigned long long  _clients;
    _TtC12NanoUniverse22AegirCloudCoverService * _cloudsService;
    <MTLDevice> * _device;
    <MTLBuffer> * _discVerticesBuffer;
    unsigned long long  _displayPixelFormat;
    <MTLLibrary> * _library;
    struct { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*min; 
    }  _patchBoundingBoxForSpheroid;
    struct { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*min; 
    }  _patchBoundingBoxes;
    <MTLBuffer> * _patchIndicesBuffer;
    struct { 
        CLKUITexture *albedo; 
        CLKUITexture *normal; 
        CLKUITexture *emissive; 
        CLKUITexture *cloud; 
    }  _patchTextureGroupTable;
    <MTLBuffer> * _patchVerticesBuffer;
    MTLFunctionConstantValues * _pipelineConstants;
    <MTLRenderPipelineState> * _pipelineStateAtmosphere;
    <MTLRenderPipelineState> * _pipelineStateDebugDraw;
    <MTLRenderPipelineState> * _pipelineStateDisplay;
    <MTLComputePipelineState> * _pipelineStateForBloomChainDownsample;
    <MTLComputePipelineState> * _pipelineStateForBloomChainUpsample;
    <MTLRenderPipelineState> * _pipelineStateForBloomDownsample;
    <MTLRenderPipelineState> * _pipelineStateForBloomDownsampleUsingTileShader;
    <MTLRenderPipelineState> * _pipelineStateLocationDot;
    <MTLRenderPipelineState> * _pipelineStatePost;
    <MTLRenderPipelineState> * _pipelineStateSaturnRing;
    <MTLRenderPipelineState> * _pipelineStateSpheroids;
    <MTLRenderPipelineState> * _pipelineStateStar;
    <MTLRenderPipelineState> * _pipelineStateStarfield;
    <MTLBuffer> * _rectVerticesBuffer;
    CLKUIResourceProviderKey * _resourceProviderKey;
    <MTLBuffer> * _saturnRingVerticesBuffer;
    <MTLBuffer> * _starVerticesBuffer;
    <MTLBuffer> * _starfieldIndicesBuffer;
    <MTLBuffer> * _starfieldVerticesBuffer;
    NSMapTable * _textureGroupHashTable;
}

@property (nonatomic, readonly) _TtC12NanoUniverse22AegirCloudCoverService *cloudsService;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_deallocInstance:(id)arg1;
+ (id)sharedInstanceWithDisplayPixelFormat:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_asyncDeallocInstance;
- (void)_deferredCloudDataFetchIfNeeded;
- (id)_generatePipelineCshName:(id)arg1;
- (id)_generatePipelineTshName:(id)arg1 pixelFormat0:(unsigned long long)arg2 pixelFormat1:(unsigned long long)arg3;
- (id)_generatePipelineVshName:(id)arg1 fshName:(id)arg2 config:(unsigned long long)arg3 blend0:(unsigned long long)arg4 blend1:(unsigned long long)arg5 pixelFormat0:(unsigned long long)arg6 pixelFormat1:(unsigned long long)arg7;
- (void)_handleCloudCoverTextureExpired;
- (void)_loadGeometry;
- (id)_provideEarthCloudsAtlasBacking:(id)arg1;
- (void)addClient;
- (id)atmosphereRingVerticesBuffer;
- (id)cloudsService;
- (id)computePipelineForBloomChainDownsample;
- (id)computePipelineForBloomChainUpsample;
- (void)dealloc;
- (id)discVerticesBuffer;
- (id)initWithDisplayPixelFormat:(unsigned long long)arg1;
- (const struct { }*)patchBoundingBoxForSpheroid;
- (const struct { }*)patchBoundingBoxes;
- (unsigned short)patchIndexCountForLod:(unsigned long long)arg1;
- (id)patchIndicesBufferForLod:(unsigned long long)arg1;
- (struct { id x1; id x2; id x3; id x4; }*)patchTextureGroupForSpheroid:(unsigned long long)arg1 index:(unsigned long long)arg2 suffix:(id)arg3;
- (id)patchVerticesBuffer;
- (id)provideAtlasBacking:(id)arg1;
- (void)purgeAllCloudCoverTextures;
- (id)rectVerticesBuffer;
- (void)removeClient;
- (id)renderDisplayPipeline;
- (id)renderOffscreenPipelineForAtmosphere;
- (id)renderOffscreenPipelineForBloomDownsample;
- (id)renderOffscreenPipelineForBloomDownsampleUsingTileShader;
- (id)renderOffscreenPipelineForDebugDraw;
- (id)renderOffscreenPipelineForLocationDot;
- (id)renderOffscreenPipelineForPost;
- (id)renderOffscreenPipelineForSaturnRing;
- (id)renderOffscreenPipelineForSpheroid:(unsigned long long)arg1 layer:(int)arg2 config:(unsigned long long)arg3;
- (id)renderOffscreenPipelineForStar;
- (id)renderOffscreenPipelineForStarfield;
- (id)resourceProviderKey;
- (id)saturnRingVerticesBuffer;
- (void)setPipelineConstants:(union NUNICalliopePipelineConstants { struct { /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*x_1_1_1; void*x_1_1_2; void*x_1_1_3; void*x_1_1_4; void*x_1_1_5; void*x_1_1_6; void*x_1_1_7; void*x_1_1_8; void*x_1_1_9; void*x_1_1_10; void*x_1_1_11; void*x_1_1_12; void*x_1_1_13; void*x_1_1_14; void*x_1_1_15; void*x_1_1_16; void*x_1_1_17; void*x_1_1_18; void*x_1_1_19; void*x_1_1_20; void*x_1_1_21; void*x_1_1_22; void*x_1_1_23; void*x_1_1_24; void*x_1_1_25; void*x_1_1_26; void*x_1_1_27; void*x_1_1_28; void*x_1_1_29; void*x_1_1_30; void*x_1_1_31; void*x_1_1_32; void*x_1_1_33; void*x_1_1_34; void*x_1_1_35; } x1; void*x2[35]; })arg1;
- (id)starVerticesBuffer;
- (id)starfieldIndicesBuffer;
- (id)starfieldVerticesBuffer;
- (id)textureGroupWithSuffix:(id)arg1;

@end
