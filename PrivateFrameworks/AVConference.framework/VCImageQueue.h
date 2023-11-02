
@interface VCImageQueue : NSObject <VCStreamOutputSource> {
    CAContext * _caContext;
    CALayer * _caLayer;
    struct _CAImageQueue { } * _caQueue;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentsRect;
    unsigned int  _contextId;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _enqueueLock;
    unsigned int  _enqueuedFrameCount;
    struct OpaqueFigImageQueue { } * _figQueue;
    _Atomic int  _frameCount;
    struct __CFArray { } * _frameCountHistory;
    unsigned int  _frameRate;
    bool  _imageQueueProtected;
    bool  _isLocalVideo;
    bool  _isLowLatencyEnabled;
    unsigned int  _layerHostSlot;
    VCPixelBufferOverlay * _pixelBufferOverlay;
    unsigned int  _slot;
    NSObject<OS_dispatch_queue> * _stateQueue;
    struct __CFDictionary { } * _storedAttributes;
    VCStreamOutput * _streamOutput;
    struct __CFAllocator { } * _streamOutputAllocator;
    long long  _streamToken;
    struct CATransform3D { 
        double m11; 
        double m12; 
        double m13; 
        double m14; 
        double m21; 
        double m22; 
        double m23; 
        double m24; 
        double m31; 
        double m32; 
        double m33; 
        double m34; 
        double m41; 
        double m42; 
        double m43; 
        double m44; 
    }  _transform;
    bool  _usingRemoteQueue;
    bool  _waitForLayoutChange;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    }  _waitForLayoutChangeCondition;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property unsigned int frameRate;
@property (readonly) unsigned long long hash;
@property bool imageQueueProtected;
@property bool isLocalVideo;
@property (getter=isLowLatencyEnabled, nonatomic) bool lowLatencyEnabled;
@property (retain) VCStreamOutput *streamOutput;
@property long long streamToken;
@property (readonly) Class superclass;
@property (readonly) bool usingRemoteQueue;

+ (id)drawingContext;

- (void)cleanupCAContextAndCALayer;
- (void)configureCALayerWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 name:(id)arg2;
- (bool)createAllocators;
- (void)createAndCopyLatencyStatsDictionary:(const struct __CFDictionary {}**)arg1;
- (void)createAndCopyPerformanceDictionary:(const struct __CFDictionary {}**)arg1;
- (unsigned int)createCAContextWithSize:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)description;
- (int)frameCount;
- (unsigned int)frameRate;
- (void)getQueueRepresentation:(void*)arg1;
- (bool)imageQueueProtected;
- (id)initWithFrameRate:(unsigned char)arg1;
- (id)initWithFrameRate:(unsigned char)arg1 imageQueueProtected:(bool)arg2;
- (bool)isLocalVideo;
- (bool)isLowLatencyEnabled;
- (void)pause;
- (void)releaseAllocators;
- (void)releaseCAContext;
- (void)resetFrameCount;
- (void)resetSlotForCALayerHostModeSwitch;
- (void)setFrameRate:(unsigned int)arg1;
- (void)setImageQueueProtected:(bool)arg1;
- (void)setIsLocalVideo:(bool)arg1;
- (void)setLowLatencyEnabled:(bool)arg1;
- (void)setStreamOutput:(id)arg1;
- (void)setStreamToken:(long long)arg1;
- (unsigned int)setVideoDestination:(id)arg1;
- (void)start;
- (void)stop;
- (id)streamOutput;
- (long long)streamToken;
- (bool)usingRemoteQueue;

@end
