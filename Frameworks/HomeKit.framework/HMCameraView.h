
@interface HMCameraView : UIView {
    HMCameraSource * _cameraSource;
}

@property (nonatomic, retain) HMCameraSource *cameraSource;

- (void).cxx_destruct;
- (void)_fillSlotForCameraSource;
- (id)cameraSource;
- (void)setCameraSource:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end
