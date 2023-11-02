
@interface PencilEducationElementTextField : UITextField {
    NSSet * _allowedCalloutActions;
    bool  _ignoreScribbleInsertText;
}

@property (nonatomic, retain) NSSet *allowedCalloutActions;
@property (nonatomic) bool ignoreScribbleInsertText;

- (void).cxx_destruct;
- (long long)_textInputSource;
- (id)allowedCalloutActions;
- (void)buildMenuWithBuilder:(id)arg1;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })editingRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)ignoreScribbleInsertText;
- (void)insertText:(id)arg1 alternatives:(id)arg2 style:(long long)arg3;
- (void)setAllowedCalloutActions:(id)arg1;
- (void)setIgnoreScribbleInsertText:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
