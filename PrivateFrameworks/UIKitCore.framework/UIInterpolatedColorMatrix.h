
@interface UIInterpolatedColorMatrix : NSObject <UIVectorOperatable> {
    struct CAColorMatrix { 
        float m11; 
        float m12; 
        float m13; 
        float m14; 
        float m15; 
        float m21; 
        float m22; 
        float m23; 
        float m24; 
        float m25; 
        float m31; 
        float m32; 
        float m33; 
        float m34; 
        float m35; 
        float m41; 
        float m42; 
        float m43; 
        float m44; 
        float m45; 
    }  _colorMatrix;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)epsilonCompatibleWithVector:(id)arg1;
+ (id)valueWithColorMatrix:(struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })arg1;
+ (id)zeroCompatibleWithVector:(id)arg1;

- (id)addVector:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)getValue;
- (id)initWithColorMatrix:(struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })arg1;
- (void)integrateWithVelocity:(id)arg1 target:(id)arg2 intermediateTarget:(id)arg3 intermediateTargetVelocity:(id)arg4 parameters:(struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; long long x_1_1_4; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; long long x_2_1_4; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; long long x_3_1_4; } x3; bool x4; bool x5; bool x6; })arg5 state:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; })arg6 delta:(double)arg7;
- (id)interpolateTo:(id)arg1 progress:(double)arg2;
- (bool)isApproximatelyEqualTo:(id)arg1 withinEpsilon:(id)arg2;
- (bool)isCompatibleWith:(id)arg1;
- (bool)isUndefined;
- (id)multiplyByScalar:(double)arg1;
- (id)multiplyByVector:(id)arg1;
- (void)reinitWithVector:(id)arg1;

@end
