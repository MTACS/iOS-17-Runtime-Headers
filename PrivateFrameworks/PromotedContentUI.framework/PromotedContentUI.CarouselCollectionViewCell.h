
@interface PromotedContentUI.CarouselCollectionViewCell : UICollectionViewCell {
    void $__lazy_storage_$_assetImageView;
    void $__lazy_storage_$_blurImageView;
    void $__lazy_storage_$_captionLabel;
    void $__lazy_storage_$_captionView;
    void assetToken;
    void delegate;
    void touchPoint;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
