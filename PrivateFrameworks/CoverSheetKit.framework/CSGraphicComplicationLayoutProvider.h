
@interface CSGraphicComplicationLayoutProvider : NSObject

+ (id)_framesForLayoutElements:(id)arg1 layoutStyle:(long long)arg2 containerSize:(struct CGSize { double x1; double x2; })arg3;
+ (long long)_insertionIndexForElement:(id)arg1 withExistingElements:(id)arg2 proposedInsertionIndex:(long long)arg3;
+ (bool)_isMaglevApplicable;
+ (id)_rowFramesForLayoutElements:(id)arg1 containerSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)_sidebarFramesForLayoutElements:(id)arg1 containerSize:(struct CGSize { double x1; double x2; })arg2;
+ (bool)canAddElement:(id)arg1 toElements:(id)arg2;
+ (bool)canAddElement:(id)arg1 toElements:(id)arg2 layoutStyle:(long long)arg3;
+ (double)complicationContainerHeight;
+ (double)complicationEdgeInset;
+ (double)complicationHeight;
+ (id)complicationLayoutForElements:(id)arg1 containerSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)complicationLayoutForElements:(id)arg1 containerSize:(struct CGSize { double x1; double x2; })arg2 draggedElement:(id)arg3 draggedElementPosition:(struct CGPoint { double x1; double x2; })arg4;
+ (id)complicationLayoutForElements:(id)arg1 layoutStyle:(long long)arg2 containerSize:(struct CGSize { double x1; double x2; })arg3;
+ (id)complicationLayoutForElements:(id)arg1 layoutStyle:(long long)arg2 containerSize:(struct CGSize { double x1; double x2; })arg3 draggedElement:(id)arg4 draggedElementPosition:(struct CGPoint { double x1; double x2; })arg5;
+ (double)containerEdgeInset;
+ (double)gridUnitSize;
+ (long long)insertionIndexForElement:(id)arg1 withExistingElements:(id)arg2;
+ (double)interComplicationSpacing;
+ (double)interComplicationSpacingExcludingInnerInset;
+ (long long)sidebarGridHeight;

@end
