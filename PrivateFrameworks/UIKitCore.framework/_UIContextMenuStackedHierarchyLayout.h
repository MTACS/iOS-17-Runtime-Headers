
@interface _UIContextMenuStackedHierarchyLayout : NSObject <_UIContextMenuHierarchyLayout> {
    _UIContextMenuView * _menuView;
}

@property (nonatomic) _UIContextMenuView *menuView;

- (void).cxx_destruct;
- (id)_metrics;
- (struct CGSize { double x1; double x2; })encompassingSize;
- (id)initWithMenuView:(id)arg1;
- (id)menuView;
- (void)navigateDownFromNode:(id)arg1 toNode:(id)arg2 alongsideAnimations:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)navigateUpFromNode:(id)arg1 toNode:(id)arg2 alongsideAnimations:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)performLayoutForComputingPreferredContentSize:(bool)arg1 withMaxContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (void)setMenuView:(id)arg1;

@end
