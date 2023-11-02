
@interface SiriUIHelpButton : SiriUIContentButton {
    bool  _animatingEmphasis;
    bool  _emphasized;
}

+ (id)buttonWithHelpImageMask;

- (double)_targetAlpha;
- (void)pulse;
- (void)setEmphasized:(bool)arg1;

@end
