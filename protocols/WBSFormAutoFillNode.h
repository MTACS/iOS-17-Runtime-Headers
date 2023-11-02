
@protocol WBSFormAutoFillNode <NSObject>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })elementBounds;
- (long long)htmlInputElementAutoFillButtonType;
- (long long)htmlInputElementLastAutoFillButtonType;
- (id)initWithJSWrapper:(struct OpaqueJSValue { }*)arg1 inContext:(struct OpaqueJSContext { }*)arg2;
- (bool)isHTMLInputElementUserEdited;
- (bool)isHTMLTextAreaElementUserEdited;
- (void)setHTMLInputElementAutoFilledAndObscured:(bool)arg1;
- (void)setHTMLInputElementAutoFilledAndViewable:(bool)arg1;
- (void)setHTMLInputElementAutoFilledWithAutomaticStrongPassword:(bool)arg1;
- (void)setHTMLInputElementAutofilled:(bool)arg1;
- (void)setSpinnerVisibilityOnHTMLInputElement:(bool)arg1;

@optional

- (void)setHTMLInputElementSpellCheckEnabled:(bool)arg1;

@end
