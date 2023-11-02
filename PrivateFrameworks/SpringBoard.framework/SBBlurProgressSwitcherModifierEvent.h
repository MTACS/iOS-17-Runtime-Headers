
@interface SBBlurProgressSwitcherModifierEvent : SBSwitcherModifierEvent {
    double  _progress;
}

@property (nonatomic, readonly) double progress;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithProgress:(double)arg1;
- (double)progress;
- (long long)type;

@end
