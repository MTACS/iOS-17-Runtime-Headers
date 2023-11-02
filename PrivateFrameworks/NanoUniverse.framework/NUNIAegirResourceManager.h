
@interface NUNIAegirResourceManager : NSObject <CLKUIResourceProviderDelegate> {
    unsigned long long  _clients;
    _TtC12NanoUniverse22AegirCloudCoverService * _cloudsService;
    <MTLDevice> * _device;
    unsigned long long  _displayPixelFormat;
    <MTLLibrary> * _library;
    MTLFunctionConstantValues * _pipelineConstants;
    <MTLRenderPipelineState> * _pipelineStateDisplay;
    <MTLRenderPipelineState> * _pipelineStateLocationDot;
    <MTLRenderPipelineState> * _pipelineStatePost;
    <MTLRenderPipelineState> * _pipelineStateSpheroids;
    <MTLRenderPipelineState> * _pipelineStateStar;
    <MTLRenderPipelineState> * _pipelineStateStarfield;
    <MTLRenderPipelineState> * _pipelineStateThreshold;
    <MTLBuffer> * _rectVerticesBuffer;
    CLKUIResourceProviderKey * _resourceProviderKey;
    <MTLBuffer> * _starVerticesBuffer;
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
- (id)_generatePipelineVshName:(id)arg1 fshName:(id)arg2 config:(unsigned long long)arg3 blend0:(unsigned long long)arg4 blend1:(unsigned long long)arg5 pixelFormat0:(unsigned long long)arg6 pixelFormat1:(unsigned long long)arg7;
- (void)_handleCloudCoverTextureExpired;
- (void)_loadGeometry;
- (id)_provideEarthCloudsAtlasBacking:(id)arg1;
- (void)addClient;
- (id)cloudsService;
- (void)dealloc;
- (id)initWithDisplayPixelFormat:(unsigned long long)arg1;
- (id)provideAtlasBacking:(id)arg1;
- (void)purgeAllCloudCoverTextures;
- (id)rectVerticesBuffer;
- (void)removeClient;
- (id)renderDisplayPipeline;
- (id)renderOffscreenPipelineForLocationDot;
- (id)renderOffscreenPipelineForPost;
- (id)renderOffscreenPipelineForSpheroid:(unsigned long long)arg1 config:(unsigned long long)arg2;
- (id)renderOffscreenPipelineForStar;
- (id)renderOffscreenPipelineForStarfield;
- (id)renderOffscreenPipelineForThreshold;
- (id)resourceProviderKey;
- (void)setPipelineConstants:(struct NUNIAegirPipelineConstants { /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*x1; void*x2; void*x3; void*x4; void*x5; void*x6; void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; void*x27; void*x28; void*x29; void*x30; void*x31; void*x32; void*x33; void*x34; void*x35; })arg1;
- (id)starVerticesBuffer;
- (id)textureGroupWithSuffix:(id)arg1;

@end
