
@protocol Fx3DAPI_v2 <Fx3DAPI>

@required

- (double)focalLengthAtTime:(double)arg1;
- (bool)isUsingCamera;
- (NSData *)worldToEyeMatrix;
- (NSData *)worldToFilmMatrix;
- (NSData *)worldToObjectMatrix;

@end
