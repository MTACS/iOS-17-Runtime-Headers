
@interface DNDSMutableModeAssertionStore : DNDSModeAssertionStore

@property (nonatomic, copy) NSArray *assertions;
@property (nonatomic, copy) NSArray *invalidationRequests;
@property (nonatomic, copy) NSArray *invalidations;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)downgradeAssertionsIfNeededForSyncToPairedDevice:(id)arg1 dataSource:(id)arg2 syncManager:(id)arg3;
- (void)filterForSyncToPairedDevice:(id)arg1 clientDetailsProvider:(id)arg2;
- (void)resolveSourcesForSyncFromPairedDevice:(id)arg1;
- (void)sanitizeDatesForThreshold:(id)arg1;
- (void)setAssertions:(id)arg1;
- (void)setInvalidationRequests:(id)arg1;
- (void)setInvalidations:(id)arg1;
- (void)unresolveSourcesForSyncToPairedDevice:(id)arg1;
- (void)updateConfigurationModificationDatesWithDataSource:(id)arg1 syncManager:(id)arg2;

@end
