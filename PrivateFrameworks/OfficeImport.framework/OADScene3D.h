
@interface OADScene3D : NSObject <NSCopying> {
    OADBackdrop * mBackdrop;
    OADCamera * mCamera;
    OADLightRig * mLightRig;
}

+ (id)nullScene3D;

- (void).cxx_destruct;
- (id)backdrop;
- (id)camera;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)lightRig;
- (void)setBackdrop:(id)arg1;
- (void)setCamera:(id)arg1;
- (void)setLightRig:(id)arg1;

@end
