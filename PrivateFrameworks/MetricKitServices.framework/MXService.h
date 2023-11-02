
@interface MXService : NSObject {
    NSString * _currentClient;
    bool  _isStarted;
    long long  _sourceID;
}

@property (retain) NSString *currentClient;
@property (readonly) bool isStarted;
@property (readonly) long long sourceID;

- (void).cxx_destruct;
- (id)currentClient;
- (bool)diagnosticsAvailable;
- (bool)diagnosticsSupported;
- (id)getDiagnosticsForClient:(id)arg1 dateString:(id)arg2;
- (id)getMetricsForClient:(id)arg1;
- (id)init;
- (id)initWithSourceID:(long long)arg1;
- (bool)isStarted;
- (bool)metricsAvailable;
- (bool)metricsSupported;
- (id)pruneSourceData:(id)arg1;
- (void)setCurrentClient:(id)arg1;
- (long long)sourceID;
- (bool)startService;
- (bool)stopService;

@end
