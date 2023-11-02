
@interface JFXEffectContinousLiveCapturePreviewOptions : JFXEffectContinousPreviewOptions {
    bool  _rotateCameraFrameToInterfaceOrientation;
}

@property (nonatomic) bool rotateCameraFrameToInterfaceOrientation;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initLiveCaptureOptions;
- (bool)rotateCameraFrameToInterfaceOrientation;
- (void)setRotateCameraFrameToInterfaceOrientation:(bool)arg1;

@end
