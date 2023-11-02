
@protocol EDPBDataSetters

@optional

- (void)withHasher:(id <EDPBHasher>)arg1 setConversationID:(long long)arg2 data:(NSDictionary *)arg3;
- (void)withHasher:(id <EDPBHasher>)arg1 setDataFromMessage:(id <ECMessage>)arg2;
- (void)withHasher:(id <EDPBHasher>)arg1 setDataFromMessage:(id <ECMessage>)arg2 account:(id <ECMailAccount>)arg3;
- (void)withHasher:(id <EDPBHasher>)arg1 setMessage:(id <ECMessage>)arg2 data:(NSDictionary *)arg3;
- (void)withHasher:(id <EDPBHasher>)arg1 setMessage:(id <ECMessage>)arg2 mailbox:(id <ECMailbox>)arg3;
- (void)withHasher:(id <EDPBHasher>)arg1 setMessage:(id <ECMessage>)arg2 mailboxType:(long long)arg3;

@end
