
@interface PKHyperlinkTextView : UITextView <UITextViewDelegate> {
    id /* block */  _action;
    bool  _isLinkUnderlined;
    UIColor * _linkForegroundColor;
}

@property (nonatomic, copy) id /* block */ action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isLinkUnderlined;
@property (nonatomic, retain) UIColor *linkForegroundColor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)action;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isLinkUnderlined;
- (id)linkForegroundColor;
- (void)setAction:(id /* block */)arg1;
- (void)setIsLinkUnderlined:(bool)arg1;
- (void)setLinkForegroundColor:(id)arg1;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (void)updateLinkTextAttributes;

@end
