
@interface HKDynamicButton : UIButton {
    NSLayoutConstraint * _heightConstraint;
}

@property (nonatomic, retain) NSLayoutConstraint *heightConstraint;

- (void).cxx_destruct;
- (double)_buttonLabelHeight;
- (void)_updateForCurrentSizeCategory;
- (id)heightConstraint;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setHeightConstraint:(id)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;

@end
