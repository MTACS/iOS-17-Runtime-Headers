
@interface _TtC8PaperKitP33_2B8C5C91434EFF0A5A4BB617ED0FC81826AKControllerDelegateHelper : NSObject <AKControllerDelegateProtocol>

- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromModelToOverlayWithPageIndex:(long long)arg2 forAnnotationController:(id)arg3;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromOverlayToModelWithPageIndex:(long long)arg2 forAnnotationController:(id)arg3;
- (id)init;
- (void)installDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(long long)arg2 forAnnotationController:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maxPageRectWithPageIndex:(long long)arg1 forAnnotationController:(id)arg2;
- (id)newContentSnapshotPDFDataIncludingAdornments:(bool)arg1 atScale:(double)arg2 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 onOverlayAtPageIndex:(long long)arg4 forAnnotationController:(id)arg5;
- (id)popoverPresentingViewControllerForAnnotationController:(id)arg1;
- (id)undoManagerForAnnotationController:(id)arg1;
- (void)uninstallDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(long long)arg2 forAnnotationController:(id)arg3;
- (void)updateDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(long long)arg2 withPriority:(bool)arg3 forAnnotationController:(id)arg4;

@end
