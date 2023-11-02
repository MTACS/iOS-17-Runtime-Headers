
@interface CSAttSiriGazeEstimator : NSObject {
    <CSAttSiriFaceTrackingCaptureDelegate> * _delegate;
}

@property (nonatomic) <CSAttSiriFaceTrackingCaptureDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)faceLandmarkStats:(id)arg1;
- (bool)getGazeInference:(struct opaqueCMSampleBuffer { }*)arg1 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 metaData:(id)arg3;
- (id)getVisualSpeechLandmarks:(id)arg1;
- (id)init;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rotateOrientationToPortrait:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;

@end
