
@interface SFPasswordBreachToggleCell : UITableViewCell {
    <SFPasswordBreachToggleCellDelegate> * _delegate;
    UISwitch * _toggleSwitch;
}

- (void).cxx_destruct;
- (void)_userToggledBreachDetection:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1 delegate:(id)arg2;
- (void)setCurrentPasswordBreachState:(bool)arg1;

@end
