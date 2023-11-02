
@interface PXSharedLibraryParticipantDataSourceManager : PXSectionedDataSourceManager <PXSharedLibraryMutableParticipantDataSourceManager>

@property (nonatomic, readonly) PXSharedLibraryParticipantDataSource *dataSource;

+ (id)aggregatedDataSource;
+ (id)aggregatedDataSourceWithParticipants:(id)arg1;

- (void)addParticipants:(id)arg1;
- (id)createInitialDataSource;
- (id)pauseChangeDeliveryWithTimeout:(double)arg1 identifier:(id)arg2;
- (void)performChanges:(id /* block */)arg1;
- (void)removeParticipantAtIndex:(unsigned long long)arg1;
- (void)replaceDataSourceWithDataSource:(id)arg1;
- (void)resumeChangeDelivery:(id)arg1;

@end
