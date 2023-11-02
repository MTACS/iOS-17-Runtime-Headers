
@interface MULinkView : UIView <UITextViewDelegate> {
    id /* block */  _selectionBlock;
    UITextView * _textView;
}

@property (nonatomic, retain) NSAttributedString *attributedText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long numberOfLines;
@property (nonatomic, copy) id /* block */ selectionBlock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setupLinkView;
- (void)_updateForButtonShapeStatusChange;
- (void)_updateTintColor;
- (id)attributedText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)numberOfLines;
- (id /* block */)selectionBlock;
- (void)setAttributedText:(id)arg1;
- (void)setNumberOfLines:(unsigned long long)arg1;
- (void)setSelectionBlock:(id /* block */)arg1;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (void)textViewDidChangeSelection:(id)arg1;
- (bool)textViewShouldBeginEditing:(id)arg1;

@end
