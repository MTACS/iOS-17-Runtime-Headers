
@interface AUDeveloperSettingsOverrideController : PSListController {
    PSSpecifier * _customerSpecifier;
    PSSpecifier * _customerStagingSpecifier;
    PSSpecifier * _descriptionSpecifier;
    PSSpecifier * _locationRadioGroup;
    PSSpecifier * _publicSeedSpecifier;
}

- (void).cxx_destruct;
- (id)specifiers;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateDescriptionForSpecifier:(id)arg1;
- (void)viewDidLoad;

@end
