
@interface SKRotate : SKAction {
    struct SKCRotate { int (**x1)(); unsigned int x2; float x3; id /* block */ x4; id x5; bool x6; double x7; double x8; float x9; float x10; double x11; bool x12; bool x13; id /* block */ x14; long long x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; float x27; float x28; float x29; bool x30; bool x31; bool x32; bool x33; bool x34; bool x35; } * _mycaction;
}

+ (id)rotateByAngle:(double)arg1 duration:(double)arg2;
+ (id)rotateByX:(double)arg1 duration:(double)arg2;
+ (id)rotateByX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (id)rotateByY:(double)arg1 duration:(double)arg2;
+ (id)rotateToAngle:(double)arg1 duration:(double)arg2;
+ (id)rotateToAngle:(double)arg1 duration:(double)arg2 shortestUnitArc:(bool)arg3;
+ (id)rotateToX:(double)arg1 duration:(double)arg2;
+ (id)rotateToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (id)rotateToY:(double)arg1 duration:(double)arg2;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end
