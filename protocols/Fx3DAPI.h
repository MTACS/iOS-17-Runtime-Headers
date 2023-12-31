
@protocol Fx3DAPI

@required

- (NSData *)cameraMatrixAtTime:(double)arg1;
- (double)focalLengthAtTime:(double)arg1;
- (bool)is3D;
- (NSData *)layerMatrixAtTime:(double)arg1;

@end
