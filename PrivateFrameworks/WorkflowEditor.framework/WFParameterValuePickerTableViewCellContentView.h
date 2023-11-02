
@interface WFParameterValuePickerTableViewCellContentView : UIView <UIContentView> {
    WFParameterValuePickerTableViewCellConfiguration * _configuration;
    UIStackView * _contentStackView;
    UIImageView * _iconImageView;
    WFIconHostingView * _iconView;
    UIStackView * _labelsStackView;
    UISwitch * _selectedSwitch;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, copy) WFParameterValuePickerTableViewCellConfiguration *configuration;
@property (nonatomic, readonly) UIStackView *contentStackView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImageView *iconImageView;
@property (nonatomic, readonly) WFIconHostingView *iconView;
@property (nonatomic, readonly) UIStackView *labelsStackView;
@property (nonatomic, readonly) UISwitch *selectedSwitch;
@property (nonatomic, readonly) UILabel *subtitleLabel;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)applyConfiguration:(id)arg1;
- (id)configuration;
- (id)contentStackView;
- (id)iconImageView;
- (id)iconView;
- (id)initWithConfiguration:(id)arg1;
- (id)labelsStackView;
- (id)selectedSwitch;
- (void)selectedSwitchDidToggle:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (id)subtitleLabel;
- (id)titleLabel;

@end
