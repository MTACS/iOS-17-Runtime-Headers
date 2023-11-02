
@interface OBTextWelcomeController : OBWelcomeController {
    OBTextBulletedList * _currentBulletedList;
    UIStackView * _stackView;
}

@property (nonatomic, retain) OBTextBulletedList *currentBulletedList;
@property (nonatomic, retain) UIStackView *stackView;

- (void).cxx_destruct;
- (void)addBulletedListItemWithTitle:(id)arg1 description:(id)arg2;
- (void)addBulletedListItemWithTitle:(id)arg1 description:(id)arg2 accessoryButton:(id)arg3;
- (void)addSectionWithHeader:(id)arg1 content:(id)arg2;
- (void)addSectionWithHeader:(id)arg1 content:(id)arg2 accessoryButton:(id)arg3;
- (id)currentBulletedList;
- (id)initWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 contentLayout:(long long)arg3;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 contentLayout:(long long)arg4;
- (void)loadView;
- (void)setCurrentBulletedList:(id)arg1;
- (void)setStackView:(id)arg1;
- (bool)shouldInlineButtonTray;
- (id)stackView;

@end
