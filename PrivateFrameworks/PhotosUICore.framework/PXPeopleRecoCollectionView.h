
@interface PXPeopleRecoCollectionView : UICollectionView {
    <PXPeopleRecoCollectionViewDelegate> * _recoCollectionViewDelegate;
    PXPeopleSwipeSelectionManager * _swipeSelectionManager;
}

@property (nonatomic) <PXPeopleRecoCollectionViewDelegate> *recoCollectionViewDelegate;
@property (nonatomic, retain) PXPeopleSwipeSelectionManager *swipeSelectionManager;

- (void).cxx_destruct;
- (void)disableSwipeSelection;
- (void)enableSwipeSelectionWithDelegate:(id)arg1;
- (id)recoCollectionViewDelegate;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRecoCollectionViewDelegate:(id)arg1;
- (void)setSwipeSelectionManager:(id)arg1;
- (id)swipeSelectionManager;

@end
