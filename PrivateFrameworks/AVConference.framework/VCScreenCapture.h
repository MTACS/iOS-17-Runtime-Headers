
@interface VCScreenCapture : VCVideoCapture <VCScreenCaptureSourceDelegate, VCVideoSource> {
    struct opaqueCMSampleBuffer { } * _blackFrame;
    int  _captureFramerate;
    int  _captureHeight;
    bool  _capturePaused;
    long long  _captureSourceID;
    int  _captureWidth;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    }  _clearScreenChanged;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _clearScreenLock;
    struct _opaque_pthread_t { long long x1; struct __darwin_pthread_handler_rec {} *x2; BOOL x3[8176]; } * _clearScreenProc;
    unsigned int  _currentTransform;
    bool  _enableClearScreen;
    bool  _enableIdleFrameTimeAdjustments;
    bool  _forceMirroring;
    int  _frameCount;
    bool  _isCapturing;
    bool  _isClearScreenThreadRunning;
    bool  _isPreviewing;
    bool  _isPreviousCompleteFrameBlack;
    NSMutableDictionary * _options;
    struct opaqueCMSampleBuffer { } * _previousCompleteFrame;
    unsigned int  _previousCompleteFrameTransform;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _previousFrameTime;
    bool  _receivedFirstFrame;
    struct __CVPixelBufferPool { } * _resizeBufferPool;
    struct OpaqueVTPixelTransferSession { } * _resizeTransferSession;
    int  _resolutionScaling;
    struct __CVPixelBufferPool { } * _rotationBufferPool;
    struct OpaqueVTPixelRotationSession { } * _rotationSession;
    NSObject<VCScreenCaptureSource> * _screenCapture;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _screenCaptureLock;
    bool  _shouldClearScreen;
    bool  _shouldResize;
    bool  _shouldResizeInitialized;
    bool  _shouldValidateFrameTimingAfterIdle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isClearScreenThreadRunning;
@property (readonly) Class superclass;

- (int)_startCapture;
- (bool)cameraSupportsFormatWidth:(int)arg1 height:(int)arg2;
- (int)configureCaptureWithToken:(struct _VCVideoSourceToken { union { struct { unsigned int x_1_2_1 : 24; unsigned int x_1_2_2 : 8; } x_1_1_1; unsigned int x_1_1_2; } x1; })arg1;
- (int)copyColorInfo:(const struct __CFDictionary {}**)arg1;
- (void)dealloc;
- (int)frameBecameAvailableCount:(int*)arg1 figBufferQueueEmptyCount:(int*)arg2 figBufferQueueErrorCount:(int*)arg3;
- (int)frameCount:(bool)arg1;
- (int)getFrameRate;
- (id)initWithCaptureServer:(id)arg1 protocolFunctions:(const struct tagVCVideoCaptureServerProtocolRealtimeInstanceVTable { int (*x1)(); }*)arg2 sourceConfig:(id)arg3;
- (bool)isClearScreenThreadRunning;
- (bool)isFrontCamera;
- (bool)isPortraitResolutionCaptureActive;
- (bool)isPreviewRunning;
- (void)processAndSendIdleBlackFrame;
- (void)screenCaptureSourceProcessEventString:(id)arg1;
- (void)screenCaptureSourceShouldClearScreen:(bool)arg1;
- (int)setFrameRate:(int)arg1;
- (void)setPauseCapture:(bool)arg1;
- (int)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (void)shouldClearScreen:(bool)arg1;
- (int)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (void)startClearScreenProc;
- (int)startPreview;
- (int)startScreenCapture;
- (int)stop:(bool)arg1;
- (void)stopClearScreenProc;
- (int)stopScreenCapture;
- (int)updateScreenCapture:(id)arg1;

@end
