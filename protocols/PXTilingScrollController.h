
@protocol PXTilingScrollController <NSObject>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })activeRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })constrainedVisibleRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBounds;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (struct CGSize { double x1; double x2; })presentedContentSize;
- (struct CGSize { double x1; double x2; })referenceSize;
- (bool)respectsContentZOrder;
- (PXTilingScrollInfo *)scrollInfo;
- (void)setContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNeedsUpdate;
- (void)setPresentedContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRespectsContentZOrder:(bool)arg1;
- (void)setScrollInfo:(PXTilingScrollInfo *)arg1;
- (void)setUpdateDelegate:(id <PXTilingScrollControllerUpdateDelegate>)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetRect;
- (<PXTilingScrollControllerUpdateDelegate> *)updateDelegate;
- (void)updateIfNeeded;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;

@end
