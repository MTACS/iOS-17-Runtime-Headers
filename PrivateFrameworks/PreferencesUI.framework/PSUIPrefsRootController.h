
@interface PSUIPrefsRootController : PSRootController {
    PSUIPrefsListController * _rootListController;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2;
- (void)loadView;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (id)rootListController;
- (void)setViewControllers:(id)arg1 animated:(bool)arg2;
- (void)setupControllerForToolbar:(id)arg1;

@end
