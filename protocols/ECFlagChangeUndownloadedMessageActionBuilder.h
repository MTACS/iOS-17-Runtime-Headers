
@protocol ECFlagChangeUndownloadedMessageActionBuilder <ECLocalMessageActionBuilder>

@required

- (ECMessageFlagChange *)flagChange;
- (NSString *)oldestPersistedRemoteID;
- (void)setFlagChange:(ECMessageFlagChange *)arg1;
- (void)setOldestPersistedRemoteID:(NSString *)arg1;

@end
