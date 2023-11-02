
@interface DTProcessControlService : DTXService <DTProcessControlServiceAuthorizedMethods> {
    NSMutableDictionary * _activeIODispatchSources;
    NSObject<OS_dispatch_queue> * _deathNoteQueue;
    NSMutableArray * _pids;
    NSMutableArray * _sources;
    NSObject<OS_dispatch_queue> * _synchronousRedirectionQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)registerCapabilities:(id)arg1;

- (void).cxx_destruct;
- (void)_performMemoryWarningForPid:(int)arg1;
- (int)cleanupPid:(int)arg1;
- (void)handleRedirectionIterationForFileDescriptor:(int)arg1 forPid:(int)arg2 withDispatchSource:(id)arg3;
- (id)initWithChannel:(id)arg1;
- (id)insertViewDebuggingLibrariesForPid:(int)arg1;
- (void)killPid:(id)arg1;
- (id)launchSuspendedProcessWithDevicePath:(id)arg1 bundleIdentifier:(id)arg2 environment:(id)arg3 arguments:(id)arg4;
- (id)launchSuspendedProcessWithDevicePath:(id)arg1 bundleIdentifier:(id)arg2 environment:(id)arg3 arguments:(id)arg4 options:(id)arg5;
- (int)maybeRedirectFromFileDescriptor:(int)arg1 fromPid:(int)arg2 withScratchBuffer:(char *)arg3 ofByteLength:(unsigned long long)arg4;
- (id)requestDisableMemoryLimitsForPid:(int)arg1;
- (void)resumePid:(id)arg1;
- (void)sendProcessControlEvent:(id)arg1 toPid:(id)arg2;
- (void)sendSignal:(id)arg1 toPid:(id)arg2;
- (void)startObservingPid:(id)arg1;
- (void)stopObservingPid:(id)arg1;
- (void)suspendPid:(id)arg1;
- (void)watchOutputFileDescriptor:(int)arg1 forPid:(int)arg2;
- (void)watchOutputFileName:(id)arg1 directory:(id)arg2 forPid:(int)arg3;

@end
