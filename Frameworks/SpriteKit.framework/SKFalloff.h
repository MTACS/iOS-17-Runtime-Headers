
@interface SKFalloff : SKAction {
    struct SKCFalloff { int (**x1)(); unsigned int x2; float x3; id /* block */ x4; id x5; bool x6; double x7; double x8; float x9; float x10; double x11; bool x12; bool x13; id /* block */ x14; long long x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; bool x25; bool x26; } * _mycaction;
}

+ (id)falloffBy:(double)arg1 duration:(double)arg2;
+ (id)falloffTo:(double)arg1 duration:(double)arg2;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end
