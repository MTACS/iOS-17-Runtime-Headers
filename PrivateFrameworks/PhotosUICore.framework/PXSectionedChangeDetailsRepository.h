
@interface PXSectionedChangeDetailsRepository : NSObject {
    NSMutableArray * _allChangeDetails;
    long long  _historyLimit;
    NSObject<OS_dispatch_queue> * _internalQueue;
}

@property (nonatomic, readonly) long long historyLimit;

- (void).cxx_destruct;
- (void)addChangeDetails:(id)arg1;
- (id)changeDetailsFromDataSourceIdentifier:(long long)arg1 toDataSourceIdentifier:(long long)arg2;
- (id)coalescedChangeDetailsFromDataSourceIdentifier:(long long)arg1 toDataSourceIdentifier:(long long)arg2;
- (long long)historyLimit;
- (id)init;
- (id)initWithChangeHistoryLimit:(long long)arg1;

@end
