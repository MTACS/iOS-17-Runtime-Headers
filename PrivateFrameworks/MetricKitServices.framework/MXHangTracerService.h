
@interface MXHangTracerService : MXService {
    NSObject<OS_os_log> * _MXHangTracerServiceLogHandle;
    NSMutableArray * _hangTracerDataPaths;
    NSObject<OS_dispatch_queue> * _requestQueue;
    NSMutableArray * _unarchivedHangTracerData;
}

@property (retain) NSObject<OS_os_log> *MXHangTracerServiceLogHandle;
@property (retain) NSMutableArray *hangTracerDataPaths;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *requestQueue;
@property (retain) NSMutableArray *unarchivedHangTracerData;

+ (id)sharedHangTracerService;

- (void).cxx_destruct;
- (id)MXHangTracerServiceLogHandle;
- (bool)_updateService;
- (bool)diagnosticsAvailable;
- (bool)diagnosticsSupported;
- (id)getDiagnosticsForClient:(id)arg1 dateString:(id)arg2;
- (id)hangTracerDataPaths;
- (id)init;
- (id)requestQueue;
- (void)setHangTracerDataPaths:(id)arg1;
- (void)setMXHangTracerServiceLogHandle:(id)arg1;
- (void)setRequestQueue:(id)arg1;
- (void)setUnarchivedHangTracerData:(id)arg1;
- (bool)startService;
- (bool)stopService;
- (void)unarchiveHangTracerDataForDateString:(id)arg1;
- (id)unarchivedHangTracerData;

@end
