
@interface ExchangeAccount : IMAPAccount

+ (id)accountTypeString;

- (id)_defaultSpecialMailboxNameForType:(int)arg1;
- (void)_filterMailboxList:(id)arg1 forMailboxWithPath:(id)arg2 iisServer:(id)arg3;
- (bool)_syncOnly_defaultValueForShouldStoreJunkOnServer;
- (Class)connectionClass;
- (void)filterMailboxList:(id)arg1 forMailbox:(id)arg2 options:(int)arg3;
- (bool)shouldFetchACEDBInfoForError:(id)arg1;
- (bool)storeDraftsOnServer;
- (bool)storeSentMessagesOnServer;

@end
