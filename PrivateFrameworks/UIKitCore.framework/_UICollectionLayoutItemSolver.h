
@interface _UICollectionLayoutItemSolver : NSObject <NSCopying, _UICollectionLayoutAuxillaryHosting> {
    <NSCollectionLayoutContainer> * _container;
    unsigned long long  _containerSizeDependentLayoutAxes;
    NSCollectionLayoutItem * _item;
    struct CGSize { 
        double width; 
        double height; 
    }  _largestKnownItemSize;
    unsigned long long  _layoutAxis;
    bool  _layoutRTL;
    long long  _maxFrameCount;
    _UICollectionPreferredSizes * _preferredSizes;
    long long  _solutionRecursionDepth;
    _UICollectionLayoutItemSolverState * _solveResult;
    bool  _solvingConsumedDirtyPreferredSizes;
    _UICollectionLayoutSupplementaryEnroller * _supplementaryEnroller;
    UITraitCollection * _traitCollection;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _uncommittedSolvedItemFrame;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })auxillaryHostAdditionalFrameOffset;
- (id)auxillaryHostAuxillaryItems;
- (long long)auxillaryHostAuxillaryKind;
- (id)auxillaryHostContainer;
- (struct CGSize { double x1; double x2; })auxillaryHostContentSize;
- (unsigned long long)auxillaryHostLayoutAxis;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })auxillaryHostPinningRect;
- (id)auxillaryHostPreferredSizes;
- (bool)auxillaryHostShouldLayoutRTL;
- (id)auxillaryHostSupplementaryEnroller;
- (id)auxillaryHostTraitCollection;
- (bool)auxillaryHostWantsOverlapAdjustmentForMatchingAlignmentsOnly;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;

@end
