
@interface FPStitchingSession : NSObject {
    NSMutableDictionary * _deletedItems;
    bool  _finished;
    NSMutableDictionary * _originalItems;
    NSMutableDictionary * _placeholderReplacements;
    id /* block */  _placeholdersCreationBlock;
    bool  _started;
    NSMutableDictionary * _stitchedFields;
    NSMutableDictionary * _stitchedItems;
    NSMutableDictionary * _stitchedPlaceholders;
}

@property (nonatomic, readonly) NSArray *deletedIDs;
@property (nonatomic, readonly) bool isActive;
@property (nonatomic, readonly) NSArray *placeholderItems;
@property (nonatomic, readonly) NSArray *placeholderReplacementsIDs;
@property (nonatomic, copy) id /* block */ placeholdersCreationBlock;
@property (nonatomic, readonly) NSDictionary *stitchedFieldsAndItemsByItemIDs;
@property (nonatomic, readonly) NSDictionary *stitchedItemsByParentID;

- (void).cxx_destruct;
- (void)associateItem:(id)arg1 withPlaceholderID:(id)arg2;
- (bool)cleanStitchedItemForItemID:(id)arg1;
- (id)createArchivePlaceholderForItem:(id)arg1 underParent:(id)arg2 inProviderDomainID:(id)arg3;
- (id)createGenericArchivePlaceholderUnderParent:(id)arg1 inProviderDomainID:(id)arg2;
- (id)createPlaceholderWithCopyOfExistingItem:(id)arg1 lastUsageUpdatePolicy:(unsigned long long)arg2 underParent:(id)arg3 inProviderDomainID:(id)arg4;
- (id)createPlaceholderWithName:(id)arg1 contentType:(id)arg2 contentAccessDate:(id)arg3 underParent:(id)arg4 inProviderDomainID:(id)arg5;
- (id)createPlaceholderWithName:(id)arg1 isFolder:(bool)arg2 contentAccessDate:(id)arg3 underParent:(id)arg4 inProviderDomainID:(id)arg5;
- (id)createPlaceholderWithName:(id)arg1 typeIdentifier:(id)arg2 contentAccessDate:(id)arg3 underParent:(id)arg4 inProviderDomainID:(id)arg5;
- (void)dealloc;
- (void)deleteItems:(id)arg1;
- (id)deletedIDs;
- (void)finish;
- (void)finishWithItem:(id)arg1 error:(id)arg2;
- (void)finishWithItems:(id)arg1 error:(id)arg2;
- (void)flush;
- (id)init;
- (bool)isActive;
- (id)itemWithPlaceholderID:(id)arg1;
- (id)placeholderItems;
- (id)placeholderReplacementsIDs;
- (id /* block */)placeholdersCreationBlock;
- (void)replacePlaceholderWithID:(id)arg1 withItem:(id)arg2;
- (void)setPlaceholdersCreationBlock:(id /* block */)arg1;
- (void)start;
- (id)stitchedFieldsAndItemsByItemIDs;
- (id)stitchedItemsByParentID;
- (void)transformItems:(id)arg1 handler:(id /* block */)arg2;
- (void)trashItems:(id)arg1;

@end
