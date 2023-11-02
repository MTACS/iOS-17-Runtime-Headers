
@interface CMRotationRateDataInternal : NSObject <NSCopying> {
    struct { 
        float x; 
        float y; 
        float z; 
    }  fRotationRate;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithRotationRate:(struct { float x1; float x2; float x3; })arg1;
- (void)setRotationRate:(struct { float x1; float x2; float x3; })arg1;

@end
