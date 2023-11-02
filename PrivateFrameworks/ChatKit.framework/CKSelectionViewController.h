
@interface CKSelectionViewController : UIViewController {
    <CKSelectionViewControllerDelegate> * _delegate;
}

@property (nonatomic) <CKSelectionViewControllerDelegate> *delegate;

- (void).cxx_destruct;
- (id)_defaultConfigurationWithSelectionCount:(long long)arg1;
- (id)_deleteAction;
- (id)_deleteAllAction;
- (id)_junkFilteringConfigurationWithSelectionCount:(long long)arg1 secondaryText:(id)arg2;
- (id)_recentlyDeletedConfigurationWithSelectionCount:(long long)arg1 secondaryText:(id)arg2;
- (id)_recoverAction;
- (void)_updateContentUnavailableConfigurationUsingState:(id)arg1;
- (void)_updatePropertiesAsDeleteAllButton:(id)arg1;
- (void)_updatePropertiesAsDeleteButton:(id)arg1;
- (void)_updatePropertiesAsDestructiveButton:(id)arg1 buttonText:(id)arg2;
- (void)_updatePropertiesAsRecoverButton:(id)arg1;
- (id)delegate;
- (void)handleNewComposeSelection;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;

@end
