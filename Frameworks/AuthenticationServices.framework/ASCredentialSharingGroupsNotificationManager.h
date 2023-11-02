
@interface ASCredentialSharingGroupsNotificationManager : NSObject <WBSAuthenticationServicesAgentCredentialSharingGroupsUserNotificationsProtocol> {
    UNUserNotificationCenter * _notificationCenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_getNumberOfPasswords:(unsigned long long*)arg1 numberOfPasskeys:(unsigned long long*)arg2 inSavedAccounts:(id)arg3;
- (void)_moveSavedAccountsOriginallyContributedByCurrentUserToPersonalKeychainFromGroupID:(id)arg1;
- (id)_notificationBodyStringForGroupMembers:(id)arg1 addedToGroup:(id)arg2;
- (id)_notificationBodyStringForSharedRecentlyDeletedSavedAccount:(id)arg1;
- (id)_notificationBodyStringForSharedRecentlyDeletedSavedAccounts:(id)arg1;
- (id)_notificationBodyStringForSharedRecentlyDeletedSavedAccountsFromMultipleGroups:(id)arg1;
- (id)_notificationBodyStringForSharedRecentlyDeletedSavedAccountsFromSingleGroup:(id)arg1;
- (void)_notifyUserAboutGroupMembers:(id)arg1 addedToGroup:(id)arg2;
- (void)_notifyUserAboutSharedSavedAccountsInRecentlyDeleted:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_presentNotificationWithContent:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteGroupWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)groupsUpdatedWithInfos:(id)arg1;
- (void)groupsUpdatedWithInfos:(id)arg1 shouldForceShowingNotifications:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (void)leaveGroupWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)notifyUserAboutSharedSavedAccountsInRecentlyDeleted:(id /* block */)arg1;
- (void)setDebugIgnoreDateChecksForRecentlyDeletedNotificationsDefault:(bool)arg1;

@end
