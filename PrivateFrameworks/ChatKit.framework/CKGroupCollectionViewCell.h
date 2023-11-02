
@interface CKGroupCollectionViewCell : UICollectionViewCell {
    UIView * _avatarView;
}

@property (nonatomic, retain) UIView *avatarView;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)avatarView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAvatarView:(id)arg1;
- (bool)shouldHighlight;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
