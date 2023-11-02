
@interface CKAppContainerTitleView : _UINavigationBarTitleView {
    UIButton * _closeButton;
    NSLayoutConstraint * _iconHeightConstraint;
    UIImageView * _iconImageView;
    NSLayoutConstraint * _iconWidthConstraint;
    UILabel * _label;
}

@property (nonatomic, retain) UIButton *closeButton;
@property (nonatomic, retain) NSLayoutConstraint *iconHeightConstraint;
@property (nonatomic, retain) UIImage *iconImage;
@property (nonatomic, retain) UIImageView *iconImageView;
@property (nonatomic, retain) NSLayoutConstraint *iconWidthConstraint;
@property (nonatomic, retain) UILabel *label;

- (void).cxx_destruct;
- (id)closeButton;
- (id)iconHeightConstraint;
- (id)iconImage;
- (id)iconImageView;
- (id)iconWidthConstraint;
- (id)init;
- (id)label;
- (void)setCloseButton:(id)arg1;
- (void)setIconHeightConstraint:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setIconWidthConstraint:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setup;

@end
