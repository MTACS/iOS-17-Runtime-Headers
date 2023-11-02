
@interface HMDRemoteMessageTransport : HMFMessageTransport <HMFDumpState, HMFLogging> {
    HMDAccountRegistry * _accountRegistry;
    <HMDHomeMembershipVerifier> * _homeMembershipVerifier;
    long long  _qualityOfService;
    <HMDRemoteMessageTransportReachabilityDelegate> * _reachabilityDelegate;
    HMFFuture * _startFuture;
    HMFPromise * _startPromise;
    int  _transportType;
}

@property (nonatomic, readonly) HMDAccountRegistry *accountRegistry;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HMDHomeMembershipVerifier> *homeMembershipVerifier;
@property (nonatomic, readonly) long long qualityOfService;
@property (nonatomic) <HMDRemoteMessageTransportReachabilityDelegate> *reachabilityDelegate;
@property (getter=isSecure, nonatomic, readonly) bool secure;
@property (nonatomic, readonly) HMFFuture *startFuture;
@property (nonatomic, readonly) HMFPromise *startPromise;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int transportType;

+ (id)_createModernTransportForProductInfo:(id)arg1 preferences:(id)arg2;
+ (id)logCategory;
+ (id)remoteMessageFromMessage:(id)arg1 secure:(bool)arg2 accountRegistry:(id)arg3;
+ (id)remoteMessageTransportsForProductInfo:(id)arg1;
+ (unsigned long long)restriction;

- (void).cxx_destruct;
- (id)accountRegistry;
- (bool)canSendMessage:(id)arg1;
- (long long)compareCapability:(id)arg1 key:(id)arg2 withCapability:(id)arg3;
- (void)configureWithHomeMembershipVerifier:(id)arg1;
- (bool)doesResponse:(id)arg1 matchAllCapabilities:(id)arg2;
- (id)dumpState;
- (id)homeMembershipVerifier;
- (id)init;
- (id)initWithAccountRegistry:(id)arg1;
- (bool)isSecure;
- (bool)isValidMessage:(id)arg1;
- (id)matchResponse:(id)arg1 requestedCapabilities:(id)arg2;
- (void)postDidReceiveRemoteMessageWithNoListenerFromDevice:(id)arg1;
- (long long)qualityOfService;
- (id)reachabilityDelegate;
- (id)remoteMessageFromMessage:(id)arg1;
- (void)setReachabilityDelegate:(id)arg1;
- (id)start;
- (id)startFuture;
- (id)startPromise;
- (int)transportType;

@end
