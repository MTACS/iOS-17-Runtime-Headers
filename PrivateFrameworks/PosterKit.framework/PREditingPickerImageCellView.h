
@interface PREditingPickerImageCellView : PREditingPickerCellView {
    UIImageView * _contentImageView;
}

@property (nonatomic, readonly) UIImageView *contentImageView;

- (void).cxx_destruct;
- (void)_configureWithSystemImage:(id)arg1;
- (void)configureWithSystemImageNamed:(id)arg1;
- (void)configureWithSystemImageNamed:(id)arg1 configuration:(id)arg2;
- (id)contentImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
