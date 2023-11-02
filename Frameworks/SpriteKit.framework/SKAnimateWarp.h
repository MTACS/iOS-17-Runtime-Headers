
@interface SKAnimateWarp : SKAction {
    struct SKCAnimateMesh { int (**x1)(); unsigned int x2; float x3; id /* block */ x4; id x5; bool x6; double x7; double x8; float x9; float x10; double x11; bool x12; bool x13; id /* block */ x14; long long x15; float x16; float x17; float x18; float x19; id x20; id x21; id x22; bool x23; } * _mycaction;
}

+ (id)animateWithWarps:(id)arg1 times:(id)arg2;
+ (id)animateWithWarps:(id)arg1 times:(id)arg2 restore:(bool)arg3;
+ (bool)supportsSecureCoding;
+ (id)warpTo:(id)arg1 duration:(double)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
