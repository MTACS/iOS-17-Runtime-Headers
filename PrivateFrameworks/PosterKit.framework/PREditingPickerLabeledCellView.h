
@interface PREditingPickerLabeledCellView : UIButton {
    UILabel * _contentLabel;
    UILabel * _nameLabel;
}

@property (nonatomic, readonly) UILabel *contentLabel;
@property (nonatomic, readonly) UILabel *nameLabel;

- (void).cxx_destruct;
- (id)contentLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)nameLabel;
- (void)setSelected:(bool)arg1;

@end
