
@interface _TVHeaderColumnView : UIView {
    NSArray * _labelViews;
    double  _lineSpacing;
}

@property (nonatomic, copy) NSArray *labelViews;
@property (nonatomic) double lineSpacing;

- (void).cxx_destruct;
- (id)labelViews;
- (void)layoutSubviews;
- (double)lineSpacing;
- (void)setLabelViews:(id)arg1;
- (void)setLineSpacing:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
