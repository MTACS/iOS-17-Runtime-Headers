
@protocol PKLinedPaperLayerDelegate <NSObject>

@required

- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })drawingTransform;
- (UIView *)linedPaperLayerAttachmentContainerView:(PKLinedPaperLayer *)arg1;
- (PKLinedPaper *)linedPaperLayerLinedPaper:(PKLinedPaperLayer *)arg1;
- (UITraitCollection *)linedPaperLayerTraitCollection:(PKLinedPaperLayer *)arg1;

@end
