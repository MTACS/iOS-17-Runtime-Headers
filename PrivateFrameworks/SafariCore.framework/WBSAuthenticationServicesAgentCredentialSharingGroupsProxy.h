
@interface WBSAuthenticationServicesAgentCredentialSharingGroupsProxy : NSObject <WBSAuthenticationServicesAgentCredentialSharingGroupsUserNotificationsProtocol> {
    NSXPCConnection * _connection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setUpConnection:(id)arg1;
- (void)deleteGroupWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)groupsUpdatedWithInfos:(id)arg1;
- (void)groupsUpdatedWithInfos:(id)arg1 shouldForceShowingNotifications:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (void)leaveGroupWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)notifyUserAboutSharedSavedAccountsInRecentlyDeleted:(id /* block */)arg1;
- (void)setDebugIgnoreDateChecksForRecentlyDeletedNotificationsDefault:(bool)arg1;

@end
