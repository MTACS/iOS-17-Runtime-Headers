
@interface SpeedTestConfig : NSObject {
    bool  inProgress;
    NPTPerformanceTest * performanceTest;
}

- (void).cxx_destruct;
- (void)abort;
- (void)dealloc;
- (bool)inProgress;
- (id)init;
- (void)startDownloadTest:(id /* block */)arg1;

@end
