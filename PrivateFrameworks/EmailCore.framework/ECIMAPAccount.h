
@interface ECIMAPAccount : ECAccount {
    NSDate * _dateOfLastSync;
}

@property (nonatomic) bool compactWhenClosingMailboxes;
@property (nonatomic, copy) NSDate *dateOfLastSync;
@property (nonatomic) long long daysBetweenSyncs;
@property (nonatomic) bool hasServerDefinedAllMailMailbox;
@property (nonatomic) bool hasServerDefinedArchiveMailbox;
@property (nonatomic) bool hasServerDefinedDraftsMailbox;
@property (nonatomic) bool hasServerDefinedJunkMailbox;
@property (nonatomic) bool hasServerDefinedSentMailbox;
@property (nonatomic) bool hasServerDefinedTrashMailbox;
@property (nonatomic) bool ignoreServerDefinedArchiveMailbox;
@property (nonatomic) bool ignoreServerDefinedDraftsMailbox;
@property (nonatomic) bool ignoreServerDefinedJunkMailbox;
@property (nonatomic) bool ignoreServerDefinedSentMailbox;
@property (nonatomic) bool ignoreServerDefinedTrashMailbox;
@property (nonatomic) bool needsGmailLablesCleanup;
@property (nonatomic) bool queriedUserToSetPathPrefix;
@property (nonatomic) bool shouldUseGmailLabelStores;
@property (nonatomic, readonly) bool shouldUseGmailLabelStoresIsSet;

+ (id)standardPorts;
+ (id)standardSSLPorts;

- (void).cxx_destruct;
- (id)_hostnameFromParentAccount:(id)arg1;
- (void)clearDaysBetweenSyncs;
- (void)clearQueriedUserToSetPathPrefix;
- (bool)compactWhenClosingMailboxes;
- (id)dateOfLastSync;
- (long long)daysBetweenSyncs;
- (long long)defaultPortNumber;
- (long long)defaultSecurePortNumber;
- (bool)hasServerDefinedAllMailMailbox;
- (bool)hasServerDefinedArchiveMailbox;
- (bool)hasServerDefinedDraftsMailbox;
- (bool)hasServerDefinedJunkMailbox;
- (bool)hasServerDefinedSentMailbox;
- (bool)hasServerDefinedTrashMailbox;
- (bool)ignoreServerDefinedArchiveMailbox;
- (bool)ignoreServerDefinedDraftsMailbox;
- (bool)ignoreServerDefinedJunkMailbox;
- (bool)ignoreServerDefinedSentMailbox;
- (bool)ignoreServerDefinedTrashMailbox;
- (bool)needsGmailLablesCleanup;
- (id)portNumberObject;
- (bool)queriedUserToSetPathPrefix;
- (void)setCompactWhenClosingMailboxes:(bool)arg1;
- (void)setDateOfLastSync:(id)arg1;
- (void)setDaysBetweenSyncs:(long long)arg1;
- (void)setHasServerDefinedAllMailMailbox:(bool)arg1;
- (void)setHasServerDefinedArchiveMailbox:(bool)arg1;
- (void)setHasServerDefinedDraftsMailbox:(bool)arg1;
- (void)setHasServerDefinedJunkMailbox:(bool)arg1;
- (void)setHasServerDefinedSentMailbox:(bool)arg1;
- (void)setHasServerDefinedTrashMailbox:(bool)arg1;
- (void)setIgnoreServerDefinedArchiveMailbox:(bool)arg1;
- (void)setIgnoreServerDefinedDraftsMailbox:(bool)arg1;
- (void)setIgnoreServerDefinedJunkMailbox:(bool)arg1;
- (void)setIgnoreServerDefinedSentMailbox:(bool)arg1;
- (void)setIgnoreServerDefinedTrashMailbox:(bool)arg1;
- (void)setNeedsGmailLablesCleanup:(bool)arg1;
- (void)setQueriedUserToSetPathPrefix:(bool)arg1;
- (void)setShouldUseGmailLabelStores:(bool)arg1;
- (bool)shouldUseGmailLabelStores;
- (bool)shouldUseGmailLabelStoresIsSet;
- (id)usesSSLObject;

@end
