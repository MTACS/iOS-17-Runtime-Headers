
@interface HUQuickControlCollectionView : UICollectionView {
    HUScrollGestureRecognitionResolver * _scrollGestureResolver;
}

@property (nonatomic, readonly) HUScrollGestureRecognitionResolver *scrollGestureResolver;

- (void).cxx_destruct;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 collectionViewLayout:(id)arg2;
- (id)scrollGestureResolver;
- (bool)touchesShouldCancelInContentView:(id)arg1;

@end
