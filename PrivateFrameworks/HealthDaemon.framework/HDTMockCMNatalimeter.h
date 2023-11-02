
@interface HDTMockCMNatalimeter : CMNatalimeter {
    id /* block */  _handleQueryDataSinceRecord;
    id /* block */  _handleStartNatalimetryUpdates;
    id /* block */  _handleStopNatalimeteryUpdates;
}

@property (nonatomic, copy) id /* block */ handleQueryDataSinceRecord;
@property (nonatomic, copy) id /* block */ handleStartNatalimetryUpdates;
@property (nonatomic, copy) id /* block */ handleStopNatalimeteryUpdates;

- (void).cxx_destruct;
- (id /* block */)handleQueryDataSinceRecord;
- (id /* block */)handleStartNatalimetryUpdates;
- (id /* block */)handleStopNatalimeteryUpdates;
- (void)queryAbsoluteNatalimetryDataSinceDataRecord:(id)arg1 withHandler:(id /* block */)arg2;
- (void)setHandleQueryDataSinceRecord:(id /* block */)arg1;
- (void)setHandleStartNatalimetryUpdates:(id /* block */)arg1;
- (void)setHandleStopNatalimeteryUpdates:(id /* block */)arg1;
- (void)startAbsoluteNatalimetryDataUpdatesWithHandler:(id /* block */)arg1;
- (void)stopAbsoluteNatalimetryDataUpdates;

@end
