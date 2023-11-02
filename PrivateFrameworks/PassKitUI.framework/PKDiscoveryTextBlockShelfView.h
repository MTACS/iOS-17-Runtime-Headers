
@interface PKDiscoveryTextBlockShelfView : PKDiscoveryShelfView <UITextViewDelegate> {
    NSAttributedString * _attributedText;
    PKDiscoveryTextBlockShelf * _shelf;
    UITextView * _textView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_attributedStringForBody:(id)arg1 lede:(id)arg2 headerline:(id)arg3;
- (id)_textColorForBody;
- (id)_textColorForHeaderline;
- (id)_textColorForLede;
- (id)_uiFontTextStyle;
- (id)initWithShelf:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;

@end
