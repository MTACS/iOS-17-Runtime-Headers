
@interface SwiftUI.TextEditorTextView : SwiftUI.UIKitTextView {
    void $__lazy_storage_$_helper;
    void findContext;
}

- (void).cxx_destruct;
- (void)findInteraction:(id)arg1 didBeginFindSession:(id)arg2;
- (void)findInteraction:(id)arg1 didEndFindSession:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (bool)supportsTextReplacement;

@end
