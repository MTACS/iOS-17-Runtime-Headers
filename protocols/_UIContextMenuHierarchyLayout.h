
@protocol _UIContextMenuHierarchyLayout

@required

- (struct CGSize { double x1; double x2; })encompassingSize;
- (id)initWithMenuView:(_UIContextMenuView *)arg1;
- (void)navigateDownFromNode:(void *)arg1 toNode:(void *)arg2 alongsideAnimations:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 15: _UIContextMenuNode *, _UIContextMenuNode *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*, id /* block */, void*, void, id /* block */, bool, bool, void*
- (void)navigateUpFromNode:(void *)arg1 toNode:(void *)arg2 alongsideAnimations:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 15: _UIContextMenuNode *, _UIContextMenuNode *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*, id /* block */, void*, void, id /* block */, bool, bool, void*
- (void)performLayoutForComputingPreferredContentSize:(bool)arg1 withMaxContainerSize:(struct CGSize { double x1; double x2; })arg2;

@end
