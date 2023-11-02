
@protocol PKTextAttachmentDrawingViewProviderView

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })drawingTextAttachmentBounds;
- (id)initWithAttachment:(NSTextAttachment *)arg1 drawingClass:(Class)arg2 inserted:(bool)arg3;
- (NSArray *)tiledViewAttachmentViews;
- (PKAttachmentView *)topLevelAttachmentView;

@optional

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })drawingTextAttachmentBoundsForContainerView:(UIView *)arg1;

@end
