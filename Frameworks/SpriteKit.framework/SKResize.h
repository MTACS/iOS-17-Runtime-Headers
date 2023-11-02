
@interface SKResize : SKAction {
    struct SKCResize { int (**x1)(); unsigned int x2; float x3; id /* block */ x4; id x5; bool x6; double x7; double x8; float x9; float x10; double x11; bool x12; bool x13; id /* block */ x14; long long x15; float x16; float x17; float x18; float x19; float x20; struct { float x_21_1_1; float x_21_1_2; } x21; struct { float x_22_1_1; float x_22_1_2; } x22; struct { float x_23_1_1; float x_23_1_2; } x23; bool x24; bool x25; bool x26; bool x27; } * _mycaction;
}

+ (id)resizeByWidth:(double)arg1 height:(double)arg2 duration:(double)arg3;
+ (id)resizeToHeight:(double)arg1 duration:(double)arg2;
+ (id)resizeToWidth:(double)arg1 duration:(double)arg2;
+ (id)resizeToWidth:(double)arg1 height:(double)arg2 duration:(double)arg3;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end
