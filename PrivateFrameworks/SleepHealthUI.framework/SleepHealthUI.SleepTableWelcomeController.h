
@interface SleepHealthUI.SleepTableWelcomeController : OBTableWelcomeController {
    void hasSystemMargins;
}

- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 adoptTableViewScrollView:(bool)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 adoptTableViewScrollView:(bool)arg4;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;

@end
