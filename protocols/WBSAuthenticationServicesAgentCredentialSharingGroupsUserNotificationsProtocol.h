
@protocol WBSAuthenticationServicesAgentCredentialSharingGroupsUserNotificationsProtocol <KCSharingGroupNotificationProtocol>

@required

- (void)deleteGroupWithID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)groupsUpdatedWithInfos:(void *)arg1 shouldForceShowingNotifications:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: NSArray *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)leaveGroupWithID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)notifyUserAboutSharedSavedAccountsInRecentlyDeleted:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setDebugIgnoreDateChecksForRecentlyDeletedNotificationsDefault:(bool)arg1;

@end
