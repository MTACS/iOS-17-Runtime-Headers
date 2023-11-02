
@interface _UIContextMenuCascadedHierarchyLayout : NSObject <_UIContextMenuHierarchyLayout> {
    bool  _isAnimatingMenuAddition;
    _UIContextMenuView * _menuView;
}

@property (nonatomic) bool isAnimatingMenuAddition;
@property (nonatomic) _UIContextMenuView *menuView;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_cascadingAreaBounds;
- (id)_metrics;
- (struct CAPoint3D { double x1; double x2; double x3; })_submenuOffsetForCascadingLeft:(bool)arg1;
- (struct CGSize { double x1; double x2; })encompassingSize;
- (id)initWithMenuView:(id)arg1;
- (bool)isAnimatingMenuAddition;
- (id)menuView;
- (void)navigateDownFromNode:(id)arg1 toNode:(id)arg2 alongsideAnimations:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)navigateUpFromNode:(id)arg1 toNode:(id)arg2 alongsideAnimations:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)performLayoutForComputingPreferredContentSize:(bool)arg1 withMaxContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (void)setIsAnimatingMenuAddition:(bool)arg1;
- (void)setMenuView:(id)arg1;

@end
