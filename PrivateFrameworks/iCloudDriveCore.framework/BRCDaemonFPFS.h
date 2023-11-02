
@interface BRCDaemonFPFS : NSObject <BRCReachabilityDelegate, NSXPCListenerDelegate> {
    NSObject<OS_dispatch_source> * _acceptWaiterTimer;
    NSObject<OS_dispatch_queue> * _accountLoaderQueue;
    NSObject<OS_dispatch_queue> * _accountReadyQueue;
    NSObject<OS_dispatch_queue> * _accountResumedQueue;
    Class  _containerClass;
    bool  _disableAccountChangesHandling;
    bool  _disableAppsChangesHandling;
    unsigned long long  _forceIsGreedyState;
    bool  _resumed;
    int  _serverAvailabilityNotifyToken;
    NSMutableDictionary * _shareAcceptOperationsByToken;
    NSOperationQueue * _shareAcceptQueue;
    NSMutableDictionary * _shareAcceptWaitersByToken;
    bool  _shuttingDown;
    NSObject<OS_dispatch_source> * _sigIntSrc;
    NSObject<OS_dispatch_source> * _sigQuitSrc;
    NSObject<OS_dispatch_source> * _sigTermSrc;
    NSDate * _startupDate;
    NSObject<OS_dispatch_queue> * _startupQueue;
    NSXPCListener * _tokenListener;
    bool  _unitTestMode;
    NSXPCListener * _xpcListener;
    NSObject<OS_dispatch_queue> * _xpcListenersReadyQueue;
}

@property (nonatomic, retain) Class containerClass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableAccountChangesHandling;
@property (nonatomic) bool disableAppsChangesHandling;
@property (nonatomic, readonly) NSXPCListenerEndpoint *endpoint;
@property (nonatomic) unsigned long long forceIsGreedyState;
@property (readonly) unsigned long long hash;
@property (getter=isShuttingDown, nonatomic, readonly) bool shuttingDown;
@property (nonatomic, readonly) NSDate *startupDate;
@property (readonly) Class superclass;

+ (id)UTIForExtension:(id)arg1;
+ (id)daemon;
+ (bool)isDaemonRunning;

- (void).cxx_destruct;
- (void)_finishStartup;
- (bool)_haveRequiredKernelFeatures;
- (void)_initSignals;
- (void)_setDoneXpcActivity:(id)arg1 description:(id)arg2;
- (void)_setupCacheDelete;
- (void)_setupVNodeRapidAging;
- (void)_startXPCListeners;
- (void)_startupAndLoadAccount;
- (Class)containerClass;
- (id)currentAccountHandler;
- (id)currentSession;
- (bool)disableAccountChangesHandling;
- (bool)disableAppsChangesHandling;
- (void)dumpToContext:(id)arg1;
- (id)endpoint;
- (void)exitWithCode:(int)arg1;
- (unsigned long long)forceIsGreedyState;
- (id)getCurrentSessionMustFinishedLoading:(bool)arg1;
- (void)handleExitSignal:(int)arg1;
- (id)init;
- (bool)isShuttingDown;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)localeDidChange;
- (void)networkReachabilityChanged:(bool)arg1;
- (void)networkReachabilityFlagsChanged:(unsigned int)arg1;
- (void)performWithSessionForVolume:(id)arg1 action:(id /* block */)arg2;
- (id)registerShareAcceptOperation:(id)arg1 forURL:(id)arg2;
- (void)registerWaiterBlock:(id /* block */)arg1 forShareURL:(id)arg2;
- (void)restart;
- (void)resumeIPCAcceptation;
- (bool)selfCheck:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (void)setContainerClass:(Class)arg1;
- (void)setDisableAccountChangesHandling:(bool)arg1;
- (void)setDisableAppsChangesHandling:(bool)arg1;
- (void)setForceIsGreedyState:(unsigned long long)arg1;
- (void)setUpAnonymousListener;
- (void)setUpSandbox;
- (void)start;
- (void)startedUpInSyncBubble;
- (id)startupDate;
- (void)suspendIPCAcceptation;
- (void)waitForConfiguration;
- (void)waitOnAccountResumedQueue;

@end
