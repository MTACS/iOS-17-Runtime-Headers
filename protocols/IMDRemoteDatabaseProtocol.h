
@protocol IMDRemoteDatabaseProtocol <IMDChatQueries, IMDMessageQueries, IMDHandleQueries, IMDAttachmentQueries, IMDNotificationQueries, IMDDatabaseQueries, IMDKeyValueQueries, NSObject>

@required

- (void)notifyFirstUnlockComplete;
- (void)sendLegacyXPCCommandWithObject:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: IMXPCDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, IMXPCDictionary *, void*

@end
