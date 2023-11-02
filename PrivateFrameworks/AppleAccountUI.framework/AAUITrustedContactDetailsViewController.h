
@interface AAUITrustedContactDetailsViewController : PSListController {
    <AAUITrustedContactDetailsActionHandler> * _actionHandler;
    AALocalContactInfo * _contact;
    AATrustedContactDetailsViewModel * _viewModel;
}

- (void).cxx_destruct;
- (id)_bigContactSpecifier;
- (id)_destructiveActionRowSpecifier;
- (id)_detailsRowSpecifier;
- (void)_doDestructiveAction:(id)arg1;
- (void)_doPrimaryAction:(id)arg1;
- (void)_doSecondaryAction:(id)arg1;
- (id)_optionsGroupSpecifier;
- (id)_primaryActionRowSpecifier;
- (id)_secondaryActionRowSpecifier;
- (void)_showDestructiveAlert:(id)arg1;
- (id)initWithContact:(id)arg1 viewModel:(id)arg2 actionHandler:(id)arg3;
- (id)specifiers;

@end
