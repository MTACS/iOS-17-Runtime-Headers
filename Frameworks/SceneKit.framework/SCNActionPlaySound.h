
@interface SCNActionPlaySound : SCNAction {
    struct SCNCPlaySound { int (**x1)(); double x2; id /* block */ x3; id x4; bool x5; double x6; double x7; double x8; double x9; double x10; bool x11; bool x12; id /* block */ x13; struct __CFString {} *x14; long long x15; double x16; double x17; double x18; double x19; bool x20; bool x21; id x22; } * _mycaction;
}

+ (id)playAudioSource:(id)arg1 waitForCompletion:(bool)arg2;
+ (bool)supportsSecureCoding;

- (void)_setupDuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)parameters;
- (id)reversedAction;

@end
