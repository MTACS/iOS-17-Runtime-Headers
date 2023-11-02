
@interface MXSpinTracerService : MXService {
    NSObject<OS_os_log> * _MXSpinTracerServiceLogHandle;
    NSObject<OS_dispatch_queue> * _requestQueue;
    NSMutableArray * _spinTracerDataPaths;
    NSMutableArray * _unarchivedSpinTracerData;
}

@property (retain) NSObject<OS_os_log> *MXSpinTracerServiceLogHandle;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *requestQueue;
@property (retain) NSMutableArray *spinTracerDataPaths;
@property (retain) NSMutableArray *unarchivedSpinTracerData;

+ (id)sharedSpinTracerService;

- (void).cxx_destruct;
- (id)MXSpinTracerServiceLogHandle;
- (bool)_updateService;
- (bool)diagnosticsAvailable;
- (bool)diagnosticsSupported;
- (id)getDiagnosticsForClient:(id)arg1 dateString:(id)arg2;
- (id)init;
- (id)requestQueue;
- (void)setMXSpinTracerServiceLogHandle:(id)arg1;
- (void)setRequestQueue:(id)arg1;
- (void)setSpinTracerDataPaths:(id)arg1;
- (void)setUnarchivedSpinTracerData:(id)arg1;
- (id)spinTracerDataPaths;
- (bool)startService;
- (bool)stopService;
- (void)unarchiveSpinTracerDataForDateString:(id)arg1;
- (id)unarchivedSpinTracerData;

@end
