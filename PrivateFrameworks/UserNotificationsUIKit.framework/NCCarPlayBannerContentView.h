
@interface NCCarPlayBannerContentView : UIView <BSUIDateLabelDelegate> {
    CPUIBannerViewButton * _actionButton;
    <NCCarPlayBannerContentViewDelegate> * _delegate;
    bool  _displayPropertiesValid;
    NSArray * _iconImageViews;
    NCNotificationRequest * _notificationRequest;
    CPUIBannerViewButton * _okButton;
    UILabel<BSUIDateLabel> * _relevanceDateLabel;
    double  _subTitleAscender;
    UILabel * _subTitleLabel;
    double  _titleAscender;
    UILabel * _titleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCCarPlayBannerContentViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NCNotificationRequest *notificationRequest;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_boundedTraitCollectionForLabelFont;
- (id)_defaultRelevanceDateFont;
- (bool)_hasSubtitle;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_iconImageInsets;
- (void)_layoutForButton:(id)arg1 contentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_reloadDisplayPropertiesIfNecessary;
- (void)_setRelevanceDate:(id)arg1 allDay:(bool)arg2 timeZone:(id)arg3;
- (bool)_shouldShowOKButton;
- (id)_subTitle;
- (id)_subtitleFont;
- (id)_title;
- (id)_titleFont;
- (void)_updateButtonStates;
- (bool)canBecomeFirstResponder;
- (void)dateLabelDidChange:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithNotificationRequest:(id)arg1;
- (void)invalidateDisplayProperties;
- (void)layoutSubviews;
- (id)notificationRequest;
- (void)setDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateRequestToInstance:(id)arg1;

@end
