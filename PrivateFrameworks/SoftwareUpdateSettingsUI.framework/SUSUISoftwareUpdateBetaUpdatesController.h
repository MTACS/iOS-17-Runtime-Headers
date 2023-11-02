
@interface SUSUISoftwareUpdateBetaUpdatesController : PSListController {
    PSSpecifier * _appleIDGroupSpecifier;
    PSSpecifier * _appleIDSpecifier;
    PSSpecifier * _mismatchedSpecifier;
    PSSpecifier * _programsGroup;
    NSArray * _programsList;
    PSSpecifier * _unavailableProgramNoticeSpecifier;
}

@property (nonatomic, retain) PSSpecifier *appleIDGroupSpecifier;
@property (nonatomic, retain) PSSpecifier *appleIDSpecifier;
@property (nonatomic) PSSpecifier *mismatchedSpecifier;
@property (nonatomic, retain) PSSpecifier *programsGroup;
@property (nonatomic, retain) NSArray *programsList;
@property (nonatomic, retain) PSSpecifier *unavailableProgramNoticeSpecifier;

- (void).cxx_destruct;
- (id)_specifierForBetaProgram:(id)arg1 rowIdentifier:(id)arg2;
- (id)appleIDGroupSpecifier;
- (id)appleIDSpecifier;
- (id)mismatchedSpecifier;
- (void)presentAuthKitController;
- (void)presentAuthenticationDialog;
- (id)programsGroup;
- (id)programsList;
- (void)setAppleIDGroupSpecifier:(id)arg1;
- (void)setAppleIDSpecifier:(id)arg1;
- (void)setMismatchedSpecifier:(id)arg1;
- (void)setProgramsGroup:(id)arg1;
- (void)setProgramsList:(id)arg1;
- (void)setUnavailableProgramNoticeSpecifier:(id)arg1;
- (void)setupProgramListSpecifiers;
- (void)setupProgramsGroupSpecifier;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)unavailableProgramNoticeSpecifier;
- (id)updateController;
- (void)updateFooter;
- (void)viewDidLoad;

@end
