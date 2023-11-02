
@interface NSCollectionLayoutSection : NSObject <NSCopying> {
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  __clippingInsets;
    bool  __clipsBackgroundDecorationsToContent;
    bool  __clipsContentToBounds;
    double  __cornerRadius;
    bool  __excludesBoundarySupplementariesFromClipping;
    double  __postBoundaryPadding;
    double  __preBoundaryPadding;
    NSArray * _boundarySupplementaryItems;
    <_UICollectionLayoutSectionCallback> * _callback;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _contentInsets;
    long long  _contentInsetsReference;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    NSArray * _decorationItems;
    NSDictionary * _decorationItemsDict;
    NSDictionary * _decorationItemssDict;
    NSCollectionLayoutGroup * _group;
    bool  _hasBackgroundDecorationItem;
    double  _interGroupSpacing;
    bool  _isEmptySection;
    long long  _orthogonalScrollingBehavior;
    UICollectionLayoutSectionOrthogonalScrollingProperties * _orthogonalScrollingProperties;
    NSIndexSet * _pinnedBoundarySupplementaryItemIndexes;
    NSIndexSet * _pinnedSupplementaryItemIndexes;
    bool  _prefersListSolver;
    bool  _supplementariesFollowContentInsets;
    long long  _supplementaryContentInsetsReference;
    NSArray * _supplementaryItems;
    NSDictionary * _supplementaryItemsDict;
    id /* block */  _visibleItemsInvalidationHandler;
}

@property (getter=_clippingInsets, setter=_setClippingInsets:, nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } _clippingInsets;
@property (getter=_clipsBackgroundDecorationsToContent, setter=_setClipsBackgroundDecorationsToContent:, nonatomic) bool _clipsBackgroundDecorationsToContent;
@property (getter=_clipsContentToBounds, setter=_setClipsContentToBounds:, nonatomic) bool _clipsContentToBounds;
@property (getter=_cornerRadius, setter=_setCornerRadius:, nonatomic) double _cornerRadius;
@property (getter=_excludesBoundarySupplementariesFromClipping, setter=_setExcludesBoundarySupplementariesFromClipping:, nonatomic) bool _excludesBoundarySupplementariesFromClipping;
@property (getter=_postBoundaryPadding, setter=_setPostBoundaryPadding:, nonatomic) double _postBoundaryPadding;
@property (getter=_preBoundaryPadding, setter=_setPreBoundaryPadding:, nonatomic) double _preBoundaryPadding;
@property (nonatomic, copy) NSArray *boundarySupplementaryItems;
@property (getter=_callback, nonatomic, readonly) <_UICollectionLayoutSectionCallback> *callback;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic) long long contentInsetsReference;
@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, copy) NSArray *decorationItems;
@property (nonatomic, readonly) NSDictionary *decorationItemssDict;
@property (setter=doc_setSupplementariesFollowContentInsets:, nonatomic) bool doc_supplementariesFollowContentInsets;
@property (nonatomic, copy) NSCollectionLayoutGroup *group;
@property (nonatomic) double interGroupSpacing;
@property (nonatomic) long long orthogonalScrollingBehavior;
@property (nonatomic, readonly) UICollectionLayoutSectionOrthogonalScrollingProperties *orthogonalScrollingProperties;
@property (nonatomic, copy) NSIndexSet *pinnedSupplementaryItemIndexes;
@property (nonatomic) bool prefersListSolver;
@property (nonatomic) bool supplementariesFollowContentInsets;
@property (nonatomic) long long supplementaryContentInsetsReference;
@property (nonatomic, copy) NSArray *supplementaryItems;
@property (nonatomic, readonly) NSDictionary *supplementaryItemsDict;
@property (nonatomic, copy) id /* block */ visibleItemsInvalidationHandler;

// Image: /System/Library/PrivateFrameworks/CollectionViewCore.framework/CollectionViewCore

+ (id)_emptySection;
+ (id)sectionWithGroup:(id)arg1;

- (void).cxx_destruct;
- (double)_alignedContentMarginGivenMargin:(double)arg1;
- (id)_auxillaryItemForElementKind:(id)arg1 category:(unsigned long long)arg2;
- (id)_backgroundDecorationViewsRequiringCustomViewClassRegistration;
- (id)_callback;
- (void)_checkForDuplicateSupplementaryItemKindsAndThrowIfFound;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })_clippingInsets;
- (bool)_clipsBackgroundDecorationsToContent;
- (bool)_clipsContentToBounds;
- (bool)_containsBackgroundDecorationItem:(id)arg1;
- (bool)_containsEstimatedSizeElement;
- (double)_cornerRadius;
- (id)_descriptionProperties;
- (void)_didEndSwiping;
- (bool)_excludesBoundarySupplementariesFromClipping;
- (bool)_hasBackgroundDecorationItem;
- (bool)_hasVisibleItemsHandler;
- (bool)_isEmptySection;
- (bool)_isListSolverCompatibleForLayoutAxis:(unsigned long long)arg1;
- (id)_leadingSwipeActionsConfigurationForIndexPath:(id)arg1;
- (id)_orthogonalScrollingProperties;
- (double)_paddingToBoundarySupplementaries;
- (bool)_pinnedSupplementariesShouldOverlap;
- (double)_postBoundaryPadding;
- (double)_preBoundaryPadding;
- (id)_preferredContainerBackgroundColor;
- (void)_setClippingInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setClipsBackgroundDecorationsToContent:(bool)arg1;
- (void)_setClipsContentToBounds:(bool)arg1;
- (void)_setCornerRadius:(double)arg1;
- (void)_setExcludesBoundarySupplementariesFromClipping:(bool)arg1;
- (void)_setPostBoundaryPadding:(double)arg1;
- (void)_setPreBoundaryPadding:(double)arg1;
- (id)_trailingSwipeActionsConfigurationForIndexPath:(id)arg1;
- (void)_updateStyleForSwipeActionsConfiguration:(id)arg1;
- (bool)_wantsBandSelectionVisuals;
- (bool)_wantsSwipeActions;
- (void)_willBeginSwiping;
- (id)boundarySupplementaryItems;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (long long)contentInsetsReference;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decorationItems;
- (id)decorationItemsDict;
- (id)decorationItemssDict;
- (id)description;
- (id)group;
- (id)initWithGroup:(id)arg1 contentInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2 contentInsetsReference:(long long)arg3 supplementaryItems:(id)arg4 boundarySupplementaryItems:(id)arg5 pinnedSupplementaryItemIndexes:(id)arg6 interGroupSpacing:(double)arg7 visibleItemsInvalidationHandler:(id /* block */)arg8 supplementariesFollowInsets:(bool)arg9 decorationItems:(id)arg10 orthogonalScrollingBehavior:(long long)arg11 isEmptySection:(bool)arg12 prefersListSolver:(bool)arg13;
- (id)initWithLayoutGroup:(id)arg1;
- (double)interGroupSpacing;
- (bool)isEqual:(id)arg1;
- (long long)orthogonalScrollingBehavior;
- (id)orthogonalScrollingProperties;
- (id)pinnedBoundarySupplementaryItemIndexes;
- (id)pinnedSupplementaryItemIndexes;
- (bool)prefersListSolver;
- (bool)scrollsOrthogonally;
- (void)setBoundarySupplementaryItems:(id)arg1;
- (void)setContentInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentInsetsReference:(long long)arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDecorationItems:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setInterGroupSpacing:(double)arg1;
- (void)setOrthogonalScrollingBehavior:(long long)arg1;
- (void)setPinnedSupplementaryItemIndexes:(id)arg1;
- (void)setPrefersListSolver:(bool)arg1;
- (void)setSupplementariesFollowContentInsets:(bool)arg1;
- (void)setSupplementaryContentInsetsReference:(long long)arg1;
- (void)setSupplementaryItems:(id)arg1;
- (void)setVisibleItemsInvalidationHandler:(id /* block */)arg1;
- (bool)shouldRestrictOrthogonalAxisDuringInteractiveMovement;
- (bool)supplementariesFollowContentInsets;
- (long long)supplementaryContentInsetsReference;
- (id)supplementaryItems;
- (id)supplementaryItemsDict;
- (id /* block */)visibleItemsInvalidationHandler;

// Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore

- (void)doc_setSupplementariesFollowContentInsets:(bool)arg1;
- (bool)doc_supplementariesFollowContentInsets;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)sectionWithListConfiguration:(id)arg1 layoutEnvironment:(id)arg2;

@end
