
@interface NSCollectionLayoutGroup : NSCollectionLayoutItem <NSCopying> {
    bool  __hasDecorationItemRequiringRegistration;
    long long  _count;
    id /* block */  _customGroupItemProvider;
    long long  _groupOptions;
    bool  _hasCheckedIfDecorationItemRequiresRegistration;
    NSCollectionLayoutSpacing * _interItemSpacing;
    id /* block */  _itemsProvider;
    long long  _layoutDirection;
    NSArray * _subitems;
    id /* block */  _visualFormatItemProvider;
    NSArray * _visualFormats;
}

@property (nonatomic) bool _hasDecorationItemRequiringRegistration;
@property (nonatomic) long long count;
@property (nonatomic, copy) id /* block */ customGroupItemProvider;
@property (nonatomic, readonly) long long groupOptions;
@property (nonatomic, readonly) bool hasItemProvider;
@property (nonatomic, readonly) bool hasVisualFormat;
@property (nonatomic, copy) NSCollectionLayoutSpacing *interItemSpacing;
@property (nonatomic, readonly) id /* block */ itemsProvider;
@property (nonatomic) long long layoutDirection;
@property (nonatomic, copy) NSArray *subitems;
@property (nonatomic, copy) NSArray *supplementaryItems;
@property (nonatomic, readonly) id /* block */ visualFormatItemProvider;
@property (nonatomic, readonly, copy) NSArray *visualFormats;

+ (id)_effectiveCopiedSubitemsForSubitems:(id)arg1 count:(long long)arg2 layoutDirection:(long long)arg3;
+ (id)_effectiveSizeForSize:(id)arg1 count:(long long)arg2 layoutDirection:(long long)arg3;
+ (id)customGroupWithLayoutSize:(id)arg1 itemProvider:(id /* block */)arg2;
+ (id)horizontalGroupWithLayoutSize:(id)arg1 repeatingSubitem:(id)arg2 count:(long long)arg3;
+ (id)horizontalGroupWithLayoutSize:(id)arg1 subitem:(id)arg2 count:(long long)arg3;
+ (id)horizontalGroupWithLayoutSize:(id)arg1 subitems:(id)arg2;
+ (id)horizontalGroupWithSize:(id)arg1 subitemsProvider:(id /* block */)arg2;
+ (id)layoutGroupWithSize:(id)arg1 visualFormats:(id)arg2 itemProvider:(id /* block */)arg3;
+ (id)verticalGroupWithLayoutSize:(id)arg1 repeatingSubitem:(id)arg2 count:(long long)arg3;
+ (id)verticalGroupWithLayoutSize:(id)arg1 subitem:(id)arg2 count:(long long)arg3;
+ (id)verticalGroupWithLayoutSize:(id)arg1 subitems:(id)arg2;
+ (id)verticalGroupWithSize:(id)arg1 subitemsProvider:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)_externalDescription;
- (bool)_hasDecorationItemRequiringRegistration;
- (bool)_isListSolverCompatibleForLayoutAxis:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (id /* block */)customGroupItemProvider;
- (id)description;
- (long long)groupOptions;
- (bool)hasItemProvider;
- (bool)hasVisualFormat;
- (id)initWithSize:(id)arg1 subitems:(id)arg2 count:(long long)arg3 interItemSpacing:(id)arg4 contentInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg5 edgeSpacing:(id)arg6 layoutDirection:(long long)arg7 supplementaryItems:(id)arg8 customGroupItemProvider:(id /* block */)arg9 name:(id)arg10 identifier:(id)arg11;
- (id)initWithSize:(id)arg1 subitems:(id)arg2 count:(long long)arg3 interItemSpacing:(id)arg4 contentInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg5 edgeSpacing:(id)arg6 layoutDirection:(long long)arg7 supplementaryItems:(id)arg8 visualFormats:(id)arg9 itemsProvider:(id /* block */)arg10 visualFormatItemProvider:(id /* block */)arg11 customGroupItemProvider:(id /* block */)arg12 options:(long long)arg13 name:(id)arg14 identifier:(id)arg15;
- (id)interItemSpacing;
- (bool)isCustomGroup;
- (bool)isEqual:(id)arg1;
- (bool)isHorizontalGroup;
- (bool)isVerticalGroup;
- (id /* block */)itemsProvider;
- (unsigned long long)layoutAxis;
- (long long)layoutDirection;
- (void)setCount:(long long)arg1;
- (void)setCustomGroupItemProvider:(id /* block */)arg1;
- (void)setInterItemSpacing:(id)arg1;
- (void)setLayoutDirection:(long long)arg1;
- (void)setSubitems:(id)arg1;
- (void)set_hasDecorationItemRequiringRegistration:(bool)arg1;
- (id)subitems;
- (id)visualDescription;
- (id /* block */)visualFormatItemProvider;
- (id)visualFormats;

@end
