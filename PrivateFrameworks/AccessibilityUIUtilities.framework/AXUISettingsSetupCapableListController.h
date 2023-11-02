
@interface AXUISettingsSetupCapableListController : PSListController {
    bool  _inSetup;
}

@property (nonatomic) bool inSetup;

- (id)createWelcomeControllerWithAXSettingsController:(id)arg1 title:(id)arg2;
- (void)dealloc;
- (void)filterBuddy:(id)arg1;
- (bool)inSetup;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)reload;
- (void)setAllSpecifiersUnsearchable:(id)arg1;
- (void)setInSetup:(bool)arg1;
- (void)setupLongTitleSpecifiers:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
