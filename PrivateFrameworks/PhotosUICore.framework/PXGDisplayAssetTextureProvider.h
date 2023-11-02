
@interface PXGDisplayAssetTextureProvider : PXGTextureProvider <PXGImageRequestPerformer> {
    NSObject<OS_dispatch_queue> * _cancelationQueue;
    NSMutableDictionary * _cancelationQueue_deferredMediaRequestIDByTextureID;
    NSMutableDictionary * _cancelationQueue_mediaRequestIDByTextureID;
    struct CGImage { } * _darkPlaceholderImage;
    PXMediaProvider * _defaultMediaProvider;
    double  _displayLinkLastTargetTimestamp;
    NSObject<OS_dispatch_queue> * _drawingQueue;
    PXGAssetImageCache * _imageCache;
    bool  _isLowSpec;
    struct CGSize { 
        double width; 
        double height; 
    }  _largestImageDataSpecSize;
    struct CGImage { } * _lightPlaceholderImage;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lookupLock;
    NSMutableIndexSet * _lookupLock_requestIDsWithDeliveredPlaceholders;
    NSMutableIndexSet * _lookupLock_requestIDsWithDeliveredThumbnails;
    NSArray * _requestOptions;
    PXGThumbnailRequestQueue * _requestQueue_thumbnailRequestQueue;
    struct CGImage { } * _transparentPlaceholderImage;
    bool  _videoRequestsAllowed;
    NSObject<OS_dispatch_queue> * _videoSessionsRequestQueue;
    CIContext * _workQueue_crossfadeRenderContext;
    NSMutableDictionary * _workQueue_deferredImageRequestBlocksByTextureID;
    PXGImageRequestQueue * _workQueue_imageRequestQueue;
    NSMutableIndexSet * _workQueue_textureRequestIDsThatCannotBeSatisfiedWithThumbnails;
    NSMutableIndexSet * _workQueue_textureRequestIDsWithDeliveredVideoFrames;
    NSMutableDictionary * _workQueue_textureStreamingSessionsMap;
    PXGThumbnailRequestQueue * _workQueue_thumbnailRequestQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) PXMediaProvider *defaultMediaProvider;
@property (readonly, copy) NSString *description;
@property double displayLinkLastTargetTimestamp;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGImage { }*placeholderImage;
@property (readonly) Class superclass;
@property (nonatomic) bool videoRequestsAllowed;

+ (id /* block */)defaultMediaVersionHandlerWithDataSourceBeforeChanges:(id)arg1 dataSourceAfterChanges:(id)arg2;

- (void).cxx_destruct;
- (void)_cancelationQueue_cancelImageRequests:(id)arg1;
- (struct { bool x1; float x2; bool x3; })_defaultStillImageTextureProcessingOptionsForAsset:(id)arg1 orientation:(unsigned int)arg2 applyCleanAperture:(bool)arg3;
- (void)_handlePixelBufferChangedForTextureStreamingSession:(id)arg1;
- (void)_handleProvidePlaceholderForTextureRequestID:(int)arg1;
- (bool)_hasDeliveredThumbnailForTextureRequestID:(int)arg1;
- (bool)_imageSizeSatisfiedByThumbnail:(struct CGSize { double x1; double x2; })arg1;
- (bool)_noteThumbnailAsDeliveredForRequestID:(int)arg1;
- (void)_processThumbnailRequestsOnRequestQueue:(bool)arg1;
- (void)_providePlaceholdersForRequestIDs:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 placeholderStyle:(unsigned long long)arg2;
- (id)_requestOptionsForUseCase:(unsigned long long)arg1 forDrawing:(bool)arg2 intent:(unsigned long long)arg3 useLowMemoryDecode:(bool)arg4;
- (void)_requestQueue_handleThumbnailData:(id)arg1 spec:(struct PXMediaProviderThumbnailDataSpec { struct PXMediaProviderThumbnailDataFormat { unsigned long long x_1_1_1; struct __CFString {} *x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; bool x_1_1_5; } x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; })arg2 forTextureRequestID:(int)arg3;
- (void)_requestQueue_requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1 observer:(id)arg2 textureRequestIDs:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 displayAssetFetchResult:(id)arg4 presentationStyles:(unsigned long long)arg5 targetSize:(struct CGSize { double x1; double x2; })arg6 screenScale:(double)arg7 adjustment:(id)arg8 intent:(unsigned long long)arg9 cannotBeSatisfiedWithThumbnail:(bool)arg10 useLowMemoryDecode:(bool)arg11 applyCleanApertureCrop:(bool)arg12 mediaProvider:(id)arg13;
- (void)_setupRequestOptions;
- (void)_workQueue_cancelTextureRequests:(id)arg1;
- (void)_workQueue_cleanupTextureStreamingSession:(id)arg1 textureRequestIDs:(id)arg2;
- (void)_workQueue_didDeliverVideoContentForRequestID:(int)arg1;
- (void)_workQueue_handleCGImageResult:(struct CGImage { }*)arg1 orientation:(unsigned int)arg2 forAsset:(id)arg3 info:(id)arg4 targetSize:(struct CGSize { double x1; double x2; })arg5 adjustment:(id)arg6 shouldCache:(bool)arg7 textureRequestID:(int)arg8 sharedState:(id)arg9;
- (void)_workQueue_handleResult:(struct CGImage { }*)arg1 orientation:(long long)arg2 info:(id)arg3 targetSize:(struct CGSize { double x1; double x2; })arg4 screenScale:(double)arg5 mediaRequest:(id)arg6 textureRequestID:(int)arg7 sharedState:(id)arg8;
- (void)_workQueue_performDeferredImageRequest:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5 textureRequestID:(int)arg6 mediaProvider:(id)arg7;
- (void)_workQueue_performRequestForDisplayAsset:(id)arg1 textureRequestID:(int)arg2 sharedState:(id)arg3;
- (void)_workQueue_processDeferredImageRequests;
- (void)_workQueue_processImageRequestsWithAllowedIDs:(id)arg1;
- (void)_workQueue_provideCGImage:(struct CGImage { }*)arg1 options:(struct { bool x1; float x2; bool x3; })arg2 adjustment:(id)arg3 isDegraded:(bool)arg4 forRequestID:(int)arg5;
- (void)_workQueue_provideVideoFrameForTextureStreamingSession:(id)arg1;
- (struct __CVBuffer { }*)_workQueue_renderCrossfadeIfNeededWithPixelBuffer:(struct __CVBuffer { }*)arg1 forVideoSession:(id)arg2 textureRequestID:(id)arg3;
- (void)_workQueue_requestVideoTexturesForSpriteAtIndex:(unsigned int)arg1 spriteReference:(id)arg2 displayAsset:(id)arg3 presentationController:(id)arg4 adjustment:(id)arg5 presentationType:(unsigned char)arg6 textureRequestID:(int)arg7 mediaProvider:(id)arg8 pixelBufferSourcesProvider:(id)arg9;
- (void)_workQueue_startRequestingVideoTexturesForDisplayAsset:(id)arg1 presentationController:(id)arg2 pixelBufferSource:(id)arg3 pixelBufferSourcesProvider:(id)arg4 adjustment:(id)arg5 textureRequestID:(int)arg6;
- (void)_workQueue_updateTextureStreamingVisibility:(bool)arg1;
- (void)cancelTextureRequests:(id)arg1;
- (void)dealloc;
- (id)defaultMediaProvider;
- (void)didFinishRequestingTextures;
- (double)displayLinkLastTargetTimestamp;
- (id)init;
- (id)initWithDefaultMediaProvider:(id)arg1 layoutQueue:(id)arg2;
- (void)interactionStateDidChange:(struct { long long x1; bool x2; bool x3; bool x4; unsigned long long x5; bool x6; bool x7; bool x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; })arg1;
- (void)performRequestForSpriteIndex:(unsigned int)arg1 textureRequestID:(int)arg2 sharedState:(id)arg3;
- (struct CGImage { }*)placeholderImage;
- (void)registerImageDataSpecs:(id)arg1;
- (void)releaseCachedResources;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1 geometries:(struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; }*)arg2 styles:(struct { float x1; struct { union { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; } x_1_2_1; float x_1_2_2[4]; } x_2_1_1; } x2; float x3; float x4; float x5; float x6; unsigned short x7; unsigned char x8; float x9; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_10_1_1[4]; } x10; }*)arg3 infos:(struct { unsigned char x1; unsigned char x2; float x3; long long x4; unsigned short x5; unsigned char x6; }*)arg4 inLayout:(id)arg5;
- (void)setDisplayLinkLastTargetTimestamp:(double)arg1;
- (void)setPreferBGRA:(bool)arg1;
- (void)setVideoRequestsAllowed:(bool)arg1;
- (bool)videoRequestsAllowed;
- (void)viewEnvironmentDidChange:(id)arg1;

@end
