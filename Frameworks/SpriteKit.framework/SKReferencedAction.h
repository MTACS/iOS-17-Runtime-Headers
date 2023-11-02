
@interface SKReferencedAction : SKAction {
    struct SKCReferencedAction { int (**x1)(); unsigned int x2; float x3; id /* block */ x4; id x5; bool x6; double x7; double x8; float x9; float x10; double x11; bool x12; bool x13; id /* block */ x14; long long x15; float x16; float x17; float x18; float x19; struct SKCAction {} *x20; } * _mycaction;
    SKAction * _referencedAction;
    NSString * _referencedActionName;
}

+ (id)referenceActionWithName:(id)arg1 duration:(double)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_ensureReferencedAction;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;
- (void)setDuration:(double)arg1;
- (void)setTimingFunction:(id /* block */)arg1;
- (void)setTimingMode:(long long)arg1;
- (id)subactions;

@end
