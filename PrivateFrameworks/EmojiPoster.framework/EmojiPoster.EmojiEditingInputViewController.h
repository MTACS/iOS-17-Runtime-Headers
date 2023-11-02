
@interface EmojiPoster.EmojiEditingInputViewController : UIViewController <UITextFieldDelegate> {
    void delegate;
    void emoji;
    void emojiCountLabel;
    void keyboardVC;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void navBar;
    void textField;
}

- (void).cxx_destruct;
- (void)didTapCloseButton;
- (void)didTapDeleteButton;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)viewDidLoad;
- (void)viewIsAppearing:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
