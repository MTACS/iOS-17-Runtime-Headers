
@interface UIInterpolatedColor : NSObject <UIVectorOperatable> {
    struct { 
        double r; 
        double g; 
        double b; 
        double a; 
    }  _color;
}

@property (nonatomic, readonly) NSString *conciseDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)epsilonCompatibleWithVector:(id)arg1;
+ (id)valueWithCGColor:(struct CGColor { }*)arg1;
+ (id)valueWithUIColor:(id)arg1;
+ (id)zeroCompatibleWithVector:(id)arg1;

- (id)addVector:(id)arg1;
- (id)conciseDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (struct CGColor { }*)getCGColor;
- (id)getUIColor;
- (id)getValue;
- (id)initWithDecomposedColor:(struct { double x1; double x2; double x3; double x4; })arg1;
- (void)integrateWithVelocity:(id)arg1 target:(id)arg2 intermediateTarget:(id)arg3 intermediateTargetVelocity:(id)arg4 parameters:(struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; long long x_1_1_4; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; long long x_2_1_4; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; long long x_3_1_4; } x3; bool x4; bool x5; bool x6; })arg5 state:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; })arg6 delta:(double)arg7;
- (id)interpolateTo:(id)arg1 progress:(double)arg2;
- (bool)isApproximatelyEqualTo:(id)arg1 withinEpsilon:(id)arg2;
- (bool)isCompatibleWith:(id)arg1;
- (bool)isUndefined;
- (id)multiplyByScalar:(double)arg1;
- (id)multiplyByVector:(id)arg1;
- (void)reinitWithVector:(id)arg1;

@end
