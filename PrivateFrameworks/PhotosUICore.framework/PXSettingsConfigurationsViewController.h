
@interface PXSettingsConfigurationsViewController : UITableViewController <PXSettingsConfigurationsSourceObserver> {
    bool  _areAllActionsAvailable;
    UIAlertAction * _promptConfirmAction;
    UITextField * _promptTextField;
    PXSettings * _settings;
    PXSettingsConfigurationsSource * _source;
}

@property (nonatomic) bool areAllActionsAvailable;
@property (nonatomic, retain) UIAlertAction *promptConfirmAction;
@property (nonatomic, retain) UITextField *promptTextField;
@property (nonatomic, readonly) PXSettings *settings;
@property (nonatomic, readonly) PXSettingsConfigurationsSource *source;

- (void).cxx_destruct;
- (void)_handleDone:(id)arg1;
- (void)_promptNameWithAlertTitle:(id)arg1 message:(id)arg2 proposedNamed:(id)arg3 confirmationButtonTitle:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_promptedNameDidChange:(id)arg1;
- (void)_shareConfigurations:(id)arg1;
- (id)_titleForSettings:(id)arg1;
- (id)_untitledName;
- (void)_updateAvailableActions;
- (bool)areAllActionsAvailable;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSettings:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)promptConfirmAction;
- (id)promptTextField;
- (void)setAreAllActionsAvailable:(bool)arg1;
- (void)setPromptConfirmAction:(id)arg1;
- (void)setPromptTextField:(id)arg1;
- (id)settings;
- (void)settingsConfigurationSource:(id)arg1 didChange:(id)arg2;
- (void)settingsConfigurationSource:(id)arg1 performChanges:(id /* block */)arg2;
- (id)source;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
