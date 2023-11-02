
@interface NCSymbolButton : UIControl {
    NSLayoutConstraint * _backgroundHeightConstraint;
    UIView * _backgroundView;
    NSLayoutConstraint * _backgroundWidthConstraint;
    UIImageView * _symbolImageView;
}

+ (id)button;

- (void).cxx_destruct;
- (id)_init;
- (void)clearSymbol;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)setSymbolNamed:(id)arg1 color:(id)arg2 pointSize:(double)arg3 backgroundDiameter:(double)arg4;

@end
