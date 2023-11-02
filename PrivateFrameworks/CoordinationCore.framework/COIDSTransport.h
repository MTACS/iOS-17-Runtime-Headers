
@interface COIDSTransport : NSObject <COTransportProtocol> {
    NSMutableDictionary * _acceptableResponses;
    NSObject<OS_nw_activity> * _activity;
    <COTransportDelegate> * _delegate;
    COIDSServiceDirector * _director;
    COExecutionContext * _executionContext;
    NSMutableDictionary * _outstandingRequests;
    <CODiscoveryRecordProtocol> * _record;
    NSMutableSet * _registeredCommands;
    COConstituent * _remote;
    double  _requestTimeout;
    bool  _resolvedIDSIdentifier;
    NSObject<OS_dispatch_source> * _timer;
    bool  _timerEnabled;
}

@property (nonatomic, retain) NSMutableDictionary *acceptableResponses;
@property (nonatomic, readonly) NSObject<OS_nw_activity> *activity;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <COTransportDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) COIDSServiceDirector *director;
@property (nonatomic, readonly) COExecutionContext *executionContext;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *outstandingRequests;
@property (nonatomic, readonly) <CODiscoveryRecordProtocol> *record;
@property (nonatomic, retain) NSMutableSet *registeredCommands;
@property (nonatomic, retain) COConstituent *remote;
@property (nonatomic) double requestTimeout;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *timer;
@property (getter=isTimerEnabled, nonatomic) bool timerEnabled;

- (void).cxx_destruct;
- (void)_configureTimer;
- (void)_handleErrorFromMessage:(id)arg1 incomingResponseIdentifier:(id)arg2 from:(id)arg3;
- (void)_handleRequestFromMessage:(id)arg1 incomingRequestIdentifier:(id)arg2 from:(id)arg3;
- (void)_handleResponseFromMessage:(id)arg1 incomingResponseIdentifier:(id)arg2 from:(id)arg3;
- (void)_timerFired;
- (void)_timerRequestAdded:(id)arg1;
- (id)acceptableResponses;
- (id)acceptableResponsesForRequest:(Class)arg1;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id)activity;
- (id)delegate;
- (void)deregisterCommandForClass:(Class)arg1;
- (void)deregisterRequestForClass:(Class)arg1;
- (id)description;
- (id)director;
- (id)executionContext;
- (void)handleMessage:(id)arg1 requestIdentifier:(id)arg2 responseIdentifier:(id)arg3 from:(id)arg4;
- (unsigned long long)hash;
- (id)initWithDiscoveryRecord:(id)arg1 executionContext:(id)arg2;
- (void)invalidateWithError:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isTimerEnabled;
- (id)outstandingRequests;
- (id)record;
- (void)registerCommandForClass:(Class)arg1 withCompletion:(id /* block */)arg2;
- (void)registerRequestForClass:(Class)arg1 withCompletion:(id /* block */)arg2;
- (id)registeredCommands;
- (id)remote;
- (double)requestTimeout;
- (void)sendCommand:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)sendRequest:(id)arg1 withResponseHandler:(id /* block */)arg2;
- (void)setAcceptableResponses:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOutstandingRequests:(id)arg1;
- (void)setRegisteredCommands:(id)arg1;
- (void)setRemote:(id)arg1;
- (void)setRequestTimeout:(double)arg1;
- (void)setTimerEnabled:(bool)arg1;
- (id)shortDescription;
- (bool)supportsLeaderElection;
- (id)timer;

@end
