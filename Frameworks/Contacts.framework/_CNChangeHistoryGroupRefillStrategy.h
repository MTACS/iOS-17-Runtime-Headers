
@interface _CNChangeHistoryGroupRefillStrategy : NSObject <CNEnumeratorRefillStrategy> {
    CNContactStore * _contactStore;
}

@property (nonatomic, readonly) CNContactStore *contactStore;

- (void).cxx_destruct;
- (id)batchesToRepresentObjects:(id)arg1 suggestedBatchSize:(unsigned long long)arg2;
- (id)contactStore;
- (id)fetchGroupsWithIdentifiers:(id)arg1;
- (id)initWithContactStore:(id)arg1;
- (id)objectsRepresentedByBatch:(id)arg1;
- (id)updateChanges:(id)arg1 withFetchedGroups:(id)arg2;

@end
