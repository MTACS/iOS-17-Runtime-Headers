
@interface PXPersonTableViewCell : UITableViewCell

@property (nonatomic, retain) UIImage *personIcon;

+ (double)avatarHeight;

- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_updateUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)personIcon;
- (void)setPersonIcon:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
