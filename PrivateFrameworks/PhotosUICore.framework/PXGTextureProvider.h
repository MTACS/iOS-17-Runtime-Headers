
@interface PXGTextureProvider : NSObject <PXImageDataSpecRegistration> {
    bool  _allowLargerImagesDuringScrollingInLowMemoryMode;
    bool  _canDeliverThumbnailData;
    <PXGTextureProviderDelegate> * _delegate;
    struct { unsigned long long x1; struct __CFString {} *x2; unsigned short x3; unsigned short x4; } * _imageDataSpecs;
    long long  _imageDataSpecsCapacity;
    long long  _imageDataSpecsCount;
    struct { 
        long long scrollRegime; 
        bool isAnimatingScroll; 
        bool isScrubbing; 
        bool isAnimatingContent; 
        unsigned long long contentChangeTrend; 
        bool isViewBoundsChanging; 
        bool isInitialLoad; 
        bool isVisible; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } targetRect; 
    }  _interactionState;
    struct { 
        unsigned long long pixelFormat; 
        struct __CFString {} *colorSpaceName; 
        unsigned short width; 
        unsigned short height; 
    }  _lastImageDataSpec;
    long long  _lastImageDataSpecIndex;
    NSObject<OS_dispatch_queue> * _layoutQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lookupLock;
    NSMutableIndexSet * _lookupLock_activeRequests;
    bool  _lowMemoryMode;
    bool  _preferBGRA;
    bool  _preferMipmaps;
    unsigned long long  _preferredColorSpaceName;
    NSObject<OS_dispatch_queue> * _processingQueue;
    NSIndexSet * _requestIDsInTargetRect;
    NSMutableIndexSet * _requestIDsPendingCancellation;
    NSObject<OS_dispatch_queue> * _requestQueue;
    void ** _textureAtlasManagers;
    PXGViewEnvironment * _viewEnvironment;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) bool allowLargerImagesDuringScrollingInLowMemoryMode;
@property (nonatomic) bool canDeliverThumbnailData;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXGTextureProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct { long long x1; bool x2; bool x3; bool x4; unsigned long long x5; bool x6; bool x7; bool x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; } interactionState;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *layoutQueue;
@property (nonatomic) bool lowMemoryMode;
@property (nonatomic) bool preferBGRA;
@property (nonatomic) bool preferMipmaps;
@property (nonatomic) unsigned long long preferredColorSpaceName;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *processingQueue;
@property (nonatomic, copy) NSIndexSet *requestIDsInTargetRect;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *requestQueue;
@property (readonly) Class superclass;
@property (nonatomic, retain) PXGViewEnvironment *viewEnvironment;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (bool)allowLargerImagesDuringScrollingInLowMemoryMode;
- (bool)canDeliverThumbnailData;
- (void)cancelTextureRequestDeferred:(int)arg1;
- (void)cancelTextureRequests:(id)arg1;
- (void)clearTextureAtlasManagerCache;
- (void)dealloc;
- (id)delegate;
- (void)didFinishRequestingTextures;
- (struct { unsigned long long x1; struct __CFString {} *x2; unsigned short x3; unsigned short x4; })imageDataSpecAtIndex:(long long)arg1;
- (id)init;
- (struct { long long x1; bool x2; bool x3; bool x4; unsigned long long x5; bool x6; bool x7; bool x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; })interactionState;
- (void)interactionStateDidChange:(struct { long long x1; bool x2; bool x3; bool x4; unsigned long long x5; bool x6; bool x7; bool x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; })arg1;
- (bool)isRequestActive:(int)arg1;
- (id)layoutQueue;
- (bool)lowMemoryMode;
- (void)lowMemoryModeDidChange;
- (void)performDeferredCancellations;
- (bool)preferBGRA;
- (bool)preferMipmaps;
- (unsigned long long)preferredColorSpaceName;
- (void)prepareImageDataSpecs;
- (id)processingQueue;
- (void)provideCGImage:(struct CGImage { }*)arg1 forRequestID:(int)arg2;
- (void)provideCGImage:(struct CGImage { }*)arg1 options:(struct { bool x1; float x2; bool x3; })arg2 adjustment:(id)arg3 forRequestID:(int)arg4;
- (void)provideCGImage:(struct CGImage { }*)arg1 options:(struct { bool x1; float x2; bool x3; })arg2 adjustment:(id)arg3 isDegraded:(bool)arg4 forRequestID:(int)arg5;
- (void)provideCGImage:(struct CGImage { }*)arg1 options:(struct { bool x1; float x2; bool x3; })arg2 forRequestID:(int)arg3;
- (void)provideCGImage:(struct CGImage { }*)arg1 options:(struct { bool x1; float x2; bool x3; })arg2 isDegraded:(bool)arg3 forRequestID:(int)arg4;
- (void)provideFailureWithError:(id)arg1 forRequestID:(int)arg2;
- (void)provideImageData:(id)arg1 withSpecAtIndex:(long long)arg2 size:(struct CGSize { double x1; double x2; })arg3 bytesPerRow:(unsigned long long)arg4 contentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 forRequestID:(int)arg6;
- (void)provideNothingForRequestID:(int)arg1;
- (void)providePayload:(id)arg1 forRequestID:(int)arg2;
- (void)providePixelBuffer:(struct __CVBuffer { }*)arg1 options:(struct { bool x1; float x2; bool x3; })arg2 adjustment:(id)arg3 forRequestID:(int)arg4;
- (void)providePixelBuffer:(struct __CVBuffer { }*)arg1 options:(struct { bool x1; float x2; bool x3; })arg2 forRequestID:(int)arg3;
- (long long)registerImageDataSpec:(struct { unsigned long long x1; struct __CFString {} *x2; unsigned short x3; unsigned short x4; })arg1;
- (void)registerImageDataSpecs:(id)arg1;
- (void)releaseCachedResources;
- (id)requestIDsInTargetRect;
- (id)requestQueue;
- (long long)requestQueue_indexForImageDataSpec:(struct { unsigned long long x1; struct __CFString {} *x2; unsigned short x3; unsigned short x4; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1 geometries:(struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; }*)arg2 styles:(struct { float x1; struct { union { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; } x_1_2_1; float x_1_2_2[4]; } x_2_1_1; } x2; float x3; float x4; float x5; float x6; unsigned short x7; unsigned char x8; float x9; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_10_1_1[4]; } x10; }*)arg3 infos:(struct { unsigned char x1; unsigned char x2; float x3; long long x4; unsigned short x5; unsigned char x6; }*)arg4 inLayout:(id)arg5;
- (void)requestUpdatedTexturesForDisplayLink:(id)arg1;
- (void)setAllowLargerImagesDuringScrollingInLowMemoryMode:(bool)arg1;
- (void)setCanDeliverThumbnailData:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInteractionState:(struct { long long x1; bool x2; bool x3; bool x4; unsigned long long x5; bool x6; bool x7; bool x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; })arg1;
- (void)setLayoutQueue:(id)arg1;
- (void)setLowMemoryMode:(bool)arg1;
- (void)setNeedsRegisterToDisplayLinkUpdates;
- (void)setNeedsUnregisterFromDisplayLinkUpdates;
- (void)setPreferBGRA:(bool)arg1;
- (void)setPreferMipmaps:(bool)arg1;
- (void)setPreferredColorSpaceName:(unsigned long long)arg1;
- (void)setProcessingQueue:(id)arg1;
- (void)setRequestIDsInTargetRect:(id)arg1;
- (void)setRequestQueue:(id)arg1;
- (void)setTextureAtlasManager:(id)arg1 atSpecIndex:(long long)arg2;
- (void)setViewEnvironment:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)textureAtlasManagerAtSpecIndex:(long long)arg1;
- (id)viewEnvironment;
- (void)viewEnvironmentDidChange:(id)arg1;
- (id)workQueue;

@end
