
@interface NSConcreteTask : NSTask {
    _Atomic unsigned long long  __exitRunningInfo;
    NSMutableDictionary * _dictionary;
    NSObject<OS_dispatch_source> * _dsrc;
    _Atomic bool  _isSpawnedProcessDisclaimed;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    int  _pid;
    BOOL  _qos;
    long long  _suspendCount;
    id /* block */  _terminationHandler;
}

- (long long)_platformExitInformation;
- (int)_procid;
- (void)_setTerminationHandler:(id /* block */)arg1;
- (void)_withTaskDictionary:(id /* block */)arg1;
- (id)arguments;
- (id)currentDirectoryPath;
- (void)dealloc;
- (id)environment;
- (id)init;
- (void)interrupt;
- (bool)isRunning;
- (bool)isSpawnedProcessDisclaimed;
- (void)launch;
- (bool)launchAndReturnError:(id*)arg1;
- (id)launchPath;
- (bool)launchWithDictionary:(id)arg1 error:(id*)arg2;
- (id)preferredArchitectures;
- (int)processIdentifier;
- (long long)qualityOfService;
- (bool)resume;
- (void)setArguments:(id)arg1;
- (void)setCurrentDirectoryPath:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setLaunchPath:(id)arg1;
- (void)setPreferredArchitectures:(id)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setSpawnedProcessDisclaimed:(bool)arg1;
- (void)setStandardError:(id)arg1;
- (void)setStandardInput:(id)arg1;
- (void)setStandardOutput:(id)arg1;
- (void)setStartsNewProcessGroup:(bool)arg1;
- (void)setTaskDictionary:(id)arg1;
- (void)setTerminationHandler:(id /* block */)arg1;
- (id)standardError;
- (id)standardInput;
- (id)standardOutput;
- (bool)suspend;
- (long long)suspendCount;
- (id)taskDictionary;
- (void)terminate;
- (void)terminateTask;
- (id /* block */)terminationHandler;
- (long long)terminationReason;
- (int)terminationStatus;
- (void)waitUntilExit;

@end
