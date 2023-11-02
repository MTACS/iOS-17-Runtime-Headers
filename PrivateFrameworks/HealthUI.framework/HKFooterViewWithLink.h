
@interface HKFooterViewWithLink : UITableViewHeaderFooterView <UITextViewDelegate> {
    UITextView * _footerTextView;
    <UITextViewDelegate> * _textViewDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UITextView *footerTextView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) <UITextViewDelegate> *textViewDelegate;

+ (id)defaultReuseIdentifier;

- (void).cxx_destruct;
- (id)_createAttributedMarkdown:(id)arg1;
- (id)_createAttributedTextWithFullText:(id)arg1 linkRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 link:(id)arg3;
- (void)_setUpFooterTextViewWithBodyText:(id)arg1 linkText:(id)arg2 link:(id)arg3;
- (void)_setUpFooterTextViewWithFullText:(id)arg1 linkRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 link:(id)arg3;
- (void)_setUpTextView;
- (void)_setupConstraints;
- (id)footerTextView;
- (id)getTextViewDelegate;
- (id)initWithReuseIdentifier:(id)arg1 bodyText:(id)arg2 linkText:(id)arg3 link:(id)arg4;
- (id)initWithReuseIdentifier:(id)arg1 fullText:(id)arg2 linkRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 link:(id)arg4;
- (id)initWithReuseIdentifier:(id)arg1 markdown:(id)arg2;
- (void)setFooterTextView:(id)arg1;
- (void)setTextViewDelegate:(id)arg1;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (id)textViewDelegate;
- (void)updateWithMarkdown:(id)arg1;

@end
