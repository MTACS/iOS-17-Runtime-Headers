
@interface TLKRoundedCornerLabel : TLKView {
    UIView * _borderView;
    TLKLabel * _label;
    unsigned long long  _sizeConfiguration;
}

@property (nonatomic, retain) UIView *borderView;
@property (nonatomic, retain) TLKLabel *label;
@property (nonatomic) unsigned long long sizeConfiguration;

- (void).cxx_destruct;
- (bool)allowsVibrancy;
- (id)borderView;
- (void)didMoveToWindow;
- (double)effectiveBaselineOffsetFromBottom;
- (struct CGSize { double x1; double x2; })effectiveLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithProminence:(unsigned long long)arg1;
- (id)label;
- (void)layoutSubviews;
- (void)setBorderView:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setSizeConfiguration:(unsigned long long)arg1;
- (unsigned long long)sizeConfiguration;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateFont;

@end
