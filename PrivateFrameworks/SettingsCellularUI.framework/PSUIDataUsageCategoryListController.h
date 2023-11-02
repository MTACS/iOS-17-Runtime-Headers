
@interface PSUIDataUsageCategoryListController : PSListController {
    PSUIDataUsageCategorySpecifier * _parentSpecifier;
    PSSpecifier * _spinnerSpecifier;
}

@property (nonatomic, retain) PSUIDataUsageCategorySpecifier *parentSpecifier;
@property (nonatomic, retain) PSSpecifier *spinnerSpecifier;

- (void).cxx_destruct;
- (id)init;
- (id)parentSpecifier;
- (void)setParentSpecifier:(id)arg1;
- (void)setSpinnerSpecifier:(id)arg1;
- (bool)shouldReloadSpecifiersOnResume;
- (bool)shouldShowSpinner;
- (id)specifiers;
- (id)spinnerSpecifier;

@end
