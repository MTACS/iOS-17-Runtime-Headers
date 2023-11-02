
@interface TranslationUI.LanguagesViewController : UIViewController {
    void delegate;
    void requireOnDevice;
    void segmentedControl;
    void selectionModel;
    void showsCloseButton;
    void subscriptions;
}

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)closeActionWithSender:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)updateSelectedTarget;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
