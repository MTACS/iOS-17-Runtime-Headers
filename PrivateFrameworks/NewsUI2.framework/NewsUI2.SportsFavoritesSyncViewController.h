
@interface NewsUI2.SportsFavoritesSyncViewController : OBWelcomeController {
    void app;
    void conclusion;
    void confirmationButton;
    void deferButton;
    void eventHandler;
    void imageView;
    void styler;
}

- (void).cxx_destruct;
- (void)doConfirmationAction;
- (void)doDeferAction;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 contentLayout:(long long)arg4;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
