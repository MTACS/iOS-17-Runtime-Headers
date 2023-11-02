
@interface CMMagnetometerDataInternal : NSObject <NSCopying> {
    struct { 
        float x; 
        float y; 
        float z; 
    }  fMagneticField;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithMagneticField:(struct { float x1; float x2; float x3; })arg1;
- (void)setMagneticField:(struct { float x1; float x2; float x3; })arg1;

@end
