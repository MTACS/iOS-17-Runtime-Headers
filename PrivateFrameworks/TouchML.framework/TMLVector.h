
@interface TMLVector : NSObject <NSCopying, TMLVectorJSExports> {
    struct CGVector { 
        double dx; 
        double dy; 
    }  _vector;
}

@property (nonatomic, readonly) double dx;
@property (nonatomic, readonly) double dy;
@property (nonatomic, readonly) struct CGVector { double x1; double x2; } vector;

+ (void)initializeJSContext:(id)arg1;

- (id)CGVectorValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)dx;
- (double)dy;
- (id)initWithVector:(struct CGVector { double x1; double x2; })arg1;
- (struct CGVector { double x1; double x2; })vector;

@end
