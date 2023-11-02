
@interface SCNActionMove : SCNAction {
    struct SCNCActionMove { int (**x1)(); double x2; id /* block */ x3; id x4; bool x5; double x6; double x7; double x8; double x9; double x10; bool x11; bool x12; id /* block */ x13; struct __CFString {} *x14; long long x15; double x16; double x17; double x18; double x19; double x20; bool x21; bool x22; } * _mycaction;
}

+ (id)moveBy:(struct SCNVector3 { float x1; float x2; float x3; })arg1 duration:(double)arg2;
+ (id)moveByX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (id)moveTo:(struct SCNVector3 { float x1; float x2; float x3; })arg1 duration:(double)arg2;
+ (id)moveToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isRelative;
- (id)parameters;
- (id)reversedAction;

@end
