
@interface CIDVRGBCameraPreview : UIView {
    CALayer * _objectLayer;
    CAShapeLayer * _regionOfInterestLayer;
    <CIDVRGBAVSessionManager> * _sessionManager;
}

@property (nonatomic, retain) CAShapeLayer *debugLayer;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } metadataRegionOfInterest;

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_alignRegionOfInterest;
- (void)_alignVideoFeedToCurrentOrientation;
- (id)_convertPoints:(id)arg1 fromBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_drawLandmarkRegionWithPoints:(id)arg1;
- (void)_drawLandmarks:(id)arg1 obtainedFromFaceWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_drawRegionOfInterest;
- (void)_processLandmarksInFrame:(id)arg1;
- (id)debugLayer;
- (void)didMoveToWindow;
- (void)flashRegionOfInterest;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })metadataRegionOfInterest;
- (id)previewLayer;
- (void)processFrame:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })regionOfInterest;
- (void)setDebugLayer:(id)arg1;
- (void)setSessionManager:(id)arg1;
- (void)showDetectedObjectBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
