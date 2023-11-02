
@interface HealthExperienceUI.SpecifierViewController : PSListController {
    void dataSource;
    void delegate;
    void shouldReloadSpecifiersAfterSelection;
    void shouldReloadSpecifiersOnViewWillAppear;
}

- (void).cxx_destruct;
- (void)dismissNavigationController;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)specifiers;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableViewStyle;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
