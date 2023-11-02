
@interface MXReportCrashService : MXService {
    NSObject<OS_os_log> * _MXReportCrashServiceLogHandle;
    NSMutableArray * _reportCrashDataPaths;
    NSObject<OS_dispatch_queue> * _requestQueue;
    NSMutableArray * _unarchivedReportCrashData;
}

@property (retain) NSObject<OS_os_log> *MXReportCrashServiceLogHandle;
@property (retain) NSMutableArray *reportCrashDataPaths;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *requestQueue;
@property (retain) NSMutableArray *unarchivedReportCrashData;

+ (id)sharedReportCrashService;

- (void).cxx_destruct;
- (id)MXReportCrashServiceLogHandle;
- (bool)_updateService;
- (bool)diagnosticsAvailable;
- (bool)diagnosticsSupported;
- (id)getDiagnosticsForClient:(id)arg1 dateString:(id)arg2;
- (id)init;
- (id)reportCrashDataPaths;
- (id)requestQueue;
- (void)setMXReportCrashServiceLogHandle:(id)arg1;
- (void)setReportCrashDataPaths:(id)arg1;
- (void)setRequestQueue:(id)arg1;
- (void)setUnarchivedReportCrashData:(id)arg1;
- (bool)startService;
- (bool)stopService;
- (void)unarchiveReportCrashDataForDateString:(id)arg1;
- (id)unarchivedReportCrashData;

@end
