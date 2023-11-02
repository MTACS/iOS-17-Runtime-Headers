
@interface WFBackgroundFadingButton : UIButton {
    NSMutableDictionary * _backgroundColorsByState;
    bool  _derivesBackgroundColorFromTintColor;
    bool  _derivesTitleColorFromTintColor;
}

@property (nonatomic, retain) NSMutableDictionary *backgroundColorsByState;
@property (nonatomic) bool derivesBackgroundColorFromTintColor;
@property (nonatomic) bool derivesTitleColorFromTintColor;

- (void).cxx_destruct;
- (id)backgroundColorsByState;
- (bool)derivesBackgroundColorFromTintColor;
- (bool)derivesTitleColorFromTintColor;
- (void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBackgroundColorsByState:(id)arg1;
- (void)setDerivesBackgroundColorFromTintColor:(bool)arg1;
- (void)setDerivesTitleColorFromTintColor:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)tintColorDidChange;
- (void)updateBackgroundColorAnimated:(bool)arg1;

@end
