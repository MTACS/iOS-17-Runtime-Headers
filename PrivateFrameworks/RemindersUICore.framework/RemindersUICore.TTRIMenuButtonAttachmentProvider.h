
@interface RemindersUICore.TTRIMenuButtonAttachmentProvider : NSTextAttachmentViewProvider {
    void darkBackgroundAlpha;
    void lightBackgroundAlpha;
}

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attachmentBoundsForAttributes:(id)arg1 location:(id)arg2 textContainer:(id)arg3 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 position:(struct CGPoint { double x1; double x2; })arg5;
- (id)initWithTextAttachment:(id)arg1 parentView:(id)arg2 textLayoutManager:(id)arg3 location:(id)arg4;
- (void)loadView;

@end
