
@interface CKAvatarCollectionViewCell : UICollectionViewCell {
    CKAvatarView * _avatarView;
}

@property (nonatomic, retain) CKAvatarView *avatarView;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)avatarView;
- (void)configureWithEntity:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setAvatarView:(id)arg1;

@end
