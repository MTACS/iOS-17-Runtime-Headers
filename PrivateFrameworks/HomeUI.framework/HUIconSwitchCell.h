
@interface HUIconSwitchCell : HUTitleDescriptionCell {
    <HUIconSwitchCellDelegate> * _delegate;
    UISwitch * _switchView;
}

@property (nonatomic) <HUIconSwitchCellDelegate> *delegate;
@property (getter=isOn, nonatomic) bool on;
@property (nonatomic, retain) UISwitch *switchView;

- (void).cxx_destruct;
- (void)_toggleOn:(id)arg1;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isOn;
- (void)prepareForReuse;
- (void)setDelegate:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setOn:(bool)arg1;
- (void)setOn:(bool)arg1 animated:(bool)arg2;
- (void)setSelected:(bool)arg1;
- (void)setSwitchView:(id)arg1;
- (id)switchView;
- (void)updateUIWithAnimation:(bool)arg1;

@end
