
@interface ICNoteEditorToolbarDisclosureView : UIView {
    UIImageView * _closeImageView;
    bool  _closeState;
    ICNoteEditorToolbarPlusView * _openView;
}

@property (nonatomic, retain) UIImageView *closeImageView;
@property (nonatomic) bool closeState;
@property (nonatomic, readonly) UIColor *itemColor;
@property (nonatomic, retain) ICNoteEditorToolbarPlusView *openView;

- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (id)closeImageView;
- (bool)closeState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isAccessibilityElement;
- (id)itemColor;
- (id)openView;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setCloseImageView:(id)arg1;
- (void)setCloseState:(bool)arg1;
- (void)setOpenView:(id)arg1;

@end
