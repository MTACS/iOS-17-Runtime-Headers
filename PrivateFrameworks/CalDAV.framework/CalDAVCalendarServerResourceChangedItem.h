
@interface CalDAVCalendarServerResourceChangedItem : CoreDAVItem {
    NSMutableSet * _collectionChanges;
    NSMutableSet * _collectionUpdates;
    NSMutableSet * _created;
    NSMutableSet * _deleted;
    ICSDateValue * _dtstamp;
    NSMutableSet * _updated;
}

@property (nonatomic, retain) NSMutableSet *collectionChanges;
@property (nonatomic, retain) NSMutableSet *collectionUpdates;
@property (nonatomic, retain) NSMutableSet *created;
@property (nonatomic, retain) NSMutableSet *deleted;
@property (nonatomic, retain) ICSDateValue *dtstamp;
@property (nonatomic, retain) NSMutableSet *updated;

- (void).cxx_destruct;
- (void)addCollectionChanges:(id)arg1;
- (void)addCollectionUpdates:(id)arg1;
- (void)addCreated:(id)arg1;
- (void)addDeleted:(id)arg1;
- (void)addUpdated:(id)arg1;
- (id)collectionChanges;
- (id)collectionUpdates;
- (id)copyParseRules;
- (id)created;
- (id)deleted;
- (id)dtstamp;
- (id)init;
- (void)setCollectionChanges:(id)arg1;
- (void)setCollectionUpdates:(id)arg1;
- (void)setCreated:(id)arg1;
- (void)setDeleted:(id)arg1;
- (void)setDtstamp:(id)arg1;
- (void)setDtstampItem:(id)arg1;
- (void)setUpdated:(id)arg1;
- (id)updated;

@end
