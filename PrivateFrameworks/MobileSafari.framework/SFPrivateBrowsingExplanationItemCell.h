
@interface SFPrivateBrowsingExplanationItemCell : UICollectionViewCell {
    UIImageView * _imageView;
    NSLayoutConstraint * _imageViewWidthConstraint;
    WBSPrivateBrowsingExplanationItem * _item;
    UILabel * _messageLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) WBSPrivateBrowsingExplanationItem *item;

- (void).cxx_destruct;
- (void)_updateImageViewWidth;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)item;
- (void)setItem:(id)arg1;

@end
