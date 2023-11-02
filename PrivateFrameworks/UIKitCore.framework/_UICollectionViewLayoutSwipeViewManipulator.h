
@interface _UICollectionViewLayoutSwipeViewManipulator : NSObject <_UISwipeViewManipulator> {
    UICollectionView * _collectionView;
    _UICollectionViewLayoutSwipeActionsModule * _swipeActionsModule;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithCollectionView:(id)arg1 swipeActionsModule:(id)arg2;
- (void)moveSwipedView:(id)arg1 atIndexPath:(id)arg2 withSwipeInfo:(struct { unsigned long long x1; unsigned long long x2; bool x3; double x4; double x5; double x6; })arg3 animator:(id)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })restingFrameForSwipedView:(id)arg1 atIndexPath:(id)arg2;

@end
