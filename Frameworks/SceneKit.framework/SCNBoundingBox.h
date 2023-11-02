
@interface SCNBoundingBox : NSObject {
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    }  max;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    }  min;
}

@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } max;
@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } min;

- (id)description;
- (struct SCNVector3 { float x1; float x2; float x3; })max;
- (struct SCNVector3 { float x1; float x2; float x3; })min;
- (void)setMax:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setMin:(struct SCNVector3 { float x1; float x2; float x3; })arg1;

@end
