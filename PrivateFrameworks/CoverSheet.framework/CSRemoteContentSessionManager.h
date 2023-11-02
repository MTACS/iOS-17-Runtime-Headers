
@interface CSRemoteContentSessionManager : NSObject <CSRemoteContentSessionPreferencesProvider> {
    NSObject<OS_dispatch_queue> * _accessSerialQueue;
    <SBFAuthenticationStatusProvider> * _authenticationStatusProvider;
    <CSRemoteContentSessionHostDelegate> * _forwardingHostDelegate;
    NSMutableDictionary * _serviceNameToPreferences;
    NSMutableDictionary * _sessionIDToSession;
}

@property (nonatomic, readonly) <SBFAuthenticationStatusProvider> *authenticationStatusProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <CSRemoteContentSessionHostDelegate> *forwardingHostDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_queue_createSessionWithDefinition:(id)arg1;
- (id)_queue_existingSessions;
- (id)_queue_existingSessionsWithDefinition:(id)arg1;
- (id)authenticationStatusProvider;
- (id)createSessionWithDefinition:(id)arg1;
- (void)didInvalidateSessionWithSessionID:(id)arg1;
- (id)existingSessions;
- (id)existingSessionsWithDefinition:(id)arg1;
- (id)forwardingHostDelegate;
- (id)initWithAuthenticationStatusProvider:(id)arg1;
- (id)preferencesForRemoteContentSession:(id)arg1;
- (void)remoteContentSession:(id)arg1 didUpdateWithPreferences:(id)arg2;
- (void)setForwardingHostDelegate:(id)arg1;

@end
