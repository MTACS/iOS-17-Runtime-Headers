
@interface OADCamera : NSObject <NSCopying> {
    int  mCameraType;
    float  mFieldOfView;
    OADRotation3D * mRotation;
    float  mZoom;
}

- (void).cxx_destruct;
- (int)cameraType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (float)fieldOfView;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)rotation;
- (void)setCameraType:(int)arg1;
- (void)setFieldOfView:(float)arg1;
- (void)setRotation:(id)arg1;
- (void)setZoom:(float)arg1;
- (float)zoom;

@end
