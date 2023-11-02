
@interface NCNotificationAppSectionListHeaderView : NCNotificationListBaseContentView {
    <NCNotificationAppSectionListHeaderViewDelegate> * _delegate;
    UIImageView * _iconImageView;
    NCNotificationAppSectionListHeaderOptionsButton * _optionsButton;
    UILabel * _titleLabel;
}

@property (nonatomic) <NCNotificationAppSectionListHeaderViewDelegate> *delegate;
@property (nonatomic, retain) UIImage *iconImage;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)_configureOptionsButtonIfNecessary;
- (void)_layoutIconImageView;
- (void)_layoutOptionsButton;
- (void)_layoutTitleLabel;
- (unsigned long long)_maximumNumberOfLinesForTitleText;
- (unsigned long long)_numberOfLinesForTitleTextInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateTextAttributes;
- (void)_updateTextAttributesForTitleTextLabel;
- (void)_visualStylingProviderDidChange:(id)arg1 forCategory:(long long)arg2 outgoingProvider:(id)arg3;
- (bool)adjustForContentSizeCategoryChange;
- (id)delegate;
- (void)didTapOptionsButton:(id)arg1;
- (id)iconImage;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;

@end
