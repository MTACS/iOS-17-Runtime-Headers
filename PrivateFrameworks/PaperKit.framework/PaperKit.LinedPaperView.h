
@interface PaperKit.LinedPaperView : UIView <PKLinedPaperLayerDelegate> {
    void drawingTransform;
    void linedPaper;
    void linedPaperLayer;
}

@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } drawingTransform;

- (void).cxx_destruct;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })drawingTransform;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)linedPaperLayerAttachmentContainerView:(id)arg1;
- (id)linedPaperLayerLinedPaper:(id)arg1;
- (id)linedPaperLayerTraitCollection:(id)arg1;
- (void)setDrawingTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;

@end
