
@interface CPSDashboardItemView : UIView <CRSUIDashboardFocusableItemProviding> {
    UIButton * _button;
    CPDashboardButton * _dashboardButton;
    <CPSButtonDelegate> * _delegate;
    UIView * _focusBackgroundView;
    UIColor * _focusHighlightColor;
    UIImageView * _imageView;
    unsigned long long  _layoutAxis;
    CPSAbridgableLabel * _subtitleLabel;
    NSLayoutConstraint * _subtitleWidthConstraint;
    CPSAbridgableLabel * _titleLabel;
    NSLayoutConstraint * _titleLabelConnectingConstraint;
}

@property (nonatomic, retain) UIButton *button;
@property (nonatomic, readonly) CPDashboardButton *dashboardButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CPSButtonDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *focusBackgroundView;
@property (nonatomic, retain) UIColor *focusHighlightColor;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic) unsigned long long layoutAxis;
@property (nonatomic, retain) CPSAbridgableLabel *subtitleLabel;
@property (nonatomic, retain) NSLayoutConstraint *subtitleWidthConstraint;
@property (readonly) Class superclass;
@property (nonatomic, retain) CPSAbridgableLabel *titleLabel;
@property (nonatomic, retain) NSLayoutConstraint *titleLabelConnectingConstraint;

- (void).cxx_destruct;
- (void)_buttonTriggered:(id)arg1;
- (void)_setup;
- (void)_touchDown:(id)arg1;
- (void)_touchEnded:(id)arg1;
- (id)button;
- (id)dashboardButton;
- (id)delegate;
- (id)focusBackgroundView;
- (id)focusHighlightColor;
- (void)focusableItemFocused:(bool)arg1;
- (void)focusableItemPressed:(bool)arg1;
- (void)focusableItemSelected;
- (void)hideSubtitle;
- (id)imageView;
- (id)initWithDashboardButton:(id)arg1 layoutAxis:(unsigned long long)arg2;
- (unsigned long long)layoutAxis;
- (void)layoutSubviews;
- (void)setButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFocusBackgroundView:(id)arg1;
- (void)setFocusHighlightColor:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setLayoutAxis:(unsigned long long)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setSubtitleWidthConstraint:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleLabelConnectingConstraint:(id)arg1;
- (id)subtitleLabel;
- (id)subtitleWidthConstraint;
- (id)titleLabel;
- (id)titleLabelConnectingConstraint;
- (void)traitCollectionDidChange:(id)arg1;

@end
