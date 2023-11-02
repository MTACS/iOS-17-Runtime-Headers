
@interface AXMScreenGrabber : NSObject <RPScreenRecorderDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (double)_adjustedScaleFactorForInputSize:(struct CGSize { double x1; double x2; })arg1 constrainingToPreferredInputSizeFromDetectors:(id)arg2;
- (id)_ioSurfaceConfigurationWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_renderOptionsForSurface:(struct __IOSurface { }*)arg1 captureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 displayName:(id)arg3 scaleFactor:(double)arg4 ignoredLayerContextIDs:(id)arg5 includedLayerContextIDs:(id)arg6 snapshotLayerID:(id)arg7 snapshotContextID:(id)arg8;
- (id)grabScreenWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 orientation:(long long)arg2 options:(id)arg3 metrics:(id)arg4 error:(id*)arg5;
- (void)recordScreenForDuration:(double)arg1 completion:(id /* block */)arg2;
- (void)screenRecorder:(id)arg1 didStopRecordingWithPreviewViewController:(id)arg2 error:(id)arg3;

@end
