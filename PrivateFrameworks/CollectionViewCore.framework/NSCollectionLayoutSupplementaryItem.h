
@interface NSCollectionLayoutSupplementaryItem : NSCollectionLayoutItem <NSCopying, _UICollectionLayoutAuxillaryItem> {
    bool  _canAdjustContentSize;
    NSCollectionLayoutAnchor * _containerAnchor;
    NSString * _elementKind;
    NSCollectionLayoutAnchor * _itemAnchor;
    long long  _zIndex;
}

@property (nonatomic, readonly) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } _effectiveContentInsets;
@property (nonatomic, readonly) NSCollectionLayoutBoundarySupplementaryItem *boundarySupplementaryItem;
@property (nonatomic) bool canAdjustContentSize;
@property (nonatomic, retain) NSCollectionLayoutAnchor *containerAnchor;
@property (nonatomic, readonly) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSCollectionLayoutDecorationItem *decorationItem;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *elementKind;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSCollectionLayoutItem *item;
@property (nonatomic, retain) NSCollectionLayoutAnchor *itemAnchor;
@property (nonatomic, readonly) NSCollectionLayoutSize *size;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSCollectionLayoutSupplementaryItem *supplementaryItem;
@property (nonatomic) long long zIndex;

+ (id)itemWithLayoutSize:(id)arg1;
+ (id)itemWithLayoutSize:(id)arg1 supplementaryItems:(id)arg2;
+ (id)supplementaryItemWithLayoutSize:(id)arg1 elementKind:(id)arg2 containerAnchor:(id)arg3;
+ (id)supplementaryItemWithLayoutSize:(id)arg1 elementKind:(id)arg2 containerAnchor:(id)arg3 itemAnchor:(id)arg4;

- (void).cxx_destruct;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })_effectiveContentInsets;
- (id)_externalDescription;
- (id)boundarySupplementaryItem;
- (bool)canAdjustContentSize;
- (id)containerAnchor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decorationItem;
- (id)elementKind;
- (id)initWithSize:(id)arg1 contentInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2 elementKind:(id)arg3 containerAnchor:(id)arg4 itemAnchor:(id)arg5 zIndex:(long long)arg6;
- (bool)isEqual:(id)arg1;
- (id)item;
- (id)itemAnchor;
- (void)setCanAdjustContentSize:(bool)arg1;
- (void)setContainerAnchor:(id)arg1;
- (void)setElementKind:(id)arg1;
- (void)setItemAnchor:(id)arg1;
- (void)setZIndex:(long long)arg1;
- (id)supplementaryItem;
- (long long)zIndex;

@end
