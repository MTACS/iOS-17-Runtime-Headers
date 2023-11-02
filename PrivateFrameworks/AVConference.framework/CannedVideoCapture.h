
@interface CannedVideoCapture : VCVideoCapture <VCVideoSource> {
    NSObject<OS_dispatch_queue> * _captureSessionQueue;
    VCCannedVideoCaptureSource * _captureSource;
    struct CannedVideoCapturePrivate { struct _opaque_pthread_mutex_t { long long x_1_1_1; BOOL x_1_1_2[56]; } x1; struct _VCVideoSourceToken { union { struct { unsigned int x_1_3_1 : 24; unsigned int x_1_3_2 : 8; } x_1_2_1; unsigned int x_1_2_2; } x_2_1_1; } x2; int x3; bool x4; struct { bool x_5_1_1; bool x_5_1_2; int x_5_1_3; bool x_5_1_4; bool x_5_1_5; int x_5_1_6; unsigned char x_5_1_7; } x5; } * _pimpl;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (int)cannedVideoTypeForPath:(id)arg1;
+ (int)createPixelBufferPool:(struct __CVPixelBufferPool {}**)arg1 withWidth:(int)arg2 height:(int)arg3;

- (bool)cameraSupportsFormatWidth:(int)arg1 height:(int)arg2;
- (int)configureCaptureWithToken:(struct _VCVideoSourceToken { union { struct { unsigned int x_1_2_1 : 24; unsigned int x_1_2_2 : 8; } x_1_1_1; unsigned int x_1_1_2; } x1; })arg1;
- (int)copyColorInfo:(const struct __CFDictionary {}**)arg1;
- (void)dealloc;
- (int)frameBecameAvailableCount:(int*)arg1 figBufferQueueEmptyCount:(int*)arg2 figBufferQueueErrorCount:(int*)arg3;
- (int)frameCount:(bool)arg1;
- (int)getFrameRate;
- (id)initWithCaptureServer:(id)arg1 protocolFunctions:(const struct tagVCVideoCaptureServerProtocolRealtimeInstanceVTable { int (*x1)(); }*)arg2 width:(int)arg3 height:(int)arg4 frameRate:(int)arg5 videoSourceToken:(struct _VCVideoSourceToken { union { struct { unsigned int x_1_2_1 : 24; unsigned int x_1_2_2 : 8; } x_1_1_1; unsigned int x_1_1_2; } x1; })arg6 video:(id)arg7 isCamera:(bool)arg8 error:(int*)arg9;
- (bool)isFrontCamera;
- (bool)isPortraitResolutionCaptureActive;
- (bool)isPreviewRunning;
- (int)setFrameRate:(int)arg1;
- (void)setOrientation:(int)arg1;
- (int)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (int)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (int)startPreview;
- (int)stop:(bool)arg1;

@end
