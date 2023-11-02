
@interface AXAuditScreenshotManager : NSObject {
    NSMutableDictionary * __borderFrame;
    NSMutableDictionary * __displayBounds;
    NSMutableDictionary * __image;
    NSMutableDictionary * __rotation;
    NSMutableDictionary * __scaleFactor;
    NSMutableDictionary * __shouldFlipOutline;
    NSString * _lastTimestamp;
}

@property (nonatomic, retain) NSMutableDictionary *_borderFrame;
@property (nonatomic, retain) NSMutableDictionary *_displayBounds;
@property (nonatomic, retain) NSMutableDictionary *_image;
@property (nonatomic, retain) NSMutableDictionary *_rotation;
@property (nonatomic, retain) NSMutableDictionary *_scaleFactor;
@property (nonatomic, retain) NSMutableDictionary *_shouldFlipOutline;
@property (nonatomic, retain) NSString *lastTimestamp;

+ (id)imageFromRemoteImageData:(id)arg1 rotation:(double)arg2;
+ (id)imageProcessingQueue;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_borderFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundsForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 containerImageSize:(struct CGSize { double x1; double x2; })arg2 timestamp:(id)arg3;
- (id)_displayBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_elementBoundsForIssue:(id)arg1 containerImageSize:(struct CGSize { double x1; double x2; })arg2;
- (id)_image;
- (id)_rotation;
- (id)_scaleFactor;
- (id)_shouldFlipOutline;
- (void)addScreenshot:(id)arg1 forTimestamp:(id)arg2;
- (void)addScreenshotWithInfo:(id)arg1 timestamp:(id)arg2 completion:(id /* block */)arg3;
- (void)clear;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })elementBoundsInScreenShotForIssue:(id)arg1;
- (id)init;
- (id)lastTimestamp;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })screenshotBorderFrameForTimestamp:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })screenshotDisplayBoundsForTimestamp:(id)arg1;
- (id)screenshotForIssue:(id)arg1 elementRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (id)screenshotHighlightingIssue:(id)arg1;
- (id)screenshotImageForTimestamp:(id)arg1;
- (id)screenshotImageForTimestamp:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (double)screenshotRotationForTimestamp:(id)arg1;
- (double)screenshotScaleFactorForTimestamp:(id)arg1;
- (bool)screenshotShouldFlipOutlineForTimestamp:(id)arg1;
- (void)setLastTimestamp:(id)arg1;
- (void)setScreenshotBorderFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forTimestamp:(id)arg2;
- (void)setScreenshotDisplayBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forTimestamp:(id)arg2;
- (void)setScreenshotRotation:(double)arg1 forTimestamp:(id)arg2;
- (void)setScreenshotScaleFactor:(double)arg1 forTimestamp:(id)arg2;
- (void)setScreenshotShouldFlipOutline:(bool)arg1 forTimestamp:(id)arg2;
- (void)set_borderFrame:(id)arg1;
- (void)set_displayBounds:(id)arg1;
- (void)set_image:(id)arg1;
- (void)set_rotation:(id)arg1;
- (void)set_scaleFactor:(id)arg1;
- (void)set_shouldFlipOutline:(id)arg1;
- (id)thumbnailImageOfIssue:(id)arg1;

@end
