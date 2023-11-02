
@protocol AFSpeakableNamespaceProvider <NSObject>

@required

- (NSString *)stringForExpression:(NSString *)arg1;

@optional

- (NSURL *)attachmentURLForExpression:(NSString *)arg1;
- (NSString *)identifier;
- (id)initWithAceObject:(AceObject *)arg1;
- (void)setAssistantBulletin:(AFBulletin *)arg1;
- (NSString *)stringForExpression:(NSString *)arg1 containsPrivacySensitiveContents:(bool*)arg2;

@end
