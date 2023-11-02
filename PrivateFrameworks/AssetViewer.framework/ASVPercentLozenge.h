
@interface ASVPercentLozenge : UILabel {
    UIViewPropertyAnimator * _percentLozengeAnimator;
    NSNumberFormatter * _percentageFormatter;
}

@property (nonatomic, retain) UIViewPropertyAnimator *percentLozengeAnimator;
@property (nonatomic, retain) NSNumberFormatter *percentageFormatter;

- (void).cxx_destruct;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)lozengeFont;
- (id)percentLozengeAnimator;
- (id)percentageFormatter;
- (void)setHidden:(bool)arg1 animated:(bool)arg2;
- (void)setPercentLozengeAnimator:(id)arg1;
- (void)setPercentage:(float)arg1;
- (void)setPercentageFormatter:(id)arg1;
- (void)setText:(id)arg1;
- (void)sizeToFit;
- (void)traitCollectionDidChange:(id)arg1;

@end
