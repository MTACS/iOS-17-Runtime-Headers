
@interface PMLAWDAvailableSessionsTracker : PMLAWDBaseTracker {
    AWDServerConnection * _awdServerConnection;
    <PMLAWDMetricQueryDelegate> * _delegate;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithAWDConnection:(id)arg1;
- (void)reportStatsToAWD;
- (void)setAWDMetricQueryDelegate:(id)arg1;

@end
