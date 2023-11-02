
@interface CSBounceSettings : PTSettings {
    double  _elasticity;
    double  _friction;
    double  _gravity;
    double  _maxVelocityAssistance;
    double  _maxVelocityToAssist;
    double  _minVelocityToAssist;
    double  _multiplier;
    double  _resistance;
    double  _velocity;
}

@property double elasticity;
@property double friction;
@property double gravity;
@property double maxVelocityAssistance;
@property double maxVelocityToAssist;
@property double minVelocityToAssist;
@property double multiplier;
@property double resistance;
@property double velocity;

- (double)elasticity;
- (double)friction;
- (double)gravity;
- (double)maxVelocityAssistance;
- (double)maxVelocityToAssist;
- (double)minVelocityToAssist;
- (double)multiplier;
- (double)resistance;
- (void)setDefaultValues;
- (void)setElasticity:(double)arg1;
- (void)setFriction:(double)arg1;
- (void)setGravity:(double)arg1;
- (void)setMaxVelocityAssistance:(double)arg1;
- (void)setMaxVelocityToAssist:(double)arg1;
- (void)setMinVelocityToAssist:(double)arg1;
- (void)setMultiplier:(double)arg1;
- (void)setResistance:(double)arg1;
- (void)setVelocity:(double)arg1;
- (double)velocity;

@end
