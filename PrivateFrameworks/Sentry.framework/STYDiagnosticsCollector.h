
@interface STYDiagnosticsCollector : NSObject {
    NSObject<OS_os_log> * _logger;
    NSObject<OS_dispatch_queue> * _serialUtilityQueue;
}

@property (retain) NSObject<OS_os_log> *logger;
@property (retain) NSObject<OS_dispatch_queue> *serialUtilityQueue;

+ (id)sharedDiagnosticsCollector;

- (void).cxx_destruct;
- (void)collectTailspinForScenarioReport:(id)arg1 tailspinFileDescriptor:(int)arg2 completionHandler:(id /* block */)arg3;
- (id)logger;
- (id)serialUtilityQueue;
- (void)setLogger:(id)arg1;
- (void)setSerialUtilityQueue:(id)arg1;

@end
