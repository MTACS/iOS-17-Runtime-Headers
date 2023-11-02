
@interface EMUndoIndividualAction : NSObject <NSSecureCoding> {
    long long  _actionType;
    bool  _blockSender;
    long long  _conversationID;
    long long  _conversationNotificationLevel;
    NSURL * _destinationMailboxURL;
    ECMessageFlagChange * _flagChange;
    EMFollowUp * _followUp;
    NSArray * _messageDatabaseIDs;
    NSDate * _readLaterDate;
}

@property (nonatomic) long long actionType;
@property (nonatomic) bool blockSender;
@property (nonatomic) long long conversationID;
@property (nonatomic) long long conversationNotificationLevel;
@property (nonatomic, retain) NSURL *destinationMailboxURL;
@property (nonatomic, retain) ECMessageFlagChange *flagChange;
@property (nonatomic, retain) EMFollowUp *followUp;
@property (nonatomic, retain) NSArray *messageDatabaseIDs;
@property (nonatomic, retain) NSDate *readLaterDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)actionType;
- (bool)blockSender;
- (long long)conversationID;
- (long long)conversationNotificationLevel;
- (id)destinationMailboxURL;
- (void)encodeWithCoder:(id)arg1;
- (id)flagChange;
- (id)followUp;
- (id)initWithCoder:(id)arg1;
- (id)messageDatabaseIDs;
- (id)readLaterDate;
- (void)setActionType:(long long)arg1;
- (void)setBlockSender:(bool)arg1;
- (void)setConversationID:(long long)arg1;
- (void)setConversationNotificationLevel:(long long)arg1;
- (void)setDestinationMailboxURL:(id)arg1;
- (void)setFlagChange:(id)arg1;
- (void)setFollowUp:(id)arg1;
- (void)setMessageDatabaseIDs:(id)arg1;
- (void)setReadLaterDate:(id)arg1;

@end
