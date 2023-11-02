
@interface AAUIOBTableWelcomeController : OBTableWelcomeController {
    <AAUIOBTableWelcomeControllerDelegate> * _delegate;
    UIView * _helpLinkFooterView;
    OBTrayButton * _primaryButton;
    OBTrayButton * _secondaryButton;
    <AAUIOBTableWelcomeControllerViewModelProtocol> * _viewModel;
}

@property (nonatomic) <AAUIOBTableWelcomeControllerDelegate> *delegate;
@property (nonatomic, retain) OBTrayButton *primaryButton;
@property (nonatomic, retain) OBTrayButton *secondaryButton;

- (void).cxx_destruct;
- (void)_addPrimaryButtonWithViewModel:(id)arg1;
- (void)_addSecondaryButtonWithViewModel:(id)arg1;
- (void)_addSecondaryViewWithViewModel:(id)arg1;
- (void)_delegate_tableViewControllerDidTapSecondaryButton;
- (void)_delegate_tableWelcomeViewControllerDidTapPrimaryButton;
- (id)_helpLinkFooterView;
- (void)_openHelpLink;
- (void)_setupTableViewWithViewModel:(id)arg1;
- (id)delegate;
- (id)initWithViewModel:(id)arg1;
- (id)primaryButton;
- (id)secondaryButton;
- (void)setDelegate:(id)arg1;
- (void)setPrimaryButton:(id)arg1;
- (void)setSecondaryButton:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end
