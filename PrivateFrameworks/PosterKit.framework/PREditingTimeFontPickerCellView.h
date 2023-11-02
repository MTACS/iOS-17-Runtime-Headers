
@interface PREditingTimeFontPickerCellView : PREditingFontPickerCellView {
    UILabel * _contentLabel;
}

@property (nonatomic, readonly) UILabel *contentLabel;

- (void).cxx_destruct;
- (void)configureWithFont:(id)arg1 text:(id)arg2;
- (id)contentLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
