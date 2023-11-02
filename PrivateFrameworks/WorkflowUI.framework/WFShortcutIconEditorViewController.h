
@interface WFShortcutIconEditorViewController : UIViewController {
    void delegate;
    void showsDoneButton;
    void workflow;
}

@property (nonatomic) <WFShortcutIconEditorViewControllerDelegate> *delegate;
@property (nonatomic) bool showsDoneButton;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithWorkflow:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShowsDoneButton:(bool)arg1;
- (bool)showsDoneButton;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
