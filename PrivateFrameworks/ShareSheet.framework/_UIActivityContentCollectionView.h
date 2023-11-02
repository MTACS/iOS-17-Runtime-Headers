
@interface _UIActivityContentCollectionView : UICollectionView {
    bool  _initialValidLayoutWasCalled;
    bool  _isInitialLayoutPass;
}

@property (nonatomic) bool initialValidLayoutWasCalled;
@property (nonatomic) bool isInitialLayoutPass;

- (bool)_shouldFadeCellsForBoundChangeWhileRotating;
- (bool)initialValidLayoutWasCalled;
- (bool)isInitialLayoutPass;
- (void)layoutSubviews;
- (void)removeFromSuperview;
- (void)setInitialValidLayoutWasCalled:(bool)arg1;
- (void)setIsInitialLayoutPass:(bool)arg1;

@end
