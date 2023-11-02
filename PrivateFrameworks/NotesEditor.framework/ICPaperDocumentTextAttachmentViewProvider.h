
@interface ICPaperDocumentTextAttachmentViewProvider : NSTextAttachmentViewProvider {
    void updatedLocationForRecycledViewProvider;
}

@property (nonatomic, retain) <NSTextLocation> *location;
@property (nonatomic, retain) <NSTextLocation> *updatedLocationForRecycledViewProvider;

+ (void)registerIfNecessary;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attachmentBoundsForAttributes:(id)arg1 location:(id)arg2 textContainer:(id)arg3 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 position:(struct CGPoint { double x1; double x2; })arg5;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 glyphPosition:(struct CGPoint { double x1; double x2; })arg3 characterIndex:(long long)arg4;
- (id)initWithTextAttachment:(id)arg1 parentView:(id)arg2 textLayoutManager:(id)arg3 location:(id)arg4;
- (void)loadView;
- (id)location;
- (void)setLocation:(id)arg1;
- (void)setUpdatedLocationForRecycledViewProvider:(id)arg1;
- (id)updatedLocationForRecycledViewProvider;

@end
