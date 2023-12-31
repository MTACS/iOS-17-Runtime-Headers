
@interface OADRotation3D : NSObject <NSCopying> {
    float  mLatitude;
    float  mLongitude;
    float  mRevolution;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithLatitude:(float)arg1 longitude:(float)arg2 revolution:(float)arg3;
- (bool)isEqual:(id)arg1;
- (float)latitude;
- (float)longitude;
- (float)revolution;

@end
