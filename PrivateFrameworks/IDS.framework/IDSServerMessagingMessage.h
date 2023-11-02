
@interface IDSServerMessagingMessage : IDSMessage {
    NSDate * _expirationDate;
    NSData * _messageData;
    NSString * _messageID;
}

@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic, retain) NSData *messageData;
@property (nonatomic, retain) NSString *messageID;

- (void).cxx_destruct;
- (long long)command;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)expirationDate;
- (id)messageBody;
- (id)messageData;
- (id)messageID;
- (void)setExpirationDate:(id)arg1;
- (void)setMessageData:(id)arg1;
- (void)setMessageID:(id)arg1;
- (bool)wantsResponse;

@end
