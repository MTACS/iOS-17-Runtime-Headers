
@interface CAMDepthEffectSuggestionButton : CAMCircleButton {
    long long  _mode;
}

@property (nonatomic) long long mode;

- (id)imageNameForCurrentState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)mode;
- (void)setMode:(long long)arg1;
- (void)setMode:(long long)arg1 animated:(bool)arg2;
- (bool)shouldUseActiveTintForCurrentState;

@end
