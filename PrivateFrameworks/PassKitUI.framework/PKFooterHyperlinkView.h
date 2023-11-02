
@interface PKFooterHyperlinkView : UITableViewHeaderFooterView <UITextViewDelegate> {
    NSString * _text;
    PKHyperlinkTextView * _textView;
}

@property (nonatomic, copy) id /* block */ action;
@property (nonatomic, copy) NSAttributedString *attributedText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *linkTextColor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)action;
- (id)addFooterStyleAttributes:(id)arg1;
- (id)attributedText;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (id)linkTextColor;
- (void)setAction:(id /* block */)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setLinkTextColor:(id)arg1;
- (void)setText:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)text;

@end
