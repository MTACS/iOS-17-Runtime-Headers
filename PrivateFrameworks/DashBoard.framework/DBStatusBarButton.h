
@interface DBStatusBarButton : UIButton {
    UIColor * _focusHighlightColor;
}

@property (nonatomic, retain) UIColor *focusHighlightColor;

+ (id)buttonWithType:(long long)arg1;

- (void).cxx_destruct;
- (id)focusHighlightColor;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setFocusHighlightColor:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
