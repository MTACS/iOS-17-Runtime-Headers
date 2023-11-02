
@interface CKComposeRecipientView : CNComposeRecipientTextView {
    <CKComposeRecipientViewDelegate> * layoutDelegate;
}

@property (nonatomic) <CKComposeRecipientViewDelegate> *layoutDelegate;

- (void).cxx_destruct;
- (void)atomTextViewDidBecomeFirstResponder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutDelegate;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutMargins;
- (void)layoutSubviews;
- (void)reset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLayoutDelegate:(id)arg1;

@end
