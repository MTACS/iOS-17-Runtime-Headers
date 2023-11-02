
@interface PKDashboardPassFlowLayout : UICollectionViewCompositionalLayout <PKDashboardLayout, UIGestureRecognizerDelegate> {
    bool  _bouncing;
    bool  _cellsPresented;
    bool  _currentDraggingWentBelowThreshold;
    bool  _hideCellsDuringDismissal;
    double  _horizontalInset;
    bool  _needsCustomLocation;
    struct CGSize { 
        double width; 
        double height; 
    }  _passCellSize;
    bool  _preventLayoutComputation;
    double  _topMarginInFirstSection;
    bool  _userIsActivelyDragging;
    bool  _userIsHoldingCardInCurrentDrag;
    bool  _userWasHoldingCard;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool fade;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (double)topMarginInFirstSection;

- (void)_adjustItems:(id)arg1 withLateralMove:(double)arg2;
- (id)_indexPathForPassGroup;
- (bool)_indexPathIsPassGroupIndexPath:(id)arg1;
- (id)_modifiedLayoutAttributes:(id)arg1;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (void)hideContent;
- (id)init;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutSectionAtIndex:(long long)arg1 layoutEnvironment:(id)arg2;
- (void)passPanDidBegin;
- (void)passPanDidEnd;
- (void)prepareLayout;
- (void)revealContentAnimated:(bool)arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
