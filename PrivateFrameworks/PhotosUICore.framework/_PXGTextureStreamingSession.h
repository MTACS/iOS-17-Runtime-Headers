
@interface _PXGTextureStreamingSession : NSObject {
    <PXGDisplayAssetAdjustment> * _displayAdjustment;
    <PXDisplayAsset> * _displayAsset;
    NSDate * _firstPixelBufferDisplayDate;
    struct __CVPixelBufferPool { } * _pixelBufferPool;
    <PXGDisplayAssetPixelBufferSource> * _pixelBufferSource;
    <PXGDisplayAssetPixelBufferSourcesProvider> * _pixelBufferSourcesProvider;
    PXGDisplayAssetVideoPresentationController * _presentationController;
    NSMutableIndexSet * _textureRequestIDs;
}

@property (nonatomic, readonly) <PXGDisplayAssetAdjustment> *displayAdjustment;
@property (nonatomic, readonly) <PXDisplayAsset> *displayAsset;
@property (nonatomic, copy) NSDate *firstPixelBufferDisplayDate;
@property (nonatomic) struct __CVPixelBufferPool { }*pixelBufferPool;
@property (nonatomic, readonly) <PXGDisplayAssetPixelBufferSource> *pixelBufferSource;
@property (nonatomic, retain) <PXGDisplayAssetPixelBufferSourcesProvider> *pixelBufferSourcesProvider;
@property (nonatomic, readonly) PXGDisplayAssetVideoPresentationController *presentationController;
@property (nonatomic, readonly, copy) NSIndexSet *textureRequestIDs;

- (void).cxx_destruct;
- (void)addTextureRequestID:(int)arg1;
- (void)dealloc;
- (id)displayAdjustment;
- (id)displayAsset;
- (id)firstPixelBufferDisplayDate;
- (id)initWithDisplayAsset:(id)arg1 presentationController:(id)arg2 pixelBufferSource:(id)arg3 pixelBufferSourcesProvider:(id)arg4 adjustment:(id)arg5;
- (struct __CVPixelBufferPool { }*)pixelBufferPool;
- (id)pixelBufferSource;
- (id)pixelBufferSourcesProvider;
- (id)presentationController;
- (void)removeTextureRequestID:(int)arg1;
- (void)removeTextureRequestIDs:(id)arg1;
- (void)setFirstPixelBufferDisplayDate:(id)arg1;
- (void)setPixelBufferPool:(struct __CVPixelBufferPool { }*)arg1;
- (void)setPixelBufferSourcesProvider:(id)arg1;
- (id)textureRequestIDs;

@end
