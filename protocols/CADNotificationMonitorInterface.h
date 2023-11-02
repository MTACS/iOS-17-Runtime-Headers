
@protocol CADNotificationMonitorInterface

@required

- (void)CADCalendarSetClearedFromNotificationCenter:(void *)arg1 error:(void *)arg2; // needs 2 arg types, found 7: CADObjectID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)CADDatabaseGetEventNotificationItemsAfterDate:(void *)arg1 excludingUncheckedCalendars:(void *)arg2 filteredByShowsNotificationsFlag:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 13: NSDate *, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSArray *, NSArray *, NSArray *, NSDate *, void*
- (void)CADDatabaseGetInboxRepliedSectionItems:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSArray *, NSArray *, void*
- (void)CADDatabaseGetInviteReplyNotifications:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSArray *, void*
- (void)CADDatabaseGetNotificationCountForSourceWithExternalIdentifier:(void *)arg1 excludingDelegateSources:(void *)arg2 filteredByShowsNotificationsFlag:(void *)arg3 expanded:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 12: NSString *, bool, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, unsigned long long, NSArray *, void*
- (void)CADDatabaseGetResourceChanges:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSArray *, void*
- (void)CADDatabaseGetSharedCalendarInvitationsWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSArray *, void*
- (void)CADEventSetInvitationStatus:(void *)arg1 forEvents:(void *)arg2 error:(void *)arg3; // needs 3 arg types, found 8: int, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)CADResourceChange:(void *)arg1 setAlertedWithError:(void *)arg2; // needs 2 arg types, found 7: CADObjectID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*

@end
