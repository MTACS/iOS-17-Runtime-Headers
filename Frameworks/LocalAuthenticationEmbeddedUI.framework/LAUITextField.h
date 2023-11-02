
@interface LAUITextField : UITextField {
    bool  _shouldHideEditMenu;
    bool  _shouldHideSelectionRects;
}

@property (nonatomic) bool shouldHideEditMenu;
@property (nonatomic) bool shouldHideSelectionRects;

- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (id)selectionRectsForRange:(id)arg1;
- (void)setShouldHideEditMenu:(bool)arg1;
- (void)setShouldHideSelectionRects:(bool)arg1;
- (bool)shouldHideEditMenu;
- (bool)shouldHideSelectionRects;

@end
