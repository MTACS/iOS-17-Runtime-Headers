
@interface STContentPrivacyMediaRestrictionsDetailController : PSListController {
    NSObject<STContentPrivacyViewModelCoordinator> * _coordinator;
    STRegionRatings * _regionRatings;
}

@property (nonatomic, retain) NSObject<STContentPrivacyViewModelCoordinator> *coordinator;
@property (retain) STRegionRatings *regionRatings;

- (void).cxx_destruct;
- (id)_getSpecifierValueForItem:(id)arg1 viewModel:(id)arg2 restrictionValues:(id)arg3;
- (id)coordinator;
- (void)dealloc;
- (id)defaultLinkListSpecifierWithConfiguration:(id)arg1 key:(id)arg2;
- (id)defaultLinkListSpecifierWithConfiguration:(id)arg1 key:(id)arg2 titlesByValue:(id)arg3 sortByTitle:(bool)arg4;
- (id)defaultLinkListSpecifierWithItem:(id)arg1 titlesByValue:(id)arg2 sortByTitle:(bool)arg3;
- (id)defaultSwitchSpecifierWithConfiguration:(id)arg1 key:(id)arg2;
- (id)getItemSpecifierValue:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRegionRatings:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)radioGroupSpecifierWithName:(id)arg1 footerText:(id)arg2 item:(id)arg3;
- (id)regionRatings;
- (void)setCoordinator:(id)arg1;
- (void)setItemSpecifierValue:(id)arg1 specifier:(id)arg2;
- (void)setRegionRatings:(id)arg1;
- (void)showWebFilterRestrictions:(id)arg1;
- (id)specifiers;

@end
