
@interface NCNotificationManagementView : UIView <MTVisualStylingProviding> {
    UIView * _bottomSeparator;
    NSMutableDictionary * _categoriesToProviders;
    NCNotificationManagementBlueButton * _deliveryButton;
    UILabel * _explanation;
    UIImageView * _icon;
    bool  _isCriticalAlert;
    NCNotificationManagementBlueButton * _onOffToggleButton;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
    UIView * _topSeparator;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NCNotificationManagementBlueButton *deliveryButton;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NCNotificationManagementBlueButton *onOffToggleButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureDeliveryButtonIfNeccessary:(id)arg1;
- (void)_configureExplanationIfNeccessary:(id)arg1;
- (void)_configureIconIfNeccessary:(id)arg1;
- (void)_configureOnOffToggleButtonIfNeccessary:(id)arg1;
- (void)_configureSubtitleIfNeccessary:(id)arg1;
- (void)_configureTitleIfNeccessary:(id)arg1;
- (void)_configureTopSeparatorIfNeccessary;
- (void)_dynamicUserInterfaceTraitDidChange;
- (struct CGSize { double x1; double x2; })_explanationSizeForPlatterWidth:(double)arg1;
- (id)_newSeparatorView;
- (double)_separatorHeight;
- (struct CGSize { double x1; double x2; })_titleSizeForPlatterWidth:(double)arg1;
- (void)_updateExplanationVisualStyling;
- (void)_updateTopSeparatorVisualStyling;
- (id)deliveryButton;
- (id)initWithIcon:(id)arg1 title:(id)arg2 subtitle:(id)arg3 sectionSettings:(id)arg4 criticalAlert:(bool)arg5;
- (void)layoutSubviews;
- (id)onOffToggleButton;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)visualStylingProviderForCategory:(long long)arg1;

@end
