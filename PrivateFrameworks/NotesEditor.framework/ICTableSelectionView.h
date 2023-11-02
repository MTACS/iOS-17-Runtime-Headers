
@interface ICTableSelectionView : UIView {
    <ICTableSelectionDelegate> * _delegate;
    bool  _shouldAvoidResigningFirstResponder;
}

@property (nonatomic) <ICTableSelectionDelegate> *delegate;
@property (nonatomic) bool shouldAvoidResigningFirstResponder;

- (void).cxx_destruct;
- (void)addColumnLeft:(id)arg1;
- (void)addColumnRight:(id)arg1;
- (void)addRowDown:(id)arg1;
- (void)addRowUp:(id)arg1;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)deletePressed:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)keyCommands;
- (id)preferredTintColor;
- (bool)resignFirstResponder;
- (void)setDelegate:(id)arg1;
- (void)setShouldAvoidResigningFirstResponder:(bool)arg1;
- (bool)shouldAvoidResigningFirstResponder;
- (void)strikethrough:(id)arg1;
- (void)toggleBoldface:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (void)updateAccentColor;
- (void)updateForAccessibilityDarkerSystemColors:(id)arg1;

@end
