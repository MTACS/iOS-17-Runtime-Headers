
@interface ActionButtonConfigurationUI.BCShortcutsConfigurationViewController : WFStaccatoConfigurationViewController <WFStaccatoConfigurationViewControllerDelegate> {
    void completionHandler;
    void presenter;
}

- (void).cxx_destruct;
- (void)configurationController:(id)arg1 didFinishWithAction:(id)arg2 error:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfigurationContext:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
