
@interface EKEventDetailExtendedTextViewController : UIViewController <EKEditItemViewControllerProtocol> {
    EKEvent * _event;
    NSString * _text;
    NSString * _textToCopy;
    UITextView * _textView;
}

@property (nonatomic) <EKEditItemViewControllerDelegate> *editDelegate;
@property (nonatomic) bool editItemShouldBeAskedForInjectableViewController;
@property (nonatomic) bool presentModally;
@property (nonatomic) bool useCustomBackButton;

- (void).cxx_destruct;
- (void)_share:(id)arg1;
- (void)_updateConstraints;
- (id)initWithText:(id)arg1 title:(id)arg2 event:(id)arg3 textForCopyAction:(id)arg4;
- (void)loadTextView;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)updateTextView;
- (void)viewDidLoad;
- (void)viewSafeAreaInsetsDidChange;

@end
