
@protocol ECTransferMessageActionResultsBuilder <ECLocalMessageActionResultsBuilder>

@required

- (NSArray *)completedItems;
- (NSArray *)createdServerMessages;
- (NSDictionary *)downloadedDataByCopyItems;
- (NSArray *)failedItems;
- (long long)phaseForResults;
- (void)setCompletedItems:(NSArray *)arg1;
- (void)setCreatedServerMessages:(NSArray *)arg1;
- (void)setDownloadedDataByCopyItems:(NSDictionary *)arg1;
- (void)setFailedItems:(NSArray *)arg1;
- (void)setPhaseForResults:(long long)arg1;

@end
