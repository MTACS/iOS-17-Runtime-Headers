
@protocol ECMessage <NSCopying, NSObject>

@required

- (<ECMailAccount> *)account;
- (NSArray *)bcc;
- (NSString *)bestAlternativePart:(bool*)arg1;
- (NSData *)bestAlternativePartAsData:(bool*)arg1 usingEncoding:(unsigned long long)arg2;
- (NSArray *)cc;
- (long long)conversationID;
- (NSDate *)dateReceived;
- (NSDate *)dateSent;
- (NSUUID *)documentID;
- (ECMessageFlags *)flags;
- (NSArray *)from;
- (<ECMessageHeaders> *)headers;
- (NSDictionary *)headersDictionary;
- (bool)isPartOfExistingThread;
- (bool)isServerSearchResult;
- (NSSet *)labels;
- (ECAngleBracketIDHash *)listIDHash;
- (NSArray *)listUnsubscribe;
- (<ECMailbox> *)mailbox;
- (NSString *)messageIDHeader;
- (ECAngleBracketIDHash *)messageIDHeaderHash;
- (<ECMimeBody> *)mimeBody;
- (unsigned long long)numberOfAttachments;
- (NSString *)persistentID;
- (NSArray *)references;
- (NSString *)remoteID;
- (NSArray *)senders;
- (ECSubject *)subject;
- (NSArray *)to;

@end
