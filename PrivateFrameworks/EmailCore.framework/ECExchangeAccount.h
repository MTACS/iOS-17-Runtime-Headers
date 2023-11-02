
@interface ECExchangeAccount : ECAccount {
    NSDate * _lastSyncDate;
}

@property (nonatomic, copy) NSString *folderHierarchySyncState;
@property (nonatomic, copy) NSString *inboxMailboxName;
@property (nonatomic, copy) NSString *journalMailboxName;
@property (nonatomic, copy) NSDate *lastSyncDate;

+ (id)standardPorts;
+ (id)standardSSLPorts;

- (void).cxx_destruct;
- (long long)defaultPortNumber;
- (long long)defaultSecurePortNumber;
- (id)folderHierarchySyncState;
- (id)inboxMailboxName;
- (id)journalMailboxName;
- (id)lastSyncDate;
- (void)setFolderHierarchySyncState:(id)arg1;
- (void)setInboxMailboxName:(id)arg1;
- (void)setJournalMailboxName:(id)arg1;
- (void)setLastSyncDate:(id)arg1;

@end
