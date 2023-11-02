
@interface CFXOverlayPickerAnimatedPreviewWriter : NSObject {
    id /* block */  _completionBlock;
    unsigned long long  _currentFrameCount;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _currentRenderTime;
    NSString * _destinationPath;
    NSDictionary * _frameProperties;
    struct CGImageDestination { } * _imageDestination;
    bool  _isFirstAnimatedFrame;
    JFXOverlayEffect * _overlay;
    double  _previewDuration;
    unsigned long long  _previewFrameRate;
    JFXEffectsPreviewGenerator * _previewGenerator;
    struct CGSize { 
        double width; 
        double height; 
    }  _previewSizeInPixels;
    unsigned long long  _previewStartFrameIndex;
    unsigned long long  _targetFrameCount;
    NSObject<OS_dispatch_queue> * _writerQueue;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic) unsigned long long currentFrameCount;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } currentRenderTime;
@property (nonatomic, retain) NSString *destinationPath;
@property (nonatomic, retain) NSDictionary *frameProperties;
@property (nonatomic) bool isFirstAnimatedFrame;
@property (nonatomic, retain) JFXOverlayEffect *overlay;
@property (nonatomic) double previewDuration;
@property (nonatomic) unsigned long long previewFrameRate;
@property (nonatomic, retain) JFXEffectsPreviewGenerator *previewGenerator;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } previewSizeInPixels;
@property (nonatomic) unsigned long long previewStartFrameIndex;
@property (nonatomic) unsigned long long targetFrameCount;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *writerQueue;

- (void).cxx_destruct;
- (void)CFX_beginWriting;
- (void)CFX_finishWriting;
- (void)CFX_initializeEffectForPreviewing;
- (void)CFX_writeNextEffectFrame;
- (id /* block */)completionBlock;
- (unsigned long long)currentFrameCount;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentRenderTime;
- (id)destinationPath;
- (id)frameProperties;
- (id)initWithOverlayEffectId:(id)arg1 previewSizeInPixels:(struct CGSize { double x1; double x2; })arg2 previewDuration:(double)arg3 previewFrameRate:(unsigned long long)arg4 previewStartFrameIndex:(unsigned long long)arg5;
- (bool)isFirstAnimatedFrame;
- (id)overlay;
- (double)previewDuration;
- (unsigned long long)previewFrameRate;
- (id)previewGenerator;
- (struct CGSize { double x1; double x2; })previewSizeInPixels;
- (unsigned long long)previewStartFrameIndex;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setCurrentFrameCount:(unsigned long long)arg1;
- (void)setCurrentRenderTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setDestinationPath:(id)arg1;
- (void)setFrameProperties:(id)arg1;
- (void)setIsFirstAnimatedFrame:(bool)arg1;
- (void)setOverlay:(id)arg1;
- (void)setPreviewDuration:(double)arg1;
- (void)setPreviewFrameRate:(unsigned long long)arg1;
- (void)setPreviewGenerator:(id)arg1;
- (void)setPreviewStartFrameIndex:(unsigned long long)arg1;
- (void)setTargetFrameCount:(unsigned long long)arg1;
- (unsigned long long)targetFrameCount;
- (void)writeAnimatedPreviewToPath:(id)arg1 completion:(id /* block */)arg2;
- (id)writerQueue;

@end
