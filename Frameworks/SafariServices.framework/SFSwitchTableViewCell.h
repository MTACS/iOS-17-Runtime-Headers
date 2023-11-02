
@interface SFSwitchTableViewCell : UITableViewCell {
    <SFSwitchTableViewCellDelegate> * _delegate;
    UISwitch * _switchView;
}

@property (nonatomic) <SFSwitchTableViewCellDelegate> *delegate;
@property (getter=isSwitchOn, nonatomic) bool switchOn;

- (void).cxx_destruct;
- (void)_switchViewStateDidChange:(id)arg1;
- (id)delegate;
- (id)initWithReuseIdentifier:(id)arg1;
- (bool)isSwitchOn;
- (void)setDelegate:(id)arg1;
- (void)setSwitchOn:(bool)arg1;

@end
