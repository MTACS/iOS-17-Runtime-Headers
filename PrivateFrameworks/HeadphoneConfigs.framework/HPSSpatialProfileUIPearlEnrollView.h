
@interface HPSSpatialProfileUIPearlEnrollView : BKUIPearlEnrollView {
    HPSSpatialProfileCrossHairs * _enrollmentCustomCrossHairs;
    bool  _faceCaptured;
    bool  _forceBlur;
    bool  _pauseBlur;
}

@property (nonatomic) bool faceCaptured;
@property (nonatomic) bool forceBlur;
@property (nonatomic) bool pauseBlur;

- (void).cxx_destruct;
- (id)crossHairs;
- (bool)faceCaptured;
- (bool)forceBlur;
- (id)initWithVideoCaptureSession:(id)arg1 inSheet:(bool)arg2 squareNeedsPositionLayout:(bool)arg3;
- (void)nudgeLeft:(id /* block */)arg1;
- (void)nudgeRight:(id /* block */)arg1;
- (bool)pauseBlur;
- (void)setCameraBlurAmount:(double)arg1 useShade:(bool)arg2 duration:(double)arg3 completion:(id /* block */)arg4;
- (void)setFaceCaptured:(bool)arg1;
- (void)setForceBlur:(bool)arg1;
- (void)setPauseBlur:(bool)arg1;

@end
