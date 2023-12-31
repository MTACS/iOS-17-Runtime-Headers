
@interface CertInfoDescriptionCellContentView : UIView {
    double  _idealHeight;
    NSArray * _labelsAndValues;
    struct CGSize { double x1; double x2; } * _sizes;
    int  _sizesCount;
}

- (void).cxx_destruct;
- (id)_labelFont;
- (void)_recalculateIdealHeight;
- (id)_valueFont;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)rowHeight;
- (void)setLabelsAndValues:(id)arg1;

@end
