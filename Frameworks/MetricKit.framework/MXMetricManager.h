
@interface MXMetricManager : NSObject <MXXPCClient> {
    bool  _checkedDiagnostics;
    bool  _checkedMetrics;
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _iVarQueue;
    NSObject<OS_os_log> * _managerLogHandle;
    int  _metricToken;
    NSArray * _pastDiagnosticPayloads;
    NSArray * _pastPayloads;
    NSHashTable * _subscribers;
}

@property bool checkedDiagnostics;
@property bool checkedMetrics;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *iVarQueue;
@property (nonatomic, retain) NSObject<OS_os_log> *managerLogHandle;
@property (nonatomic) int metricToken;
@property (retain) NSArray *pastDiagnosticPayloads;
@property (retain) NSArray *pastPayloads;
@property (nonatomic, retain) NSHashTable *subscribers;

+ (bool)extendLaunchMeasurementForTaskID:(id)arg1 error:(id*)arg2;
+ (bool)finishExtendedLaunchMeasurementForTaskID:(id)arg1 error:(id*)arg2;
+ (id)makeLogHandleWithCategory:(id)arg1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (bool)_cachedPayloadAvailable;
- (void)_checkAndDeliverDiagnosticReports;
- (void)_checkAndDeliverMetricReports;
- (id)_createXPCConnection;
- (void)addSubscriber:(id)arg1;
- (bool)checkedDiagnostics;
- (bool)checkedMetrics;
- (id)connection;
- (void)dealloc;
- (void)deliverDiagnosticPayload:(id)arg1;
- (void)deliverMetricPayload:(id)arg1;
- (id)iVarQueue;
- (id)init;
- (id)managerLogHandle;
- (id)mergeDiagnosticsAtLocation:(id)arg1;
- (int)metricToken;
- (id)pastDiagnosticPayloads;
- (id)pastPayloads;
- (void)registrationProcessed;
- (void)removeSubscriber:(id)arg1;
- (void)setCheckedDiagnostics:(bool)arg1;
- (void)setCheckedMetrics:(bool)arg1;
- (void)setConnection:(id)arg1;
- (void)setIVarQueue:(id)arg1;
- (void)setManagerLogHandle:(id)arg1;
- (void)setMetricToken:(int)arg1;
- (void)setPastDiagnosticPayloads:(id)arg1;
- (void)setPastPayloads:(id)arg1;
- (void)setSubscribers:(id)arg1;
- (id)subscribers;

@end
