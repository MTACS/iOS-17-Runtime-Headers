
@interface EDSortableThreadProxyAdditionalProperties : NSObject {
    NSArray * _ccList;
    long long  _displayMessageGlobalID;
    NSIndexSet * _flagColors;
    ECMessageFlags * _flags;
    bool  _hasAttachments;
    bool  _hasUnflagged;
    bool  _isBlocked;
    bool  _isVIP;
    NSArray * _mailboxObjectIDs;
    unsigned long long  _numberOfMessagesInThread;
    NSDate * _readLaterDate;
    long long  _senderBucket;
    NSArray * _senderList;
    NSArray * _toList;
}

@property (nonatomic, copy) NSArray *ccList;
@property (nonatomic) long long displayMessageGlobalID;
@property (nonatomic, copy) NSIndexSet *flagColors;
@property (nonatomic, retain) ECMessageFlags *flags;
@property (nonatomic) bool hasAttachments;
@property (nonatomic) bool hasUnflagged;
@property (nonatomic) bool isBlocked;
@property (nonatomic) bool isVIP;
@property (nonatomic, retain) NSArray *mailboxObjectIDs;
@property (nonatomic) unsigned long long numberOfMessagesInThread;
@property (nonatomic, retain) NSDate *readLaterDate;
@property (nonatomic) long long senderBucket;
@property (nonatomic, copy) NSArray *senderList;
@property (nonatomic, copy) NSArray *toList;

- (void).cxx_destruct;
- (id)ccList;
- (long long)displayMessageGlobalID;
- (id)flagColors;
- (id)flags;
- (bool)hasAttachments;
- (bool)hasUnflagged;
- (bool)isBlocked;
- (bool)isVIP;
- (id)mailboxObjectIDs;
- (unsigned long long)numberOfMessagesInThread;
- (id)readLaterDate;
- (long long)senderBucket;
- (id)senderList;
- (void)setCcList:(id)arg1;
- (void)setDisplayMessageGlobalID:(long long)arg1;
- (void)setFlagColors:(id)arg1;
- (void)setFlags:(id)arg1;
- (void)setHasAttachments:(bool)arg1;
- (void)setHasUnflagged:(bool)arg1;
- (void)setIsBlocked:(bool)arg1;
- (void)setIsVIP:(bool)arg1;
- (void)setMailboxObjectIDs:(id)arg1;
- (void)setNumberOfMessagesInThread:(unsigned long long)arg1;
- (void)setReadLaterDate:(id)arg1;
- (void)setSenderBucket:(long long)arg1;
- (void)setSenderList:(id)arg1;
- (void)setToList:(id)arg1;
- (id)toList;

@end
