
@interface NCInsetGroupedButton : UIControl {
    UIImageView * _arrowImageView;
    UIView * _backgroundView;
    UIView * _cornersView;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

+ (id)buttonWithTitle:(id)arg1 top:(bool)arg2;

- (void).cxx_destruct;
- (id)_initWithTitle:(id)arg1 top:(bool)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSubtitleText:(id)arg1;

@end
