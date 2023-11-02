
@interface HFReorderableHomeKitItemList : HFReorderableItemListAbstractBase <NSCopying, NSMutableCopying> {
    NSArray * _sortedHomeKitObjectIdentifiers;
}

@property (nonatomic, readonly) NSString *_applicationDataKey;
@property (nonatomic, readonly) id /* block */ sortedHomeKitItemComparator;
@property (nonatomic, readonly) id /* block */ sortedHomeKitObjectComparator;
@property (nonatomic, copy) NSArray *sortedHomeKitObjectIdentifiers;

+ (id)_dataForHomeKitItem:(id)arg1;

- (void).cxx_destruct;
- (id /* block */)_actionSetTypeComparator;
- (id)_applicationDataKey;
- (id /* block */)_homeKitItemDataComparator;
- (id /* block */)_reorderableObjectDateAddedComparator;
- (id /* block */)_reorderableObjectTitleComparator;
- (id /* block */)_sortedHomeKitIdentifierComparator;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithApplicationDataContainer:(id)arg1 category:(id)arg2;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setSortedHomeKitObjectIdentifiers:(id)arg1;
- (id /* block */)sortedHomeKitItemComparator;
- (id /* block */)sortedHomeKitObjectComparator;
- (id)sortedHomeKitObjectIdentifiers;

@end
