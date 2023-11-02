
@interface WBSQueryParameterFilteringDataQueue : NSObject {
    WBSQueryParameterFilteringData * _currentData;
    <WBSQueryParameterFilteringDataQueueDelegate> * _delegate;
    NSTimer * _mergePendingDataTimer;
    WBSQueryParameterFilteringData * _pendingData;
}

@property (nonatomic, readonly) WBSQueryParameterFilteringData *currentData;
@property (nonatomic) <WBSQueryParameterFilteringDataQueueDelegate> *delegate;

- (void).cxx_destruct;
- (void)_cancelMergingPendingData;
- (void)_mergePendingData;
- (void)_mergePendingDataSoon;
- (void)addPendingDataWithAdjustedURL:(id)arg1 originalURL:(id)arg2;
- (void)clearPendingData;
- (void)commitPendingData;
- (id)currentData;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)transferPendingDataToQueue:(id)arg1;

@end
