
@interface SBForcePressGestureSwitcherModifierEvent : SBGestureSwitcherModifierEvent {
    double  _forcePercent;
}

@property (nonatomic) double forcePercent;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)forcePercent;
- (void)setForcePercent:(double)arg1;
- (long long)type;

@end
