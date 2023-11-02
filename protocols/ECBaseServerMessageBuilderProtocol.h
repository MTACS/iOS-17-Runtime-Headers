
@protocol ECBaseServerMessageBuilderProtocol

@required

- (NSString *)messagePersistentID;
- (NSString *)persistentID;
- (ECMessageFlags *)serverFlags;
- (void)setMessagePersistentID:(NSString *)arg1;
- (void)setPersistentID:(NSString *)arg1;
- (void)setServerFlags:(ECMessageFlags *)arg1;

@end
