
@interface FBKPowerLogTextViewController : UIViewController {
    NSString * _contents;
    UITextView * _textView;
}

@property (copy) NSString *contents;
@property UITextView *textView;

- (void).cxx_destruct;
- (id)contents;
- (void)displayText:(id)arg1;
- (void)setContents:(id)arg1;
- (void)setTextView:(id)arg1;
- (id)textView;
- (void)viewDidLoad;

@end
