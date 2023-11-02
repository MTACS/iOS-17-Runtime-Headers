
@interface MFMailboxProvider : EDMailboxProvider {
    MFMailboxUidTransformer * _mailboxUidTransformer;
}

@property (nonatomic, retain) MFMailboxUidTransformer *mailboxUidTransformer;

- (void).cxx_destruct;
- (void)_fetchMailboxesForAccount:(id)arg1;
- (id)_transformMailbox:(id)arg1 legacyMailboxToMailboxMap:(id)arg2 objectIDToLegacyMailboxMap:(id)arg3;
- (id)initWithAccountsProvider:(id)arg1;
- (id)legacyMailboxForObjectID:(id)arg1;
- (id)mailboxUidTransformer;
- (void)setMailboxUidTransformer:(id)arg1;
- (void)test_tearDown;

@end
