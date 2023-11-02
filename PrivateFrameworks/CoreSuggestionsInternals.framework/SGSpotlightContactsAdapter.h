
@interface SGSpotlightContactsAdapter : NSObject <SGJournalContactsObserver> {
    SGSqlEntityStore * _store;
    NSURL * _vCardsDirectoryURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) SGSqlEntityStore *store;
@property (readonly) Class superclass;

+ (id)dispatchGroup;
+ (id)entityIdentifiersFromCNIdentifiers:(id)arg1;
+ (void)notifyWhenFlushed:(id /* block */)arg1;
+ (id)searchableIndex;

- (void).cxx_destruct;
- (void)addContact:(id)arg1;
- (void)confirmContact:(id)arg1;
- (void)confirmOrRejectContact:(id)arg1;
- (id)coreSpotlightAttributeSetForContact:(id)arg1;
- (id)initWithSGSqlEntityStore:(id)arg1;
- (id)pseudoContactVcardDirectory;
- (void)rejectContact:(id)arg1;
- (void)removeAllPseudoContactsInIdSet:(id)arg1;
- (void)removeAllStoredPseudoContacts;
- (id)searchableItemsForContactsForInternalIdentifiers:(id)arg1;
- (void)sendContactToSpotlight:(id)arg1;
- (void)setStore:(id)arg1;
- (id)store;
- (id)urlForRecordIdVCard:(id)arg1;
- (id)urlForStorageContactVCard:(id)arg1;

@end
