
@interface SBRotationDodgingModifier : SBDodgingModifier {
    long long  _fromOrientation;
    NSUUID * _identifier;
    unsigned long long  _phase;
    long long  _toOrientation;
}

@property (nonatomic) long long fromOrientation;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic) unsigned long long phase;
@property (nonatomic) long long toOrientation;

- (void).cxx_destruct;
- (long long)animationBehaviorModeForIdentifier:(id)arg1;
- (long long)fromOrientation;
- (id)handleRotationEvent:(id)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 fromOrientation:(long long)arg2 toOrientation:(long long)arg3;
- (unsigned long long)phase;
- (void)setFromOrientation:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPhase:(unsigned long long)arg1;
- (void)setToOrientation:(long long)arg1;
- (long long)toOrientation;

@end
