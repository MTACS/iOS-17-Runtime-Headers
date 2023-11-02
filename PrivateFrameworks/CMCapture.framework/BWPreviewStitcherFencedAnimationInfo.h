
@interface BWPreviewStitcherFencedAnimationInfo : BWFencedAnimationInfo {
    double  _primaryCaptureAspectRatio;
    double  _primaryCaptureRectCenterX;
    int  _primaryCaptureRectCenterXPixelOffset;
}

@property double primaryCaptureAspectRatio;
@property double primaryCaptureRectCenterX;
@property int primaryCaptureRectCenterXPixelOffset;

+ (id)fencedAnimationInfoWithAspectRatio:(double)arg1 centerX:(double)arg2 centerXPixelOffset:(int)arg3 fencePortSendRight:(id)arg4;

- (id)description;
- (double)primaryCaptureAspectRatio;
- (double)primaryCaptureRectCenterX;
- (int)primaryCaptureRectCenterXPixelOffset;
- (void)setPrimaryCaptureAspectRatio:(double)arg1;
- (void)setPrimaryCaptureRectCenterX:(double)arg1;
- (void)setPrimaryCaptureRectCenterXPixelOffset:(int)arg1;

@end
