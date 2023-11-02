
@interface NUCGAffineTransform : NSObject {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _value;
}

@property (readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } value;

- (id)initWithCGAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })value;

@end
