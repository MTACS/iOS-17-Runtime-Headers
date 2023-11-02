
@interface GKDashboardKeyboardAccessoryView : UIView {
    UILabel * _descriptionLabel;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic) UILabel *descriptionLabel;
@property (nonatomic) UILabel *subtitleLabel;
@property (nonatomic) UILabel *titleLabel;

- (id)descriptionLabel;
- (void)setDescriptionLabel:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (id)titleLabel;

@end
