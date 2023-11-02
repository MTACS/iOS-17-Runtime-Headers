
@interface SBDisabledIdleTimer : SBIdleTimerBase {
    bool  _activated;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isActivated;
- (bool)isDisabled;
- (bool)isEqual:(id)arg1;
- (void)reset;
- (void)setActivated:(bool)arg1;

@end
