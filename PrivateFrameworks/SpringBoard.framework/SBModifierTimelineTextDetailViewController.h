
@interface SBModifierTimelineTextDetailViewController : UIViewController {
    NSAttributedString * _attributedText;
    NSString * _text;
    UITextView * _textView;
}

@property (nonatomic, retain) NSAttributedString *attributedText;
@property (nonatomic, retain) NSString *text;

- (void).cxx_destruct;
- (void)_copyText;
- (id)attributedText;
- (void)prepareForReuse;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
