
@protocol EDPBHasher

@required

- (long long)hashedAccountID:(id <ECMailAccount>)arg1;
- (long long)hashedContactIDForAddress:(NSString *)arg1;
- (long long)hashedConversationID:(long long)arg1;
- (long long)hashedMailboxID:(id <ECMailbox>)arg1;
- (EDPBMessageHeaders *)hashedMessageHeadersForMessage:(id <ECMessage>)arg1;
- (long long)hashedString:(NSString *)arg1;
- (struct { long long *x1; unsigned long long x2; unsigned long long x3; })hashedSubject:(ECSubject *)arg1;

@end
