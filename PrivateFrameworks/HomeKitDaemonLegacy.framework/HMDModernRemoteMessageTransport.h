
@interface HMDModernRemoteMessageTransport : HMDRemoteMessageTransport <HMDRemoteMessageTransportReachabilityDelegate, HMFMessageTransportDelegate> {
    HMDModernTransportMessageContextManager * _contextManager;
    <HMDDateProvider> * _idsDateProvider;
    HMDRemoteMessageTransport * _idsTransport;
    NSMutableOrderedSet * _messageIDDedupeBuffer;
    bool  _rapportLinkSlow;
    HMDRemoteMessageTransport * _rapportTransport;
    <HMDDeviceResidencyProvider> * _residencyProvider;
    bool  _started;
    <HMDDateProvider> * _systemDateProvider;
    <HMDTimerProvider> * _timerProvider;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) HMDModernTransportMessageContextManager *contextManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HMDDateProvider> *idsDateProvider;
@property (nonatomic, readonly) HMDRemoteMessageTransport *idsTransport;
@property (nonatomic, readonly) NSMutableOrderedSet *messageIDDedupeBuffer;
@property (getter=isRapportLinkSlow, nonatomic) bool rapportLinkSlow;
@property (nonatomic, readonly) HMDRemoteMessageTransport *rapportTransport;
@property <HMDDeviceResidencyProvider> *residencyProvider;
@property (getter=isStarted) bool started;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HMDDateProvider> *systemDateProvider;
@property (nonatomic, readonly) <HMDTimerProvider> *timerProvider;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;
+ (id)requestStartTimeHeaderKey;
+ (id)timeToLiveHeaderKey;

- (void).cxx_destruct;
- (bool)canSendMessage:(id)arg1;
- (void)configureWithHomeMembershipVerifier:(id)arg1;
- (id)contextManager;
- (id)idsDateProvider;
- (id)idsTransport;
- (id)initWithAccountRegistry:(id)arg1;
- (id)initWithAccountRegistry:(id)arg1 rapportTransport:(id)arg2 idsTransport:(id)arg3 contextManager:(id)arg4 systemDateProvider:(id)arg5 idsDateProvider:(id)arg6 timerProvider:(id)arg7;
- (bool)isRapportLinkSlow;
- (bool)isSecure;
- (bool)isStarted;
- (id)messageIDDedupeBuffer;
- (void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2;
- (long long)qualityOfService;
- (id)rapportTransport;
- (id)residencyProvider;
- (void)sendMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setRapportLinkSlow:(bool)arg1;
- (void)setResidencyProvider:(id)arg1;
- (void)setStarted:(bool)arg1;
- (id)start;
- (id)systemDateProvider;
- (id)timerProvider;
- (void)transport:(id)arg1 idsIdentifier:(id)arg2 didAppearReachable:(bool)arg3;
- (id)workQueue;

@end
