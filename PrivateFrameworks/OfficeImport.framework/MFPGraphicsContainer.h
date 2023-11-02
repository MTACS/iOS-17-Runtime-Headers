
@interface MFPGraphicsContainer : NSObject {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  mContainerTransform;
    MFPGraphicsState * mParentGraphicsState;
}

- (void).cxx_destruct;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })containerTransform;
- (id)initWithParentGraphicsState:(id)arg1 containerTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (id)parentGraphicsState;

@end
