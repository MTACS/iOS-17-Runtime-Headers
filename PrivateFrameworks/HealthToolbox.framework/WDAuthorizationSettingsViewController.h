
@interface WDAuthorizationSettingsViewController : HKAuthorizationSettingsViewController <HKSwitchTableViewCellDelegate, UITextViewDelegate> {
    WDProfile * _profile;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WDProfile *profile;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applicationWillEnterForeground;
- (bool)_isSiriAndDeviceCapable;
- (bool)_isTypeEnabledAtIndexPath;
- (id)initWithProfile:(id)arg1 style:(long long)arg2;
- (id)profile;
- (id)sectionsForAuthController:(id)arg1;
- (void)setProfile:(id)arg1;
- (id)specialCellWithIdentifier:(id)arg1 textLabelText:(id)arg2;
- (void)switchCellValueChanged:(id)arg1 value:(bool)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
