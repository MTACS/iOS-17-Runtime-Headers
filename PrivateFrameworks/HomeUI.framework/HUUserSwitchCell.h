
@interface HUUserSwitchCell : HUAvatarTableViewCell <HUDisableableCellProtocol> {
    UIActivityIndicatorView * _activityIndicator;
    <HUUserSwitchCellDelegate> * _delegate;
    bool  _disabled;
    bool  _loading;
    UISwitch * _switchView;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUUserSwitchCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (readonly) unsigned long long hash;
@property (getter=isLoading, nonatomic) bool loading;
@property (getter=isOn, nonatomic) bool on;
@property (readonly) Class superclass;
@property (nonatomic, retain) UISwitch *switchView;

- (void).cxx_destruct;
- (void)_toggleOn:(id)arg1;
- (id)activityIndicator;
- (id)configurationState;
- (id)defaultContentConfiguration;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isDisabled;
- (bool)isLoading;
- (bool)isOn;
- (void)prepareForReuse;
- (void)setActivityIndicator:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setLoading:(bool)arg1;
- (void)setOn:(bool)arg1;
- (void)setOn:(bool)arg1 animated:(bool)arg2;
- (void)setSelected:(bool)arg1;
- (void)setSwitchView:(id)arg1;
- (id)switchView;
- (void)updateConfigurationUsingState:(id)arg1;
- (void)updateUIWithAnimation:(bool)arg1;

@end
