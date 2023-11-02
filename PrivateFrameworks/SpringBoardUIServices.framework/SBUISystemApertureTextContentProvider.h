
@interface SBUISystemApertureTextContentProvider : NSObject <SBUISystemApertureContentColorStyling, SBUISystemApertureContentViewProviding> {
    <SBUISystemApertureContentViewContaining> * _contentContainer;
    SBUISystemApertureLabel * _label;
    UIView * _providedView;
    unsigned long long  _textSwapTransitionCount;
}

@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic, retain) UIColor *contentColor;
@property (nonatomic) <SBUISystemApertureContentViewContaining> *contentContainer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long numberOfLines;
@property (nonatomic, readonly) UIView *providedView;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long textAlignment;

+ (id)_textColorForTextStyle:(long long)arg1;

- (void).cxx_destruct;
- (id)_initWithText:(id)arg1 attributedText:(id)arg2 style:(long long)arg3;
- (id)attributedText;
- (id)contentColor;
- (id)contentContainer;
- (id)initWithAttributedText:(id)arg1 style:(long long)arg2;
- (id)initWithText:(id)arg1 style:(long long)arg2;
- (long long)numberOfLines;
- (id)providedView;
- (void)setAttributedText:(id)arg1;
- (void)setContentColor:(id)arg1;
- (void)setContentContainer:(id)arg1;
- (void)setFontWeight:(double)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)swapInText:(id)arg1 textColor:(id)arg2;
- (void)swapInText:(id)arg1 textColor:(id)arg2 fittingSize:(struct CGSize { double x1; double x2; })arg3;
- (id)text;
- (long long)textAlignment;

@end
