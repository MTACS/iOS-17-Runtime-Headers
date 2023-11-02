
@interface SCNActionRepeat : SCNAction {
    struct SCNCActionRepeat { int (**x1)(); double x2; id /* block */ x3; id x4; bool x5; double x6; double x7; double x8; double x9; double x10; bool x11; bool x12; id /* block */ x13; struct __CFString {} *x14; long long x15; double x16; double x17; double x18; double x19; struct SCNCAction {} *x20; unsigned long long x21; unsigned long long x22; double x23; bool x24; } * _mycaction;
    SCNAction * _repeatedAction;
}

+ (id)repeatAction:(id)arg1 count:(unsigned long long)arg2;
+ (id)repeatActionForever:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isCustom;
- (id)reversedAction;

@end
