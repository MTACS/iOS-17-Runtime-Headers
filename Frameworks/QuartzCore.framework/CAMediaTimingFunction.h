
@interface CAMediaTimingFunction : NSObject <NSSecureCoding> {
    struct CAMediaTimingFunctionPrivate { float x1[2]; float x2[2]; } * _priv;
}

@property (nonatomic, readonly) TSDBezierPath *bezierPath;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

+ (void)CAMLParserEndElement:(id)arg1 content:(id)arg2;
+ (id)functionWithControlPoints:(float)arg1 :(float)arg2 :(float)arg3 :(float)arg4;
+ (id)functionWithName:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)CAMLType;
- (unsigned long long)CA_copyNumericValue:(double*)arg1;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; unsigned int x3 : 8; unsigned int x4 : 24; }*)CA_copyRenderValue;
- (unsigned long long)CA_numericValueCount;
- (void)_getPoints:(double*)arg1;
- (float)_solveForInput:(float)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)getControlPointAtIndex:(unsigned long long)arg1 values:(float)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithControlPoints:(float)arg1 :(float)arg2 :(float)arg3 :(float)arg4;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)sigmoidFunction;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

+ (id)hu_functionWithAnimationCurve:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/JetUI.framework/JetUI

+ (id)jet_appleServicesLoadingFunction;

// Image: /System/Library/PrivateFrameworks/Recap.framework/Recap

- (id)rcp_functionWithLinearEnd;
- (struct CGVector { double x1; double x2; })rcp_solveForDelta:(struct CGVector { double x1; double x2; })arg1 withSteps:(unsigned long long)arg2 step:(unsigned long long)arg3;
- (struct CGPoint { double x1; double x2; })rcp_solveForStart:(struct CGPoint { double x1; double x2; })arg1 end:(struct CGPoint { double x1; double x2; })arg2 at:(float)arg3;

// Image: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI

- (float)smu_solveForInput:(float)arg1;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

- (double)TSD_valueAtPercent:(double)arg1;
- (id)bezierPath;
- (double)solveForTime:(double)arg1;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_kbTimingFunction;
+ (id)uiFunctionWithControlPoints:(const struct CGPoint { double x1; double x2; }*)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables

- (double)TSD_valueAtPercent:(double)arg1;

@end
