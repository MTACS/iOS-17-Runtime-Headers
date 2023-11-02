
@interface CAMAutoMacroButton : CAMCircleButton {
    bool  _active;
}

@property (nonatomic) bool active;

- (bool)active;
- (id)imageNameForCurrentState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setActive:(bool)arg1;
- (void)setActive:(bool)arg1 animated:(bool)arg2;
- (bool)shouldShowSlashForCurrentState;
- (bool)shouldUseActiveTintForCurrentState;

@end
