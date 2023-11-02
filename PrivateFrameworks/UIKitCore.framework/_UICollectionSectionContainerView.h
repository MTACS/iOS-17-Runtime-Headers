
@interface _UICollectionSectionContainerView : UIView {
    _UICollectionViewSubviewRouter * _subviewRouter;
}

- (void).cxx_destruct;
- (void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;
- (void)_willRemoveSubview:(id)arg1;
- (void)bringSubviewToFront:(id)arg1;
- (void)dealloc;
- (void)exchangeSubviewAtIndex:(long long)arg1 withSubviewAtIndex:(long long)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)sendSubviewToBack:(id)arg1;

@end
