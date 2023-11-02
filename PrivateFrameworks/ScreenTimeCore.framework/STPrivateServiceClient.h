
@interface STPrivateServiceClient : NSObject {
    NSXPCConnection * _connection;
}

@property (retain) NSXPCConnection *connection;

- (void).cxx_destruct;
- (void)authenticateRestrictionsPasscode:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)clearRestrictionsPasscodeWithError:(id*)arg1;
- (void)communicationPoliciesWithCompletionHandler:(id /* block */)arg1;
- (id)communicationPoliciesWithError:(id*)arg1;
- (id)connection;
- (bool)contactsEditable;
- (void)dealloc;
- (void)fetchContactManagementStateForDSID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (bool)isContentPrivacyEnabledForDSID:(id)arg1 error:(id*)arg2;
- (void)isRestrictionsPasscodeSetWithCompletionHandler:(id /* block */)arg1;
- (bool)isRestrictionsPasscodeSetWithError:(id*)arg1;
- (bool)isScreenTimeEnabledWithError:(id*)arg1;
- (bool)isScreenTimeSyncEnabledWithError:(id*)arg1;
- (void)lastCommunicationLimitsModifcationDateForDSID:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)needsToSetRestrictionsPasscodeWithError:(id*)arg1;
- (id)primaryiCloudCardDAVAccountIdentifierWithError:(id*)arg1;
- (void)requestToManageContactsForDSID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)restrictionsPasscodeEntryAttemptCountAndTimeoutDateWithCompletionHandler:(id /* block */)arg1;
- (void)setConnection:(id)arg1;
- (void)setManageContactsEnabled:(bool)arg1 forDSID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setScreenTimeEnabled:(bool)arg1 error:(id*)arg2;
- (void)setScreenTimeSyncEnabled:(bool)arg1 error:(id*)arg2;
- (void)shouldRequestMoreTimeWithCompletionHandler:(id /* block */)arg1;
- (bool)shouldRequestMoreTimeWithError:(id*)arg1;

@end
