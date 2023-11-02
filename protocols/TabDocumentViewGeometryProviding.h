
@protocol TabDocumentViewGeometryProviding <NSObject>

@required

- (bool)inElementFullscreenForTabDocumentView:(TabDocumentView *)arg1;
- (struct CGSize { double x1; double x2; })maximumUnobscuredWebViewLayoutSizeForTabDocumentView:(TabDocumentView *)arg1;
- (double)minimumEffectiveDeviceWidthForTabDocumentView:(TabDocumentView *)arg1;
- (struct CGSize { double x1; double x2; })minimumWebViewLayoutSizeForTabDocumentView:(TabDocumentView *)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })obscuredScrollViewInsetsForTabDocumentView:(TabDocumentView *)arg1 unobscuredSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (struct SFScrollIndicatorInsets { struct UIEdgeInsets { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; })scrollIndicatorInsetsForTabDocumentView:(TabDocumentView *)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })scrollViewContentInsetAdjustmentsForTabDocumentView:(TabDocumentView *)arg1;
- (bool)shouldFreezeWebViewUpdatesForTabDocumentView:(TabDocumentView *)arg1;
- (void)tabDocumentViewDidUpdateDistanceScrolled:(TabDocumentView *)arg1;

@optional

- (bool)shouldModifyWebViewGeometryForTabDocumentView:(TabDocumentView *)arg1;
- (unsigned long long)tabDocumentView:(TabDocumentView *)arg1 contentOffsetAdjustmentEdgeWithPreviousContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;

@end
