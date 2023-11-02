
@interface _UISearchBarFieldEditor : UIFieldEditor {
    struct { 
        unsigned int inLayoutSubviews : 1; 
    }  _flags;
}

- (void)_updateTokenViews;
- (void)activateEditor;
- (void)deactivateEditorDiscardingEdits:(bool)arg1;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(bool)arg3;
- (bool)layoutManager:(id)arg1 shouldSetLineFragmentRect:(inout struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 lineFragmentUsedRect:(inout struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 baselineOffset:(inout double*)arg4 inTextContainer:(id)arg5 forGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6;
- (void)layoutSubviews;
- (id)selectionRectsForRange:(id)arg1;

@end
