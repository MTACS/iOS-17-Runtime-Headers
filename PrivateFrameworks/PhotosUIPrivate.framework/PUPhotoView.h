
@interface PUPhotoView : UIView {
    PUPhotoViewContentHelper * _contentHelper;
}

@property (nonatomic, readonly) PUPhotoViewContentHelper *contentHelper;

- (void).cxx_destruct;
- (id)contentHelper;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
