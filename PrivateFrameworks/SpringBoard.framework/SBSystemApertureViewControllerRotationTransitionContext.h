
@interface SBSystemApertureViewControllerRotationTransitionContext : _UIViewControllerTransitionContext {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _targetTransform;
}

+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForRotationToInterfaceOrientation:(long long)arg1;

- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_affineTransform;
- (id)initWithTargetOrientation:(long long)arg1;

@end
