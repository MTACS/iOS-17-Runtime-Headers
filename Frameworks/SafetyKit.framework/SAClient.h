
@interface SAClient : NSObject <SAClientProtocol> {
    id /* block */  _authenticationRequestHandler;
    NSXPCConnection * _connection;
    <SACrashDetectionClientProtocol> * _crashDetectionClientDelegate;
    <SAEmergencyResponseClientProtocol> * _emergencyResponseClientDelegate;
    NSObject<OS_dispatch_queue> * _messageQueue;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property (nonatomic) <SACrashDetectionClientProtocol> *crashDetectionClientDelegate;
@property (nonatomic) <SAEmergencyResponseClientProtocol> *emergencyResponseClientDelegate;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)callAuthenticationRequestHandlerWithError;
- (void)callAuthenticationRequestHandlerWithStatus:(long long)arg1 error:(id)arg2;
- (id)connection;
- (id)crashDetectionClientDelegate;
- (void)dialVoiceCallToPhoneNumber:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)emergencyResponseClientDelegate;
- (id)init;
- (void)requestCrashDetectionAuthorization:(id /* block */)arg1;
- (void)requestMostRecentCrashDetectionEvent;
- (id)serverProxy;
- (void)setConnection:(id)arg1;
- (void)setCrashDetectionClientDelegate:(id)arg1;
- (void)setEmergencyResponseClientDelegate:(id)arg1;
- (void)updateMostRecentCrashDetectionEvent:(id)arg1;
- (void)updateVoiceCallStatus:(long long)arg1;

@end
