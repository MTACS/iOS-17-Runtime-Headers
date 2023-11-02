
@interface OBSetupAssistantMultitaskingViewController : OBWelcomeController

- (double)_headerTopOffset;
- (void)addMultitaskingBulletedListItemWithTitle:(id)arg1 description:(id)arg2 symbolName:(id)arg3;
- (double)contentViewsTopPaddingFromBottomOfHeader;
- (id)init;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 contentLayout:(long long)arg4;
- (void)setupBulletedListIfNeeded;
- (void)viewDidLoad;

@end
