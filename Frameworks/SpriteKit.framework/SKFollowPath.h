
@interface SKFollowPath : SKAction {
    struct CGPath { } * _cgPath;
    struct SKCFollowPath { int (**x1)(); unsigned int x2; float x3; id /* block */ x4; id x5; bool x6; double x7; double x8; float x9; float x10; double x11; bool x12; bool x13; id /* block */ x14; long long x15; float x16; float x17; float x18; float x19; float x20; unsigned int x21; struct PKPath {} *x22; struct { float x_23_1_1; float x_23_1_2; } x23; bool x24; bool x25; } * _mycaction;
}

+ (id)followPath:(struct CGPath { }*)arg1 asOffset:(bool)arg2 orientToPath:(bool)arg3 duration:(double)arg4;
+ (id)followPath:(struct CGPath { }*)arg1 asOffset:(bool)arg2 orientToPath:(bool)arg3 speed:(double)arg4;
+ (id)followPath:(struct CGPath { }*)arg1 duration:(double)arg2;
+ (id)followPath:(struct CGPath { }*)arg1 speed:(double)arg2;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end
