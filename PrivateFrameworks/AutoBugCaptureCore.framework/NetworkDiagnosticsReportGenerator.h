
@interface NetworkDiagnosticsReportGenerator : DiagnosticReportGenerator <NetDiagnosticsShimDelegate> {
    NetDiagnosticsShim * _netDiags;
    NSDictionary * _netDiagsResults;
    NSMutableDictionary * _options;
    NSDate * _reportStart;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NetDiagnosticsShim *netDiags;
@property (nonatomic, retain) NSDictionary *netDiagsResults;
@property (nonatomic, retain) NSMutableDictionary *options;
@property (nonatomic, retain) NSDate *reportStart;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createDefaultTaskDictionaryWithTaskName:(const char *)arg1;
- (id)initWithQueue:(id)arg1;
- (void)netDiagnosticTaskStatusChangedFor:(id)arg1 toStatus:(int)arg2;
- (id)netDiags;
- (id)netDiagsResults;
- (id)options;
- (id)reportStart;
- (void)setNetDiags:(id)arg1;
- (void)setNetDiagsResults:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setReportStart:(id)arg1;
- (bool)startNetDiagnosticsTaskWithReply:(id /* block */)arg1;
- (bool)startReportGeneration;

@end
