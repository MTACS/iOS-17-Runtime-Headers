
@interface MPSectionedIdentifierListHeadEntry : MPSectionedIdentifierListEntry <MPSectionedIdentifierListEnumerationTrackingEntry> {
    <MPSectionedIdentifierListDataSource> * _dataSource;
    NSMutableDictionary * _identifiersItemEntryMap;
    MPSectionedIdentifierListItemEntry * _lastItemEntry;
    bool  _shuffledHead;
    MPSectionedIdentifierListTailEntry * _tailEntry;
}

@property (nonatomic, readonly) long long branchDepth;
@property (nonatomic, retain) <MPSectionedIdentifierListDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long entryType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *identifiersItemEntryMap;
@property (nonatomic, retain) MPSectionedIdentifierListItemEntry *lastItemEntry;
@property (nonatomic, readonly) NSString *sectionIdentifier;
@property (getter=isShuffledHead, nonatomic) bool shuffledHead;
@property (readonly) Class superclass;
@property (nonatomic, retain) MPSectionedIdentifierListTailEntry *tailEntry;

+ (id)headEntryWithSectionIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)dataSource;
- (id)description;
- (long long)entryType;
- (id)identifiersItemEntryMap;
- (id)initWithPositionKey:(id)arg1 sectionIdentifier:(id)arg2;
- (bool)isShuffledHead;
- (id)lastItemEntry;
- (id)nextEntries;
- (void)setBranchDepth:(long long)arg1;
- (void)setDataSource:(id)arg1;
- (void)setLastItemEntry:(id)arg1;
- (void)setShuffledHead:(bool)arg1;
- (void)setTailEntry:(id)arg1;
- (id)tailEntry;

@end
