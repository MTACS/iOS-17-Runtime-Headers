
@interface ICHashtagViewController : UIViewController {
    <ICHashtagViewControllerDelegate> * _delegate;
    UITextField * _textField;
}

@property (nonatomic) <ICHashtagViewControllerDelegate> *delegate;
@property (nonatomic) UITextField *textField;

- (void).cxx_destruct;
- (void)createFutureHashtag:(id)arg1;
- (void)createHashtag:(id)arg1;
- (void)createUnknownInlineAttachment:(id)arg1;
- (id)delegate;
- (id)nibBundle;
- (void)setDelegate:(id)arg1;
- (void)setTextField:(id)arg1;
- (id)textField;
- (void)viewDidAppear:(bool)arg1;

@end
