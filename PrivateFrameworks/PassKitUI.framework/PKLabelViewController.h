
@interface PKLabelViewController : UIViewController {
    NSAttributedString * _attributedText;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    UITextView * _textView;
}

@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;

- (void).cxx_destruct;
- (id)attributedText;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)init;
- (id)initWithAttributedText:(id)arg1;
- (void)loadView;
- (void)setAttributedText:(id)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)viewWillLayoutSubviews;

@end
