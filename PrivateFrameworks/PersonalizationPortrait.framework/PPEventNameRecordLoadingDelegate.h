
@interface PPEventNameRecordLoadingDelegate : PPRecordLoadingDelegate {
    id /* block */  _eventNameRecordsCompletion;
    id /* block */  _eventNameRecordsHandler;
    id /* block */  _eventNameRecordsSetup;
    id /* block */  _recentEventNameRecordsCompletion;
    id /* block */  _recentEventNameRecordsHandler;
    id /* block */  _recentEventNameRecordsSetup;
    id /* block */  _resetEventNameRecordData;
}

@property (nonatomic, copy) id /* block */ eventNameRecordsCompletion;
@property (nonatomic, copy) id /* block */ eventNameRecordsHandler;
@property (nonatomic, copy) id /* block */ eventNameRecordsSetup;
@property (nonatomic, copy) id /* block */ recentEventNameRecordsCompletion;
@property (nonatomic, copy) id /* block */ recentEventNameRecordsHandler;
@property (nonatomic, copy) id /* block */ recentEventNameRecordsSetup;
@property (nonatomic, copy) id /* block */ resetEventNameRecordData;

- (void).cxx_destruct;
- (id)description;
- (id /* block */)eventNameRecordsCompletion;
- (id /* block */)eventNameRecordsHandler;
- (id /* block */)eventNameRecordsSetup;
- (id)initWithName:(id)arg1;
- (id /* block */)recentEventNameRecordsCompletion;
- (id /* block */)recentEventNameRecordsHandler;
- (id /* block */)recentEventNameRecordsSetup;
- (void)recentRecordLoadingCompletion;
- (unsigned char)recentRecordLoadingHandler:(id)arg1;
- (unsigned char)recentRecordLoadingSetup;
- (void)recordLoadingCompletion;
- (unsigned char)recordLoadingHandler:(id)arg1;
- (unsigned char)recordLoadingSetup;
- (id /* block */)resetEventNameRecordData;
- (void)resetRecordData;
- (void)setEventNameRecordsCompletion:(id /* block */)arg1;
- (void)setEventNameRecordsHandler:(id /* block */)arg1;
- (void)setEventNameRecordsSetup:(id /* block */)arg1;
- (void)setRecentEventNameRecordsCompletion:(id /* block */)arg1;
- (void)setRecentEventNameRecordsHandler:(id /* block */)arg1;
- (void)setRecentEventNameRecordsSetup:(id /* block */)arg1;
- (void)setResetEventNameRecordData:(id /* block */)arg1;

@end
