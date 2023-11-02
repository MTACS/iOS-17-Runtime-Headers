
@interface CMAccelerometerDataInternal : NSObject <NSCopying> {
    struct { 
        float x; 
        float y; 
        float z; 
    }  fAcceleration;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithAcceleration:(struct { float x1; float x2; float x3; })arg1;
- (void)setAcceleration:(struct { float x1; float x2; float x3; })arg1;

@end
