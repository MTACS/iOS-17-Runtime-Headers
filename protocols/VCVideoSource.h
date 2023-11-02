
@protocol VCVideoSource <NSObject>

@required

- (bool)cameraSupportsFormatWidth:(int)arg1 height:(int)arg2;
- (int)configureCaptureWithToken:(struct _VCVideoSourceToken { union { struct { unsigned int x_1_2_1 : 24; unsigned int x_1_2_2 : 8; } x_1_1_1; unsigned int x_1_1_2; } x1; })arg1;
- (int)copyColorInfo:(const struct __CFDictionary {}**)arg1;
- (int)frameBecameAvailableCount:(int*)arg1 figBufferQueueEmptyCount:(int*)arg2 figBufferQueueErrorCount:(int*)arg3;
- (int)frameCount:(bool)arg1;
- (int)getFrameRate;
- (bool)isFrontCamera;
- (bool)isPortraitResolutionCaptureActive;
- (bool)isPreviewRunning;
- (int)setFrameRate:(int)arg1;
- (int)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (int)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (int)startPreview;
- (int)stop:(bool)arg1;

@optional

- (void)addStickerWithURL:(NSURL *)arg1 atPosition:(struct CGPoint { double x1; double x2; })arg2 identifier:(NSString *)arg3;
- (int)frameDropsWithShouldReset:(bool)arg1;
- (void)getReportingStats:(struct __CFDictionary { }*)arg1;
- (bool)isInternalCamera;
- (bool)setAnimoji:(NSString *)arg1;
- (void)setBufferStatsBuffer:(struct tagVCVideoBufferStatistics { int x1; int x2; bool x3; double x4; double x5; double x6; double x7; double x8; }*)arg1;
- (void)setCameraZoomFactor:(double)arg1;
- (void)setCameraZoomFactor:(double)arg1 withRate:(double)arg2;
- (void)setCinematicFramingEnabled:(bool)arg1;
- (bool)setMemoji:(NSData *)arg1;
- (void)setOrientation:(int)arg1;
- (void)setViewPointCorrectionEnabled:(bool)arg1;
- (int)startScreenCapture;
- (int)stopScreenCapture;
- (bool)supportsPortraitResolution;
- (int)updateScreenCapture:(NSDictionary *)arg1;

@end
