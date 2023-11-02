
@interface CPLContainerRelationChange : CPLRecordChange {
    NSString * _itemIdentifier;
    CPLContainerRelation * _relation;
}

@property (nonatomic, copy) NSString *itemIdentifier;
@property (nonatomic, retain) CPLContainerRelation *relation;

+ (Class)relatedRecordClass;
+ (id)relationToContainerWithIdentifier:(id)arg1;
+ (id)relationWithItemIdentifier:(id)arg1 containerIdentifier:(id)arg2;
+ (id)relationWithItemScopedIdentifier:(id)arg1 containerIdentifier:(id)arg2;
+ (bool)shouldReallyQuarantineRecord;
+ (bool)supportsDeletion;
+ (bool)supportsDirectDeletion;

- (void).cxx_destruct;
- (id)compactedChangeWithRelatedChanges:(id)arg1 isOnlyChange:(bool)arg2 fullRecord:(id)arg3 usingStorageView:(id)arg4;
- (id)containerScopedIdentifier;
- (id)description;
- (id)itemIdentifier;
- (id)itemScopedIdentifier;
- (id)relatedIdentifier;
- (id)relation;
- (id)scopedIdentifiersForMapping;
- (id)secondaryIdentifier;
- (void)setContainerScopedIdentifier:(id)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setItemScopedIdentifier:(id)arg1;
- (void)setRelatedIdentifier:(id)arg1;
- (void)setRelation:(id)arg1;
- (void)setSecondaryIdentifier:(id)arg1;
- (id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id*)arg2;
- (id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id*)arg2;
- (bool)validateFullRecord;

@end
