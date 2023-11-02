
@interface PKDashboardFooterTextView : PKDashboardCollectionViewCell <UITextViewDelegate> {
    id /* block */  _action;
    NSString * _footerText;
    unsigned int  _horizontalAlignment;
    bool  _isTemplateLayout;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _linkRange;
    UIColor * _linkTextColor;
    UITextView * _textView;
    bool  _useLargeBottomInset;
}

@property (nonatomic, copy) id /* block */ action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *footerText;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int horizontalAlignment;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } linkRange;
@property (nonatomic, retain) UIColor *linkTextColor;
@property (readonly) Class superclass;
@property (nonatomic) bool useLargeBottomInset;

+ (double)defaultHorizontalInset;

- (void).cxx_destruct;
- (bool)_isLinkRangeValid;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateText;
- (id /* block */)action;
- (void)createSubviews;
- (id)footerText;
- (unsigned int)horizontalAlignment;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })linkRange;
- (id)linkTextColor;
- (void)resetFonts;
- (void)setAction:(id /* block */)arg1;
- (void)setFooterText:(id)arg1;
- (void)setHorizontalAlignment:(unsigned int)arg1;
- (void)setLinkRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setLinkTextColor:(id)arg1;
- (void)setUseLargeBottomInset:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (bool)useLargeBottomInset;

@end
