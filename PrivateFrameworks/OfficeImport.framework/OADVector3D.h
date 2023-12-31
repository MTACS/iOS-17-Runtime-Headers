
@interface OADVector3D : NSObject <NSCopying> {
    float  mDx;
    float  mDy;
    float  mDz;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (float)dx;
- (float)dy;
- (float)dz;
- (unsigned long long)hash;
- (id)initWithDx:(float)arg1 dy:(float)arg2 dz:(float)arg3;
- (bool)isEqual:(id)arg1;

@end
