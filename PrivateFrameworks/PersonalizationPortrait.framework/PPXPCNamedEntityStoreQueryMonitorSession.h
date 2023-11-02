
@interface PPXPCNamedEntityStoreQueryMonitorSession : NSObject {
    NSDate * _lastCallDate;
    PPRecordMonitoringHelper * _monitoringHelper;
}

- (void).cxx_destruct;
- (id)initWithMonitoringHelper:(id)arg1;
- (id)lastCallDate;
- (id)monitoringHelper;
- (void)setLastCallDate;

@end
