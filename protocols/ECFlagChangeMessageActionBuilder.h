
@protocol ECFlagChangeMessageActionBuilder <ECLocalMessageActionBuilder>

@required

- (ECMessageFlagChange *)flagChange;
- (NSArray *)messages;
- (NSSet *)remoteIDs;
- (void)setFlagChange:(ECMessageFlagChange *)arg1;
- (void)setMessages:(NSArray *)arg1;
- (void)setRemoteIDs:(NSSet *)arg1;

@end
