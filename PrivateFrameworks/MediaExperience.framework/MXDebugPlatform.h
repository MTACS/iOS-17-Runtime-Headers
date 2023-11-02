
@interface MXDebugPlatform : NSObject {
    NSObject<OS_os_log> * _logger;
    NSObject<OS_dispatch_queue> * _sysdiagnoseBlockQueue;
    NSMutableDictionary * _sysdiagnoseBlockRegistry;
}

@property (nonatomic, readonly) NSObject<OS_os_log> *logger;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *sysdiagnoseBlockQueue;
@property (nonatomic, readonly) NSMutableDictionary *sysdiagnoseBlockRegistry;

+ (id)sharedInstance;

- (void)dealloc;
- (void)executeSysdiagnoseBlocks;
- (id)init;
- (void)installSysdiagnoseBlock:(id)arg1 blockToRun:(id /* block */)arg2;
- (id)logger;
- (void)simulateCrash:(const char *)arg1;
- (id)sysdiagnoseBlockQueue;
- (id)sysdiagnoseBlockRegistry;

@end
