
@protocol _UIContentInsetsEnvironment <NSObject>

@required

- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })effectiveInsets;
- (long long)insetReference;
- (_UICollectionLayoutContainer *)layoutContainerForContainerSize:(struct CGSize { double x1; double x2; })arg1 layoutAxis:(unsigned long long)arg2;
- (_UICollectionLayoutContainer *)layoutContainerForInsetReference:(long long)arg1 containerSize:(struct CGSize { double x1; double x2; })arg2 layoutAxis:(unsigned long long)arg3;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })layoutMarginsInsets;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })readableContentInsets;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;

@end
