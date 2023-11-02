
@interface PXGViewTextureConverter : NSObject <PXGTextureConverter> {
    bool  _lowMemoryMode;
    NSObject<OS_dispatch_queue> * _processingQueue;
    NSObject<OS_dispatch_queue> * _requestQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool lowMemoryMode;
@property (nonatomic, readonly) unsigned char presentationType;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *processingQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *requestQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long supportedContentTypes;
@property (nonatomic, readonly) PXGImageTexture *transparentTexture;

- (void).cxx_destruct;
- (id)applyAdjustment:(id)arg1 toTexture:(id)arg2 options:(struct { unsigned int x1; bool x2; })arg3;
- (id)createAtlasForTextureAtlasManager:(id)arg1;
- (id)createPayloadTextureFromPayload:(id)arg1;
- (id)createTextureAtlasManagerForImageDataSpec:(struct { unsigned long long x1; struct __CFString {} *x2; unsigned short x3; unsigned short x4; })arg1 mipmapped:(bool)arg2;
- (id)createTextureFromCGImage:(void *)arg1 transform:(void *)arg2 alpha:(void *)arg3 options:(void *)arg4; // needs 4 arg types, found 3: struct CGImage { }*, float, struct { unsigned int x1; bool x2; }
- (id)createTextureFromCVPixelBuffer:(void *)arg1 transform:(void *)arg2 alpha:(void *)arg3 options:(void *)arg4 error:(void *)arg5; // needs 5 arg types, found 4: struct __CVBuffer { }*, float, struct { unsigned int x1; bool x2; }, id*
- (bool)lowMemoryMode;
- (unsigned char)presentationType;
- (id)processingQueue;
- (id)requestQueue;
- (void)setLowMemoryMode:(bool)arg1;
- (void)setProcessingQueue:(id)arg1;
- (void)setRequestQueue:(id)arg1;
- (unsigned long long)supportedContentTypes;
- (id)transparentTexture;

@end
