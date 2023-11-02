
@interface RMPasscodeViewController : PSListController {
    RMUIPasscodeViewModel * _passcodeModel;
}

@property (nonatomic, retain) RMUIPasscodeViewModel *passcodeModel;

- (void).cxx_destruct;
- (id)_passcodeDetailValue:(id)arg1;
- (void)_processUserInfoDictionary;
- (id)_specifiersForPasscodeSettings;
- (id)passcodeModel;
- (void)setPasscodeModel:(id)arg1;
- (id)specifiers;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
