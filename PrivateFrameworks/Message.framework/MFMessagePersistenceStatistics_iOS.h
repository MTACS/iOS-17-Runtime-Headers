
@interface MFMessagePersistenceStatistics_iOS : EDMessagePersistenceStatistics {
    unsigned long long  _mailboxesNeedingReconcilication;
    unsigned long long  _messagesMarkedAsJournaled;
    bool  _protectedDataAvailable;
    unsigned long long  _protectedMessageData;
}

@property (nonatomic) unsigned long long mailboxesNeedingReconcilication;
@property (nonatomic) unsigned long long messagesMarkedAsJournaled;
@property (nonatomic) bool protectedDataAvailable;
@property (nonatomic) unsigned long long protectedMessageData;

- (unsigned long long)mailboxesNeedingReconcilication;
- (unsigned long long)messagesMarkedAsJournaled;
- (bool)protectedDataAvailable;
- (unsigned long long)protectedMessageData;
- (void)setMailboxesNeedingReconcilication:(unsigned long long)arg1;
- (void)setMessagesMarkedAsJournaled:(unsigned long long)arg1;
- (void)setProtectedDataAvailable:(bool)arg1;
- (void)setProtectedMessageData:(unsigned long long)arg1;

@end
