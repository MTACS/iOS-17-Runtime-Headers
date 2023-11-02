
@interface PKLinedPaperLayer : CALayer {
    <PKLinedPaperLayerDelegate> * _linedPaperLayerDelegate;
}

@property (nonatomic, readonly) <PKLinedPaperLayerDelegate> *linedPaperLayerDelegate;

- (void).cxx_destruct;
- (id)_attachmentContainerView;
- (id)_linedPaper;
- (id)_traitCollection;
- (id)initWithLinedPaperLayerDelegate:(id)arg1;
- (id)linedPaperLayerDelegate;
- (void)updateLinesFromAttachmentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateSublayersFromAttachmentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
