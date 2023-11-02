
@interface HKMedicalIDEditorSwitchCell : UITableViewCell {
    <HKMedicalIDEditorSwitchDelegate> * _delegate;
    UISwitch * _switch;
}

@property (nonatomic) <HKMedicalIDEditorSwitchDelegate> *delegate;

- (void).cxx_destruct;
- (void)_switchSwitched:(id)arg1;
- (id)delegate;
- (id)initWithTitle:(id)arg1 defaultState:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setUIDisabled;

@end
