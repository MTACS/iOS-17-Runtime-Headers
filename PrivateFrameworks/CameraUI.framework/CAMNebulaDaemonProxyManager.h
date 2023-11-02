
@interface CAMNebulaDaemonProxyManager : NSObject <CAMNebulaDaemonClientProtocol, CAMNebulaDaemonProtocol> {
    NSXPCConnection * __connection;
    long long  __connectionCount;
    NSObject<OS_dispatch_queue> * __queue;
    <CAMNebulaDaemonIrisClientProtocol> * _irisClientDelegate;
    <CAMNebulaDaemonTimelapseClientProtocol> * _timelapseClientDelegate;
}

@property (nonatomic, readonly) NSXPCConnection *_connection;
@property (nonatomic, readonly) long long _connectionCount;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_queue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <CAMNebulaDaemonIrisClientProtocol> *irisClientDelegate;
@property (readonly) Class superclass;
@property (nonatomic) <CAMNebulaDaemonTimelapseClientProtocol> *timelapseClientDelegate;

+ (id)_clientProtocolInterface;
+ (id)_daemonProtocolInterface;

- (void).cxx_destruct;
- (void)_closeConnectionToDaemon;
- (id)_connection;
- (long long)_connectionCount;
- (void)_ensureConnectionToDaemon;
- (void)_getProxyForExecutingBlock:(id /* block */)arg1;
- (id)_queue;
- (void)closeConnectionToDaemon;
- (void)enqueueIrisVideoJobs:(id)arg1;
- (void)ensureConnectionToDaemon;
- (void)finishCaptureForTimelapseWithUUID:(id)arg1;
- (void)forceStopTimelapseCaptureWithReasons:(long long)arg1;
- (id)init;
- (id)irisClientDelegate;
- (void)nebulaDaemonDidCompleteLocalVideoPersistenceWithResult:(id)arg1;
- (void)performCrashRecoveryIfNeededForceEndLastTimelapseSession:(bool)arg1;
- (void)performIrisCrashRecovery;
- (void)pingAfterInterruption;
- (void)resumeTimelapseWithUUID:(id)arg1;
- (void)setIrisClientDelegate:(id)arg1;
- (void)setTimelapseClientDelegate:(id)arg1;
- (void)startTimelapseWithUUID:(id)arg1;
- (void)stopTimelapseWithUUID:(id)arg1;
- (id)timelapseClientDelegate;
- (void)updatePendingWorkFromDiskForceEndLastSession:(bool)arg1;
- (void)updateTimelapseWithUUID:(id)arg1;

@end