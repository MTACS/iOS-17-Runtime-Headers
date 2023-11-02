
@interface ILClassificationExtensionShellViewController : UIViewController {
    <ILClassificationExtensionShellViewControllerDelegate> * _delegate;
    UIBarButtonItem * _doneButton;
    bool  _enableFinishOption;
    UIViewController * _extensionViewController;
}

@property (nonatomic) <ILClassificationExtensionShellViewControllerDelegate> *delegate;
@property (nonatomic, retain) UIBarButtonItem *doneButton;
@property (nonatomic) bool enableFinishOption;
@property (nonatomic, retain) UIViewController *extensionViewController;

- (void).cxx_destruct;
- (id)delegate;
- (void)displayExtensionViewController:(id)arg1 forExtension:(id)arg2;
- (id)doneButton;
- (bool)enableFinishOption;
- (id)extensionViewController;
- (void)setDelegate:(id)arg1;
- (void)setDoneButton:(id)arg1;
- (void)setEnableFinishOption:(bool)arg1;
- (void)setExtensionViewController:(id)arg1;
- (void)userDidCancel;
- (void)userDidFinish;
- (void)viewDidLoad;

@end
