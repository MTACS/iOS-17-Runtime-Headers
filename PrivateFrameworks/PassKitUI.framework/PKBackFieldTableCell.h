
@interface PKBackFieldTableCell : PKTableViewCell <UITextViewDelegate> {
    double  _cachedWidth;
    double  _computedHeight;
    PKPassField * _field;
    bool  _showLinks;
    bool  _useBridgeStyle;
    bool  _useLargeTitleFont;
    UITextView * _valueTextView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PKPassField *field;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool showLinks;
@property (readonly) Class superclass;
@property (nonatomic) bool useLargeTitleFont;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_detectLinks;
- (id)_linkTextAttributes;
- (void)_setupTextAttributes;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_textBounds;
- (void)dealloc;
- (id)field;
- (id)initWithField:(id)arg1 showLinks:(bool)arg2;
- (id)initWithField:(id)arg1 showLinks:(bool)arg2 useBridgeStyle:(bool)arg3;
- (void)layoutSubviews;
- (void)setField:(id)arg1;
- (void)setShowLinks:(bool)arg1;
- (void)setUseLargeTitleFont:(bool)arg1;
- (bool)showLinks;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)useLargeTitleFont;

@end
