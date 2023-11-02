
@interface _UICollectionCompositionalLayoutSolver : NSObject <_UICollectionLayoutAuxillaryHosting, _UIDynamicReferenceSystem> {
    struct CGSize { 
        double width; 
        double height; 
    }  _actualContentSize;
    NSMutableDictionary * _cachedDecorationAttributes;
    NSMutableDictionary * _cachedItemAttributes;
    NSMutableDictionary * _cachedSupplementaryAttributes;
    id /* block */  _cellLayoutAttributesTransformer;
    _UICollectionLayoutContainer * _container;
    unsigned long long  _containerSizeDependentAxes;
    NSIndexSet * _customContainerSectionIndexes;
    _UIDataSourceSnapshotter * _dataSourceSnapshot;
    _UICollectionCompositionalLayoutDynamicAnimator * _dynamicAnimator;
    _UICollectionLayoutDynamicsConfiguration * _dynamicsConfiguration;
    id /* block */  _dynamicsConfigurationHandler;
    bool  _estimatesSizes;
    NSArray * _globalSupplementaryItems;
    _UICollectionPreferredSizes * _globalSupplementaryPreferredSizes;
    _UICollectionLayoutAuxillaryItemSolver * _globalSupplementarySolver;
    bool  _hasOrthogonalScrollingSections;
    bool  _hasSectionsWithCustomContainers;
    double  _interSectionSpacing;
    Class  _invalidationContextClass;
    id /* block */  _invalidationHandler;
    Class  _layoutAttributeClass;
    unsigned long long  _layoutAxis;
    bool  _layoutRTL;
    double  _memoizedScreenScale;
    long long  _numberOfSectionsWithTransformVisibleItemsHandler;
    _UICollectionCompositionalLayoutSolverOptions * _options;
    NSIndexSet * _orthogonalScrollingSectionIndexes;
    unsigned long long  _preUpdateCachedItemCount;
    bool  _roundsToScreenScale;
    id /* block */  _sectionDecorationLayoutAttributesTransformer;
    _UICollectionLayoutSectionGeometryTranslator * _sectionGeometryTranslator;
    _UIRTree * _sectionIndexer;
    id /* block */  _sectionProvider;
    id /* block */  _sectionSupplementaryLayoutAttributesTransformer;
    bool  _shouldPerformPhysicalRTLTransforms;
    NSIndexSet * _solutionBookmarkIndexesWithPinnedSupplementaryItems;
    NSArray * _solutionBookmarks;
    struct { 
        unsigned int solutionBookmarksLocked : 1; 
    }  _solverFlags;
    UITraitCollection * _traitCollection;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_dynamicReferenceBounds;
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
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)dealloc;

@end
