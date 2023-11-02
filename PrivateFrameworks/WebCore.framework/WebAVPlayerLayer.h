
@interface WebAVPlayerLayer : CALayer {
    struct ThreadSafeWeakPtr<WebCore::VideoFullscreenModel> { 
        struct RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits> { 
            struct ThreadSafeWeakPtrControlBlock {} *m_ptr; 
        } m_controlBlock; 
        struct VideoFullscreenModel {} *m_objectOfCorrectType; 
    }  _fullscreenModel;
    struct unique_ptr<WebCore::WebAVPlayerLayerFullscreenModelClient, std::default_delete<WebCore::WebAVPlayerLayerFullscreenModelClient>> { 
        struct __compressed_pair<WebCore::WebAVPlayerLayerFullscreenModelClient *, std::default_delete<WebCore::WebAVPlayerLayerFullscreenModelClient>> { 
            struct WebAVPlayerLayerFullscreenModelClient {} *__value_; 
        } __ptr_; 
    }  _fullscreenModelClient;
    const void * _logIdentifier;
    NSDictionary * _pixelBufferAttributes;
    struct RetainPtr<WebAVPlayerController> { 
        void *m_ptr; 
    }  _playerController;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _previousVideoGravity;
    bool  _readyForDisplay;
    struct FloatRect { 
        struct FloatPoint { 
            float m_x; 
            float m_y; 
        } m_location; 
        struct FloatSize { 
            float m_width; 
            float m_height; 
        } m_size; 
    }  _targetVideoFrame;
    struct CGSize { 
        double width; 
        double height; 
    }  _videoDimensions;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _videoGravity;
    struct RetainPtr<CALayer> { 
        void *m_ptr; 
    }  _videoSublayer;
}

@property (nonatomic) void*fullscreenModel;
@property (nonatomic, readonly) struct { unsigned char x1; char *x2; unsigned char x3; char *x4; id x5; }*logChannel;
@property (nonatomic, readonly) const void*logIdentifier;
@property (nonatomic, readonly) const void*loggerPtr;
@property (nonatomic, copy) NSDictionary *pixelBufferAttributes;
@property (nonatomic, retain) AVPlayerController *playerController;
@property (getter=isReadyForDisplay, nonatomic) bool readyForDisplay;
@property struct CGSize { double x1; double x2; } videoDimensions;
@property (nonatomic, retain) NSString *videoGravity;
@property (nonatomic, retain) CALayer *videoSublayer;

+ (id)keyPathsForValuesAffectingVideoRect;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct FloatRect { struct FloatPoint { float x_1_1_1; float x_1_1_2; } x1; struct FloatSize { float x_2_1_1; float x_2_1_2; } x2; })calculateTargetVideoFrame;
- (void)dealloc;
- (void*)fullscreenModel;
- (id)init;
- (bool)isReadyForDisplay;
- (void)layoutSublayers;
- (struct { unsigned char x1; char *x2; unsigned char x3; char *x4; id x5; }*)logChannel;
- (const void*)logIdentifier;
- (const void*)loggerPtr;
- (id)pixelBufferAttributes;
- (id)playerController;
- (void)resolveBounds;
- (void)setFullscreenModel:(void*)arg1;
- (void)setPixelBufferAttributes:(id)arg1;
- (void)setPlayerController:(id)arg1;
- (void)setReadyForDisplay:(bool)arg1;
- (void)setVideoDimensions:(struct CGSize { double x1; double x2; })arg1;
- (void)setVideoGravity:(id)arg1;
- (void)setVideoSublayer:(id)arg1;
- (struct CGSize { double x1; double x2; })videoDimensions;
- (id)videoGravity;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })videoRect;
- (id)videoSublayer;

@end
