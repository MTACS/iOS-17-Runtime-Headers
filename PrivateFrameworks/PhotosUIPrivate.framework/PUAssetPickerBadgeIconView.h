
@interface PUAssetPickerBadgeIconView : UIView {
    UIImageView * _photosImageView;
    UIImageView * _privacyImageView;
}

@property (nonatomic, readonly) UIImageView *photosImageView;
@property (nonatomic, readonly) UIImageView *privacyImageView;

- (void).cxx_destruct;
- (void)flipToPrivacyIconAfterDelay:(double)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)photosImageView;
- (id)privacyImageView;

@end
