
@interface _UISETeleportFailGestureFeature : _UISEGestureFeature {
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastLocation;
}

- (void)_incorporateSample:(const struct _UISEGestureFeatureSample { unsigned long long x1; unsigned long long x2; bool x3; long long x4; unsigned long long x5; struct CGPoint { double x_6_1_1; double x_6_1_2; } x6; double x7; }*)arg1;
- (id)init;

@end
