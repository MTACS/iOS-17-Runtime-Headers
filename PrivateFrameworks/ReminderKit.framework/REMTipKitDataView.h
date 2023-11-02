
@interface REMTipKitDataView : NSObject {
    REMStore * _store;
}

@property (nonatomic, readonly) REMStore *store;

- (void).cxx_destruct;
- (id)fetchCompletedRemindersCountInList:(id)arg1 error:(id*)arg2;
- (id)fetchCompletedRemindersCountWithError:(id*)arg1;
- (id)fetchCustomSmartListsCountWithError:(id*)arg1;
- (id)fetchHashtagsCountWithError:(id*)arg1;
- (id)fetchListsCountWithError:(id*)arg1;
- (id)fetchListsWithCustomBadgeCountWithError:(id*)arg1;
- (id)fetchUncompletedRemindersCountWithError:(id*)arg1;
- (id)initWithStore:(id)arg1;
- (id)store;

@end
