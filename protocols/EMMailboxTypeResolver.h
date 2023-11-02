
@protocol EMMailboxTypeResolver <NSObject>

@required

- (NSSet *)allMailboxObjectIDs;
- (NSSet *)mailboxObjectIDsForMailboxType:(long long)arg1;
- (long long)mailboxTypeForMailboxObjectID:(EMMailboxObjectID *)arg1;

@end
