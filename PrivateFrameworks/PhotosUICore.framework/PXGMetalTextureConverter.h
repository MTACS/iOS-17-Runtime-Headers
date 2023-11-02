
@interface PXGMetalTextureConverter : NSObject <PXGTextureConverter> {
    PXGColorProgramLibrary * _colorProgramLibrary;
    <PXGMetalTextureConverterDelegate> * _delegate;
    struct CGColorSpace { } * _destinationColorSpace;
    unsigned long long  _destinationColorSpaceName;
    NSMutableSet * _failedPixelFormats;
    bool  _hasExtendedColorTarget;
    NSObject<OS_dispatch_queue> * _layoutQueue;
    bool  _lowMemoryMode;
    PXGMetalRenderContext * _metalRenderContext;
    NSObject<OS_dispatch_queue> * _processingQueue;
    CIContext * _renderContext;
    PXGMetalTextureCache * _renderTextureCache;
    NSObject<OS_dispatch_queue> * _requestQueue;
    long long  _screenPixelCount;
    PXGImageTexture * _transparentTexture;
    struct __CVMetalTextureCache { } * _videoTextureCache;
}

@property (nonatomic, readonly) PXGColorProgramLibrary *colorProgramLibrary;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXGMetalTextureConverterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGColorSpace { }*destinationColorSpace;
@property (nonatomic, readonly) unsigned long long destinationColorSpaceName;
@property (nonatomic, readonly) bool hasExtendedColorTarget;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *layoutQueue;
@property (nonatomic) bool lowMemoryMode;
@property (nonatomic, readonly) PXGMetalRenderContext *metalRenderContext;
@property (nonatomic, readonly) unsigned char presentationType;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *processingQueue;
@property (nonatomic, readonly) CIContext *renderContext;
@property (nonatomic, readonly) PXGMetalTextureCache *renderTextureCache;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *requestQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long supportedContentTypes;
@property (nonatomic, readonly) PXGImageTexture *transparentTexture;
@property (nonatomic, readonly) struct __CVMetalTextureCache { }*videoTextureCache;

- (void).cxx_destruct;
- (id)_applyAdjustment:(id)arg1 toMetalTexture:(id)arg2 options:(struct { unsigned int x1; bool x2; })arg3;
- (id)_createTextureFromCIImage:(id)arg1 source:(id)arg2 options:(struct { unsigned int x1; bool x2; })arg3;
- (id)_createTransparentTexture;
- (id)_generateMipmapsForMetalTexture:(id)arg1;
- (id)applyAdjustment:(id)arg1 toTexture:(id)arg2 options:(struct { unsigned int x1; bool x2; })arg3;
- (id)colorProgramLibrary;
- (id)createAtlasForTextureAtlasManager:(id)arg1;
- (id)createPayloadTextureFromPayload:(id)arg1;
- (id)createTextureAtlasManagerForImageDataSpec:(struct { unsigned long long x1; struct __CFString {} *x2; unsigned short x3; unsigned short x4; })arg1 mipmapped:(bool)arg2;
- (id)createTextureFromCGImage:(void *)arg1 transform:(void *)arg2 alpha:(void *)arg3 options:(void *)arg4; // needs 4 arg types, found 3: struct CGImage { }*, float, struct { unsigned int x1; bool x2; }
- (id)createTextureFromCVPixelBuffer:(void *)arg1 transform:(void *)arg2 alpha:(void *)arg3 options:(void *)arg4 error:(void *)arg5; // needs 5 arg types, found 4: struct __CVBuffer { }*, float, struct { unsigned int x1; bool x2; }, id*
- (void)dealloc;
- (id)delegate;
- (struct CGColorSpace { }*)destinationColorSpace;
- (unsigned long long)destinationColorSpaceName;
- (bool)hasExtendedColorTarget;
- (id)init;
- (id)initWithContext:(id)arg1 destinationColorspaceName:(unsigned long long)arg2 layoutQueue:(id)arg3;
- (id)layoutQueue;
- (bool)lowMemoryMode;
- (id)metalRenderContext;
- (unsigned char)presentationType;
- (id)processingQueue;
- (id)renderContext;
- (id)renderTextureCache;
- (id)requestQueue;
- (void)setDelegate:(id)arg1;
- (void)setLowMemoryMode:(bool)arg1;
- (void)setProcessingQueue:(id)arg1;
- (void)setRequestQueue:(id)arg1;
- (unsigned long long)supportedContentTypes;
- (id)transparentTexture;
- (struct __CVMetalTextureCache { }*)videoTextureCache;

@end
