
@interface CNFRegEmailController : CNFRegFirstRunController {
    PSSpecifier * _actionGroupSpecifier;
    NSArray * _checkMailSpecifiers;
    PSSpecifier * _currentActionSpecifier;
    PSSpecifier * _emailSpecifier;
    NSString * _pendingAlias;
    bool  _validating;
    NSTimer * _validationTimeoutTimer;
}

@property (nonatomic, copy) NSString *pendingAlias;

- (void).cxx_destruct;
- (void)_buildActionGroupSpecifierCache:(id)arg1;
- (void)_buildCheckMailSpecifierCache:(id)arg1;
- (void)_buildEmailSpecifierCache:(id)arg1;
- (void)_buildSpecifierCache:(id)arg1;
- (id)_createSpecifierForAlias:(id)arg1;
- (void)_failValidationWithError:(id)arg1;
- (void)_finishValidation;
- (void)_handleValidationModeCancelled;
- (bool)_phoneNumberInAliases:(id)arg1;
- (void)_refreshEnabledStateOfAliasSpecifiers;
- (void)_returnKeyPressed;
- (id)_rightButtonItem;
- (void)_setFieldsEnabled:(bool)arg1 animated:(bool)arg2;
- (void)_setupEventHandlers;
- (void)_showCheckMailButton:(bool)arg1 animated:(bool)arg2;
- (void)_stopValidationModeAnimated:(bool)arg1;
- (void)_updateControllerState;
- (void)_updateUI;
- (id)aliasSpecifiers;
- (id)bundle;
- (void)checkMailTapped:(id)arg1;
- (void)dealloc;
- (void)emailFieldEmptyStateChanged:(id)arg1 forSpecifier:(id)arg2;
- (bool)emailFieldIsEmpty;
- (id)emailTextField;
- (id)logName;
- (void)nextTapped;
- (bool)onlyLocalPhoneNumberSentinelAliasIsSelected;
- (id)pendingAlias;
- (id)pendingAliasForSpecifier:(id)arg1;
- (id)selectedAliases;
- (void)setAliasSelected:(id)arg1;
- (void)setPendingAlias:(id)arg1;
- (void)setPendingAlias:(id)arg1 forSpecifier:(id)arg2;
- (bool)shouldShowAllVettedAliases;
- (bool)showActionSpecifier:(id)arg1 animated:(bool)arg2;
- (id)specifierList;
- (void)startValidationTimeoutTimer;
- (void)stopValidationTimeoutTimer;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationWillEnterForeground;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)timeoutDuration;
- (id)titleString;
- (void)validationTimeout:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end