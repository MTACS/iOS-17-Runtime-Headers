
@interface HMThreadExternalCommissioner : NSObject <BorderAgentListener, HMFCancellable, HMFLogging, HMFTimerDelegate, HMThreadExternalCommissioner> {
    bool  _active;
    BorderAgentConnector * _borderAgentConnector;
    BorderAgentFinder * _borderAgentFinder;
    NSError * _cancelError;
    bool  _commissioning;
    HMThreadNetworkCredentials * _credentials;
    HMHome * _credentialsHome;
    NSUUID * _credentialsUUID;
    id /* block */  _finderCompletion;
    double  _finderTimeoutInterval;
    HMFTimer * _finderTimer;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, retain) BorderAgentConnector *borderAgentConnector;
@property (nonatomic, readonly) BorderAgentFinder *borderAgentFinder;
@property (nonatomic, retain) NSError *cancelError;
@property (getter=isCommissioning, nonatomic) bool commissioning;
@property (nonatomic, retain) HMThreadNetworkCredentials *credentials;
@property (nonatomic, readonly) HMHome *credentialsHome;
@property (nonatomic, readonly) NSUUID *credentialsUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ finderCompletion;
@property (nonatomic, readonly) double finderTimeoutInterval;
@property (nonatomic, retain) HMFTimer *finderTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_cancelWithError:(id)arg1;
- (void)_commissionAccessoryWithService:(id)arg1 eui64:(id)arg2 commissionerPassphrase:(id)arg3 PSKc:(id)arg4 joinerPassphrase:(id)arg5 completion:(id /* block */)arg6;
- (id)_computeJoinerPassphraseFromSetupCode:(id)arg1;
- (id)_ensureSetupCodeFormat:(id)arg1;
- (void)_findBorderRouterForCredentials:(id)arg1 completion:(id /* block */)arg2;
- (void)_resolveCredentialsWithCompletion:(id /* block */)arg1;
- (bool)_txtRecordDataMatches:(id)arg1;
- (void)agentChanged;
- (id)borderAgentConnector;
- (id)borderAgentFinder;
- (void)cancel;
- (id)cancelError;
- (id)commissionAccessoryWithEui64:(id)arg1 setupCode:(id)arg2 completion:(id /* block */)arg3;
- (id)credentials;
- (id)credentialsHome;
- (id)credentialsUUID;
- (id /* block */)finderCompletion;
- (double)finderTimeoutInterval;
- (id)finderTimer;
- (id)initCommon;
- (id)initWithFinderTimeoutInterval:(double)arg1 borderAgentFinder:(id)arg2;
- (id)initWithHome:(id)arg1;
- (id)initWithNetworkCredentials:(id)arg1;
- (bool)isActive;
- (bool)isCommissioning;
- (id)logIdentifier;
- (void)setActive:(bool)arg1;
- (void)setBorderAgentConnector:(id)arg1;
- (void)setCancelError:(id)arg1;
- (void)setCommissioning:(bool)arg1;
- (void)setCredentials:(id)arg1;
- (void)setFinderCompletion:(id /* block */)arg1;
- (void)setFinderTimer:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (id)workQueue;

@end
