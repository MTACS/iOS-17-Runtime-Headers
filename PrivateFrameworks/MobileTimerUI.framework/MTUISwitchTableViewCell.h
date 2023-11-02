
@interface MTUISwitchTableViewCell : MTUIBaseTableViewCell {
    <MTUISwitchTableViewCellDelegate> * _delegate;
    UISwitch * _enabledSwitch;
}

@property (nonatomic) <MTUISwitchTableViewCellDelegate> *delegate;
@property (nonatomic, retain) UISwitch *enabledSwitch;

- (void).cxx_destruct;
- (id)delegate;
- (id)enabledSwitch;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setEnabledSwitch:(id)arg1;
- (void)setSwitchStateEnabled:(bool)arg1;
- (void)switchAction:(id)arg1;

@end
