
@interface WGPlatterHeaderContentView : PLPlatterHeaderContentView {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _utilityButtonTransform;
}

@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } utilityButtonTransform;

- (void)_layoutUtilityButtonWithScale:(double)arg1;
- (id)init;
- (void)setUtilityButtonTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })utilityButtonTransform;

@end
