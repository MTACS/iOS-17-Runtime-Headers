
@protocol ADLensDistortionModel <NSObject, NSCopying>

@required

- (void)adjustForImageRotation:(long long)arg1 forDimensions:(struct CGSize { double x1; double x2; })arg2;
- (void)distortPixels:(unsigned long long)arg1 undistortedPixels:(const struct CGPoint { double x1; double x2; }*)arg2 withCameraCalibration:(ADCameraCalibration *)arg3 outDistortedPixels:(struct CGPoint { double x1; double x2; }*)arg4;
- (void)scale:(float)arg1;
- (void)undistortPixels:(unsigned long long)arg1 distortedPixels:(const struct CGPoint { double x1; double x2; }*)arg2 withCameraCalibration:(ADCameraCalibration *)arg3 outUndistortedPixels:(struct CGPoint { double x1; double x2; }*)arg4;

@optional

- (void)crop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)crop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromDimensions:(struct CGSize { double x1; double x2; })arg2;
- (NSDictionary *)dictionaryRepresentation:(bool)arg1;
- (id)initWithDictionary:(NSDictionary *)arg1;

@end
