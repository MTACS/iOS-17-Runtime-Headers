
@interface REMEventKitBridgingDataView : NSObject {
    REMStore * _store;
}

@property (nonatomic, readonly) REMStore *store;

- (void).cxx_destruct;
- (id)fetchCompletedRemindersWithCompletionDateFrom:(id)arg1 to:(id)arg2 withListIDs:(id)arg3 error:(id*)arg4;
- (id)fetchIncompleteRemindersWithDueDateFrom:(id)arg1 to:(id)arg2 withListIDs:(id)arg3 error:(id*)arg4;
- (id)fetchListsWithError:(id*)arg1;
- (id)fetchRemindersWithListIDs:(id)arg1 error:(id*)arg2;
- (id)initWithStore:(id)arg1;
- (id)store;

@end
