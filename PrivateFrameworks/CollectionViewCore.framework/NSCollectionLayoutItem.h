
@interface NSCollectionLayoutItem : NSObject <NSCopying> {
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _contentInsets;
    NSArray * _decorationItems;
    NSCollectionLayoutEdgeSpacing * _edgeSpacing;
    NSUUID * _identifier;
    struct { 
        unsigned int hasComputedContainsEstimatedItem : 1; 
        unsigned int containsEstimatedItem : 1; 
        unsigned int hasComputedContainsItemWithAxesUniformAcrossSiblings : 1; 
        unsigned int containsItemWithAxesUniformAcrossSiblings : 1; 
    }  _itemFlags;
    NSString * _name;
    NSCollectionLayoutSize * _size;
    NSArray * _supplementaryItems;
}

@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic, copy) NSArray *decorationItems;
@property (nonatomic, copy) NSCollectionLayoutEdgeSpacing *edgeSpacing;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, readonly) NSCollectionLayoutSize *layoutSize;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSCollectionLayoutSize *size;
@property (nonatomic, copy) NSArray *supplementaryItems;

// Image: /System/Library/PrivateFrameworks/CollectionViewCore.framework/CollectionViewCore

+ (id)itemWithLayoutSize:(id)arg1;
+ (id)itemWithLayoutSize:(id)arg1 supplementaryItems:(id)arg2;
+ (id)itemWithSize:(id)arg1 decorationItems:(id)arg2;

- (void).cxx_destruct;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })_effectiveContentInsets;
- (void)_enumerateItemsWithHandler:(id /* block */)arg1;
- (void)_enumerateSupplementaryItemsWithHandler:(id /* block */)arg1;
- (id)_externalDescription;
- (struct CGSize { double x1; double x2; })_insetSizeForContainer:(id)arg1 displayScale:(double)arg2;
- (id)auxillaryItems;
- (bool)containsEstimatedSizeItem;
- (bool)containsItemWithAxesUniformAcrossSiblings;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decorationItems;
- (id)description;
- (id)edgeSpacing;
- (bool)hasCustomGroupItemProvider;
- (id)identifier;
- (bool)ignoresRTL;
- (id)initWithSize:(id)arg1 contentInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2 edgeSpacing:(id)arg3 supplementaryItems:(id)arg4 decorationItems:(id)arg5 name:(id)arg6 identifier:(id)arg7;
- (bool)isAuxillary;
- (bool)isBackgroundDecoration;
- (bool)isCustomGroup;
- (bool)isDecoration;
- (bool)isEqual:(id)arg1;
- (bool)isGroup;
- (bool)isSupplementary;
- (id)layoutSize;
- (id)name;
- (void)setContentInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDecorationItems:(id)arg1;
- (void)setEdgeSpacing:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSize:(id)arg1;
- (void)setSupplementaryItems:(id)arg1;
- (id)size;
- (id)supplementaryItems;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (id)_visualDescription;

@end
