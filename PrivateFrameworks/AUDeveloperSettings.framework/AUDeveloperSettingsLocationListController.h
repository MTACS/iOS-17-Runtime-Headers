
@interface AUDeveloperSettingsLocationListController : PSListController {
    PSSpecifier * _basejumperSpecifier;
    PSSpecifier * _customBasejumperBuildGroup;
    PSTextFieldSpecifier * _customBuildNumberSpecifier;
    PSSpecifier * _customBuildSpecifier;
    PSSpecifier * _customLivabilityBuildGroup;
    PSTextFieldSpecifier * _customTrainSpecifier;
    PSSpecifier * _customerSpecifier;
    PSSpecifier * _customerStagingSpecifier;
    unsigned long long  _defaultSpecifierListLength;
    PSSpecifier * _internalSeedSpecifier;
    NSIndexPath * _lastSelectedIndexPath;
    PSSpecifier * _livabilitySpecifier;
    PSSpecifier * _locationRadioGroup;
    PSSpecifier * _publicSeedSpecifier;
    bool  _showingCustomBasejumperBuildSpecifiers;
    bool  _showingCustomLivabilityBuildSpecifiers;
}

- (void).cxx_destruct;
- (id)buildName;
- (void)setBuildName:(id)arg1;
- (void)setTrainName:(id)arg1;
- (void)showCustomSpecifiersForSelectedSpecifier:(id)arg1 show:(bool)arg2 animated:(bool)arg3;
- (id)specifiers;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)trainName;
- (void)viewWillAppear:(bool)arg1;

@end
