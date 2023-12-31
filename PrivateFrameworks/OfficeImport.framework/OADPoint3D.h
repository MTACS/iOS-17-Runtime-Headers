
@interface OADPoint3D : NSObject <NSCopying> {
    float  mX;
    float  mY;
    float  mZ;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithX:(float)arg1 y:(float)arg2 z:(float)arg3;
- (bool)isEqual:(id)arg1;
- (float)x;
- (float)y;
- (float)z;

@end
