
@interface TSWPEquationLayout : TSDLayout {
    bool  _equationIsValid;
    <EQKitLayout> * _equationLayout;
    <EQKitLayoutContext> * _equationLayoutContext;
    struct CGColor { } * _textColor;
    TSDShadow * _textShadow;
}

@property (nonatomic, readonly) bool equationIsValid;
@property (nonatomic, readonly) <EQKitLayout> *equationLayout;
@property (nonatomic, retain) <EQKitLayoutContext> *equationLayoutContext;
@property (nonatomic, readonly) struct CGColor { }*textColor;
@property (nonatomic, readonly) TSDShadow *textShadow;

- (id)computeLayoutGeometry;
- (void)dealloc;
- (bool)equationIsValid;
- (id)equationLayout;
- (id)equationLayoutContext;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForCulling;
- (double)inlineCenteredAlignmentOffset;
- (double)inlineVerticalOffset;
- (void)setEquationLayoutContext:(id)arg1;
- (struct CGColor { }*)textColor;
- (id)textShadow;
- (void)validate;
- (bool)wantsRoundedInlinePosition;
- (void)willLayoutInlineWithTextAttributes:(struct __CFDictionary { }*)arg1 columnWidth:(double)arg2;

@end
