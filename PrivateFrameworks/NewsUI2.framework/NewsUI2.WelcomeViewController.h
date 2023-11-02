
@interface NewsUI2.WelcomeViewController : UIViewController <UITextViewDelegate> {
    void colorStyler;
    void eventHandler;
    void keyFrame;
    void startedFirstAnimation;
    void toolbarManager;
    void viewAnimator;
    void viewProvider;
}

@property (nonatomic, readonly) bool canBecomeFirstResponder;
@property (nonatomic, readonly) NSArray *keyCommands;

- (void).cxx_destruct;
- (bool)canBecomeFirstResponder;
- (void)didTapContinueButton;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)keyCommands;
- (void)showPrivacyText;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
