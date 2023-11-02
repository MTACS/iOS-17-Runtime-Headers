
@interface ICManager : NSObject <WFApplicationStateObserver> {
    bool  _allowsOpeningFromBackground;
    ICScheme * _callbackScheme;
    bool  _enteringForeground;
    NSDistributedNotificationCenter * _notificationCenter;
    NSLock * _queueLock;
    NSMutableArray * _queuedRequests;
    bool  _resignedActiveWhileOpeningURL;
}

@property (nonatomic) bool allowsOpeningFromBackground;
@property (nonatomic, retain) ICScheme *callbackScheme;
@property (nonatomic) bool enteringForeground;
@property (nonatomic, retain) NSDistributedNotificationCenter *notificationCenter;
@property (nonatomic, retain) NSLock *queueLock;
@property (nonatomic, retain) NSMutableArray *queuedRequests;
@property (nonatomic) bool resignedActiveWhileOpeningURL;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_performRequest:(id)arg1;
- (bool)allowsOpeningFromBackground;
- (void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2;
- (id)callbackScheme;
- (void)dealloc;
- (bool)enteringForeground;
- (bool)handleIncomingRequest:(id)arg1;
- (bool)handleOpenURL:(id)arg1 fromSourceApplication:(id)arg2 errorHandler:(id /* block */)arg3;
- (bool)handleOpenURL:(id)arg1 fromSourceApplication:(id)arg2 errorHandler:(id /* block */)arg3 postNotification:(bool)arg4;
- (void)handleOpenURLRequestNotification:(id)arg1;
- (id)init;
- (id)notificationCenter;
- (void)performQueuedRequestIfApplicable;
- (void)performRequest:(id)arg1;
- (id)popQueuedRequest;
- (id)queueLock;
- (void)queueRequest:(id)arg1;
- (id)queuedRequests;
- (void)registerHandler:(id /* block */)arg1 forIncomingRequestsWithAction:(id)arg2 legacyAction:(id)arg3 scheme:(id)arg4;
- (void)registerHandler:(id /* block */)arg1 forIncomingRequestsWithAction:(id)arg2 scheme:(id)arg3;
- (void)removeHandlerForIncomingRequestsWithAction:(id)arg1 scheme:(id)arg2;
- (bool)resignedActiveWhileOpeningURL;
- (void)setAllowsOpeningFromBackground:(bool)arg1;
- (void)setCallbackScheme:(id)arg1;
- (void)setEnteringForeground:(bool)arg1;
- (void)setNotificationCenter:(id)arg1;
- (void)setQueueLock:(id)arg1;
- (void)setQueuedRequests:(id)arg1;
- (void)setResignedActiveWhileOpeningURL:(bool)arg1;

@end
