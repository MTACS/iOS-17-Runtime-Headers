
@interface EDInteractionEvent : NSObject {
    NSString * _accountID;
    long long  _conversationID;
    NSDictionary * _data;
    NSDate * _date;
    long long  _eventID;
    long long  _mailboxID;
    long long  _messageIDHash;
    long long  _messagePersistentID;
    NSString * _name;
    long long  _version;
}

@property (nonatomic, copy) NSString *accountID;
@property (nonatomic) long long conversationID;
@property (nonatomic, copy) NSDictionary *data;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic) long long eventID;
@property (nonatomic) long long mailboxID;
@property (nonatomic) long long messageIDHash;
@property (nonatomic) long long messagePersistentID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long version;

- (void).cxx_destruct;
- (id)accountID;
- (long long)conversationID;
- (id)data;
- (id)date;
- (id)debugDescription;
- (long long)eventID;
- (long long)mailboxID;
- (long long)messageIDHash;
- (long long)messagePersistentID;
- (id)name;
- (void)setAccountID:(id)arg1;
- (void)setConversationID:(long long)arg1;
- (void)setData:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setEventID:(long long)arg1;
- (void)setMailboxID:(long long)arg1;
- (void)setMessageIDHash:(long long)arg1;
- (void)setMessagePersistentID:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setVersion:(long long)arg1;
- (long long)version;

@end
