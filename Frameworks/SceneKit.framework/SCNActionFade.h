
@interface SCNActionFade : SCNAction {
    struct SCNCActionFade { int (**x1)(); double x2; id /* block */ x3; id x4; bool x5; double x6; double x7; double x8; double x9; double x10; bool x11; bool x12; id /* block */ x13; struct __CFString {} *x14; long long x15; double x16; double x17; double x18; double x19; float x20; float x21; float x22; bool x23; } * _mycaction;
}

+ (id)fadeInWithDuration:(double)arg1;
+ (id)fadeOpacityBy:(double)arg1 duration:(double)arg2;
+ (id)fadeOpacityTo:(double)arg1 duration:(double)arg2;
+ (id)fadeOutWithDuration:(double)arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)parameters;
- (id)reversedAction;

@end
