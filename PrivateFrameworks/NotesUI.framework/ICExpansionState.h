
@interface ICExpansionState : NSObject {
    NSMutableDictionary * _expansionState;
    NSManagedObjectContext * _legacyViewContext;
    NSManagedObjectContext * _modernViewContext;
}

@property (nonatomic, readonly) NSDictionary *archiveDictionary;
@property (nonatomic, retain) NSMutableDictionary *expansionState;
@property (nonatomic, retain) NSManagedObjectContext *legacyViewContext;
@property (nonatomic, retain) NSManagedObjectContext *modernViewContext;

+ (id)sharedExpansionState;

- (void).cxx_destruct;
- (void)applyArchiveDictionary:(id)arg1;
- (id)archivableIdentifierForItemIdentifier:(id)arg1;
- (id)archiveDictionary;
- (void)collapseItemIdentifier:(id)arg1 context:(id)arg2;
- (void)collapseItemIdentifier:(id)arg1 itemType:(long long)arg2 context:(id)arg3;
- (void)collapseItemIdentifiers:(id)arg1 itemType:(long long)arg2 context:(id)arg3;
- (id)collapsedItemIdentifiersWithItemType:(long long)arg1 context:(id)arg2;
- (id)collapsedObjectIDsInContext:(id)arg1;
- (id)description;
- (void)expandItemIdentifier:(id)arg1 context:(id)arg2;
- (void)expandItemIdentifier:(id)arg1 itemType:(long long)arg2 context:(id)arg3;
- (void)expandItemIdentifiers:(id)arg1 itemType:(long long)arg2 context:(id)arg3;
- (id)expandedItemIdentifiersWithItemType:(long long)arg1 context:(id)arg2;
- (id)expandedObjectIDsInContext:(id)arg1;
- (id)expansionState;
- (id)identifierForArchivableIdentifier:(id)arg1 itemType:(long long)arg2;
- (id)init;
- (bool)isSectionIdentiferExpanded:(id)arg1 inContext:(id)arg2;
- (id)itemIdentifiersExpanded:(bool)arg1 itemType:(long long)arg2 context:(id)arg3;
- (long long)itemTypeForItemIdentifier:(id)arg1;
- (id)legacyViewContext;
- (id)modernViewContext;
- (id)normalizedContext:(id)arg1;
- (id)normalizedItemIdentifier:(id)arg1;
- (void)setExpanded:(bool)arg1 itemIdentifier:(id)arg2 itemType:(long long)arg3 context:(id)arg4;
- (void)setExpansionState:(id)arg1;
- (void)setLegacyViewContext:(id)arg1;
- (void)setModernViewContext:(id)arg1;

@end
