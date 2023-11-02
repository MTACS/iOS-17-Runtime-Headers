
@interface WFTriggerImageCell : UITableViewCell {
    NSLayoutConstraint * _heightConstraint;
    UIImageView * _iconView;
    NSLayoutConstraint * _imagePaddingBottomConstraint;
    NSLayoutConstraint * _imagePaddingTopConstraint;
    UILabel * _label;
    NSString * _objectIdentifier;
    NSLayoutConstraint * _widthConstraint;
}

@property (nonatomic, retain) NSLayoutConstraint *heightConstraint;
@property (nonatomic, readonly) UIImageView *iconView;
@property (nonatomic, retain) NSLayoutConstraint *imagePaddingBottomConstraint;
@property (nonatomic, retain) NSLayoutConstraint *imagePaddingTopConstraint;
@property (nonatomic, readonly) UILabel *label;
@property (nonatomic, retain) NSString *objectIdentifier;
@property (nonatomic, retain) NSLayoutConstraint *widthConstraint;

- (void).cxx_destruct;
- (id)heightConstraint;
- (id)iconView;
- (id)imagePaddingBottomConstraint;
- (id)imagePaddingTopConstraint;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)label;
- (id)objectIdentifier;
- (void)prepareForReuse;
- (void)setCornerRadius:(double)arg1;
- (void)setHeightConstraint:(id)arg1;
- (void)setImage:(id)arg1 width:(double)arg2 height:(double)arg3;
- (void)setImagePaddingBottomConstraint:(id)arg1;
- (void)setImagePaddingTopConstraint:(id)arg1;
- (void)setImageTopPadding:(double)arg1 bottomPadding:(double)arg2;
- (void)setObjectIdentifier:(id)arg1;
- (void)setWidthConstraint:(id)arg1;
- (id)widthConstraint;

@end
