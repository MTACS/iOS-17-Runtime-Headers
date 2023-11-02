
@protocol SFPerformIntentCommand <SFCommand>

@required

- (NSString *)applicationBundleIdentifier;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)intentMessageData;
- (NSString *)intentMessageName;
- (bool)isRunnableWorkflow;
- (NSData *)jsonData;
- (void)setApplicationBundleIdentifier:(NSString *)arg1;
- (void)setIntentMessageData:(NSData *)arg1;
- (void)setIntentMessageName:(NSString *)arg1;
- (void)setIsRunnableWorkflow:(bool)arg1;

@end
