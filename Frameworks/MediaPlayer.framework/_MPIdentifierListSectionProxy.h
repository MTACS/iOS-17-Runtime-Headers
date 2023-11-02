
@interface _MPIdentifierListSectionProxy : NSObject <MPMutableIdentifierListSection> {
    NSMutableArray * _mutableItemIdentifiers;
    NSString * _sectionIdentifier;
    MPSectionedIdentifierList * _sectionedIdentifierList;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *itemIdentifiers;
@property (nonatomic, retain) NSMutableArray *mutableItemIdentifiers;
@property (nonatomic, readonly, copy) NSString *sectionIdentifier;
@property (nonatomic, readonly) MPSectionedIdentifierList *sectionedIdentifierList;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)applyChanges:(id)arg1 itemLookupBlock:(id /* block */)arg2;
- (id)initWithSection:(id)arg1 sectionedIdentifierList:(id)arg2 existingItemIdentifiers:(id)arg3;
- (void)insertItems:(id)arg1 afterItem:(id)arg2;
- (void)insertItemsAtHead:(id)arg1;
- (void)insertItemsAtTail:(id)arg1;
- (id)itemIdentifiers;
- (void)moveItem:(id)arg1 afterItem:(id)arg2;
- (void)moveItemToHead:(id)arg1;
- (void)moveItemToTail:(id)arg1;
- (id)mutableItemIdentifiers;
- (void)removeItems:(id)arg1;
- (id)sectionIdentifier;
- (id)sectionedIdentifierList;
- (void)setMutableItemIdentifiers:(id)arg1;
- (void)updateItems:(id)arg1;
- (void)updateSection;

@end
