
@interface MXPowerlogService : MXService {
    NSObject<OS_os_log> * _MXPowerLogServiceLogHandle;
    NSMutableArray * _powerlogDataPaths;
    NSObject<OS_dispatch_queue> * _requestQueue;
    NSMutableArray * _unarchivedPowerlogData;
}

@property (retain) NSObject<OS_os_log> *MXPowerLogServiceLogHandle;
@property (retain) NSMutableArray *powerlogDataPaths;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *requestQueue;
@property (retain) NSMutableArray *unarchivedPowerlogData;

+ (id)sharedPowerlogService;

- (void).cxx_destruct;
- (id)MXPowerLogServiceLogHandle;
- (bool)_updateService;
- (id)getMetricsForClient:(id)arg1;
- (id)init;
- (bool)metricsAvailable;
- (bool)metricsSupported;
- (id)powerlogDataPaths;
- (id)requestQueue;
- (void)setMXPowerLogServiceLogHandle:(id)arg1;
- (void)setPowerlogDataPaths:(id)arg1;
- (void)setRequestQueue:(id)arg1;
- (void)setUnarchivedPowerlogData:(id)arg1;
- (bool)startService;
- (bool)stopService;
- (void)unarchivePowerlogData;
- (id)unarchivedPowerlogData;

@end
