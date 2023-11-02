
@interface SBFluidSwitcherItemContainerLayer : CALayer {
    bool  _positionAnimationsBeginFromModelState;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousPosition;
    struct CATransform3D { 
        double m11; 
        double m12; 
        double m13; 
        double m14; 
        double m21; 
        double m22; 
        double m23; 
        double m24; 
        double m31; 
        double m32; 
        double m33; 
        double m34; 
        double m41; 
        double m42; 
        double m43; 
        double m44; 
    }  _previousTransform;
    bool  _transformAnimationsAreLegacyCounterRotations;
}

@property (nonatomic) bool positionAnimationsBeginFromModelState;
@property (nonatomic) bool transformAnimationsAreLegacyCounterRotations;

- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (id)init;
- (bool)positionAnimationsBeginFromModelState;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPositionAnimationsBeginFromModelState:(bool)arg1;
- (void)setTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (void)setTransformAnimationsAreLegacyCounterRotations:(bool)arg1;
- (bool)transformAnimationsAreLegacyCounterRotations;

@end
