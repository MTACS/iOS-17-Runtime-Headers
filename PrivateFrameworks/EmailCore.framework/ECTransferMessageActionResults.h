
@interface ECTransferMessageActionResults : ECLocalMessageActionResults <ECTransferMessageActionResultsBuilder> {
    NSArray * _completedItems;
    NSArray * _createdServerMessages;
    NSDictionary * _downloadedDataByCopyItems;
    NSArray * _failedItems;
    long long  _phaseForResults;
}

@property (nonatomic, copy) NSArray *completedItems;
@property (nonatomic, copy) NSArray *createdServerMessages;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDictionary *downloadedDataByCopyItems;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, copy) NSArray *failedItems;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long phaseForResults;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)completedItems;
- (id)createdServerMessages;
- (id)downloadedDataByCopyItems;
- (id)failedItems;
- (id)initWithBuilder:(id /* block */)arg1;
- (long long)phaseForResults;
- (void)setCompletedItems:(id)arg1;
- (void)setCreatedServerMessages:(id)arg1;
- (void)setDownloadedDataByCopyItems:(id)arg1;
- (void)setFailedItems:(id)arg1;
- (void)setPhaseForResults:(long long)arg1;

@end
