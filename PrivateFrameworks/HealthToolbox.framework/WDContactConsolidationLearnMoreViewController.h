
@interface WDContactConsolidationLearnMoreViewController : HKViewController {
    id /* block */  _dismissHandler;
    UITextView * _textView;
}

@property (nonatomic, copy) id /* block */ dismissHandler;
@property (nonatomic, retain) UITextView *textView;

- (void).cxx_destruct;
- (void)createDismissButton;
- (void)createTextView;
- (void)dismissButtonPressed:(id)arg1;
- (id /* block */)dismissHandler;
- (void)setDismissHandler:(id /* block */)arg1;
- (void)setTextView:(id)arg1;
- (id)textView;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
