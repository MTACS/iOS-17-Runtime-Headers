
@interface NSCollectionLayoutDecorationItem : NSCollectionLayoutItem <NSCopying, _UICollectionLayoutAuxillaryItem> {
    Class  __registrationViewClass;
    NSCollectionLayoutAnchor * _containerAnchor;
    NSString * _elementKind;
    bool  _isBackgroundDecoration;
    NSCollectionLayoutAnchor * _itemAnchor;
    long long  _zIndex;
}

@property (nonatomic, readonly) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } _effectiveContentInsets;
@property (setter=_setRegistrationViewClass:, nonatomic, retain) Class _registrationViewClass;
@property (nonatomic, readonly) NSCollectionLayoutBoundarySupplementaryItem *boundarySupplementaryItem;
@property (nonatomic, retain) NSCollectionLayoutAnchor *containerAnchor;
@property (nonatomic, readonly) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSCollectionLayoutDecorationItem *decorationItem;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *elementKind;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isBackgroundDecoration;
@property (nonatomic, readonly) NSCollectionLayoutItem *item;
@property (nonatomic, retain) NSCollectionLayoutAnchor *itemAnchor;
@property (nonatomic, readonly) NSCollectionLayoutSize *size;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSCollectionLayoutSupplementaryItem *supplementaryItem;
@property (nonatomic) long long zIndex;

+ (id)backgroundDecorationItemWithElementKind:(id)arg1;
+ (id)decorationItemWithSize:(id)arg1 elementKind:(id)arg2 containerAnchor:(id)arg3;
+ (id)itemWithLayoutSize:(id)arg1;
+ (id)itemWithLayoutSize:(id)arg1 supplementaryItems:(id)arg2;

- (void).cxx_destruct;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })_effectiveContentInsets;
- (id)_externalDescription;
- (Class)_registrationViewClass;
- (void)_setRegistrationViewClass:(Class)arg1;
- (id)boundarySupplementaryItem;
- (id)containerAnchor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decorationItem;
- (id)elementKind;
- (id)initWithElementKind:(id)arg1 size:(id)arg2 contentInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg3 containerAnchor:(id)arg4 itemAnchor:(id)arg5 zIndex:(long long)arg6 registrationViewClass:(Class)arg7 isBackgroundDecoration:(bool)arg8;
- (bool)isBackgroundDecoration;
- (bool)isEqual:(id)arg1;
- (id)item;
- (id)itemAnchor;
- (void)setContainerAnchor:(id)arg1;
- (void)setElementKind:(id)arg1;
- (void)setIsBackgroundDecoration:(bool)arg1;
- (void)setItemAnchor:(id)arg1;
- (void)setZIndex:(long long)arg1;
- (id)supplementaryItem;
- (long long)zIndex;

@end
