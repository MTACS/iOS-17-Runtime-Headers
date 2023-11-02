
@interface JFXFaceTrackingUtilities : NSObject

+ (id)JFX_faceAnchorWithFaceAnchor:(id)arg1 forInterfaceOrientation:(long long)arg2;
+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })JFX_projectionMatrixWithFaceAnchor:(id)arg1 bufferSize:(struct CGSize { double x1; double x2; })arg2;
+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })adjustIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1 forRenderSize:(struct CGSize { double x1; double x2; })arg2 capturedSize:(struct CGSize { double x1; double x2; })arg3 interfaceOrientation:(long long)arg4;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceRectInImageWithFaceAnchor:(id)arg1 invertY:(bool)arg2 interfaceOrientation:(long long)arg3 imageResolution:(out struct CGSize { double x1; double x2; }*)arg4;
+ (struct CGSize { double x1; double x2; })faceRectScaleFactorForInterfaceOrientation:(long long)arg1 andDeviceInterfaceOrientation:(long long)arg2;
+ (bool)isFaceAnchorInRange:(id)arg1;
+ (void)pointOnFaceMesh;
+ (double)rollAngleFromFaceAnchor:(id)arg1 forInterfaceOrientation:(long long)arg2;

@end
