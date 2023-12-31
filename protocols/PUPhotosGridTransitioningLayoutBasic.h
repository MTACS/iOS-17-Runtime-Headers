
@protocol PUPhotosGridTransitioningLayoutBasic <NSObject>

@required

- (void)setTransitionStartContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTransitionZoomingOut:(bool)arg1;
- (struct CGPoint { double x1; double x2; })transitionEndContentOffset;
- (bool)transitionIsAppearing;
- (UICollectionViewLayout *)transitionLayout;
- (struct CGPoint { double x1; double x2; })transitionStartContentOffset;
- (bool)transitionZoomingOut;

@end
