
@interface ICInlineCanvasTextAttachment : ICBaseTextAttachment

@property (nonatomic, readonly) NSArray *attachmentViews;
@property (nonatomic, readonly) NSArray *inlineViews;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (id)attachmentViews;
- (id)imageForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 attributes:(id)arg2 location:(id)arg3 textContainer:(id)arg4;
- (id)inlineViews;
- (void)setViewSelected:(bool)arg1 inWindow:(id)arg2;
- (void)updatePaletteVisibility;
- (void)updatePaletteVisibilityToVisible:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/NotesEditor.framework/NotesEditor

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attachmentBoundsForAttributes:(id)arg1 location:(id)arg2 textContainer:(id)arg3 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 position:(struct CGPoint { double x1; double x2; })arg5;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 glyphPosition:(struct CGPoint { double x1; double x2; })arg3 characterIndex:(unsigned long long)arg4;

@end
