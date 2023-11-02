
@interface SKColorize : SKAction {
    struct SKCColorize { int (**x1)(); unsigned int x2; float x3; id /* block */ x4; id x5; bool x6; double x7; double x8; float x9; float x10; double x11; bool x12; bool x13; id /* block */ x14; long long x15; float x16; float x17; float x18; float x19; struct { float x_20_1_1; float x_20_1_2; float x_20_1_3; float x_20_1_4; } x20; float x21; struct { float x_22_1_1; float x_22_1_2; float x_22_1_3; float x_22_1_4; } x22; float x23; struct { float x_24_1_1; float x_24_1_2; float x_24_1_3; float x_24_1_4; } x24; float x25; bool x26; } * _mycaction;
}

+ (id)colorizeWithColor:(id)arg1 colorBlendFactor:(double)arg2 duration:(double)arg3;
+ (id)colorizeWithColorBlendFactor:(double)arg1 duration:(double)arg2;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end
