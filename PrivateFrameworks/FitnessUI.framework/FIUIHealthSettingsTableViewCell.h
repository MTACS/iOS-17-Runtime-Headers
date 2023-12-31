
@interface FIUIHealthSettingsTableViewCell : UITableViewCell {
    <FIUIHealthSettingsForceUpdatable> * _forceUpdatable;
    UIView * _inputView;
}

@property (nonatomic) <FIUIHealthSettingsForceUpdatable> *forceUpdatable;

- (void).cxx_destruct;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (bool)canResignFirstResponder;
- (id)forceUpdatable;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)inputView;
- (bool)resignFirstResponder;
- (void)setForceUpdatable:(id)arg1;
- (void)setInputView:(id)arg1;

@end
