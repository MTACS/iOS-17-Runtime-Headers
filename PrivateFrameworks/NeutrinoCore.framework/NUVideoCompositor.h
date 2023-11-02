
@interface NUVideoCompositor : NSObject <AVVideoCompositing> {
    NSMutableSet * _pendingRequests;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _pendingRequestsLock;
    NSObject<OS_dispatch_queue> * _renderingQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _renderingQueueInitializeLock;
    _Atomic unsigned long long  _requestCounter;
}

@property (nonatomic, readonly) bool canConformColorOfSourceFrames;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property (nonatomic, readonly) NSDictionary *sourcePixelBufferAttributes;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsHDRSourceFrames;
@property (nonatomic, readonly) bool supportsWideColorSourceFrames;

- (void).cxx_destruct;
- (bool)canConformColorOfSourceFrames;
- (void)cancelAllPendingVideoCompositionRequests;
- (void)failVideoCompositionRequest:(id)arg1 error:(id)arg2;
- (void)finishCompositionRequest:(id)arg1 withComposedVideoFrame:(struct __CVBuffer { }*)arg2;
- (void)fulfillVideoCompositionRequest:(id)arg1;
- (id)hdrPixelFormats:(long long)arg1;
- (id)init;
- (void)renderContextChanged:(id)arg1;
- (id)requiredPixelBufferAttributesForRenderContext;
- (void)setColorSpaceOfDestinationBuffer:(struct __CVBuffer { }*)arg1 fromPrimarySourceBufferOfRequest:(id)arg2;
- (id)sourcePixelBufferAttributes;
- (id)standardPixelFormats:(long long)arg1;
- (void)startVideoCompositionRequest:(id)arg1;
- (bool)supportsHDRSourceFrames;
- (bool)supportsWideColorSourceFrames;
- (bool)testAndSetVideoCompositionRequestFinished:(id)arg1;
- (id)videoFramesFromRequest:(id)arg1;
- (id)videoMetadataSamplesFromRequest:(id)arg1;

@end
