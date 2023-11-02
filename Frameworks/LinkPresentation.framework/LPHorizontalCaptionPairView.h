
@interface LPHorizontalCaptionPairView : LPComponentView <LPContentInsettable, LPSubtitleButtonContainer, LPTextStyleable> {
    long long  _balancingMode;
    LPSubtitleButtonView * _button;
    LPCaptionButtonPresentationProperties * _buttonProperties;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    NSRegularExpression * _emphasizedTextExpression;
    LPTextView * _leftView;
    long long  _overrideMaximumNumberOfLines;
    LPTextView * _rightView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSRegularExpression *emphasizedTextExpression;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long overrideMaximumNumberOfLines;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutCaptionPairForSize:(struct CGSize { double x1; double x2; })arg1 applyingLayout:(bool)arg2;
- (double)ascender;
- (long long)computedNumberOfLines;
- (double)descender;
- (id)emphasizedTextExpression;
- (double)firstLineLeading;
- (id)initWithHost:(id)arg1;
- (id)initWithHost:(id)arg1 leadingText:(id)arg2 leadingStyle:(id)arg3 trailingText:(id)arg4 trailingStyle:(id)arg5 button:(id)arg6 balancingMode:(long long)arg7;
- (double)lastLineDescent;
- (void)layoutComponentView;
- (long long)overrideMaximumNumberOfLines;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setEmphasizedTextExpression:(id)arg1;
- (void)setOverrideMaximumNumberOfLines:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitleButton;

@end
