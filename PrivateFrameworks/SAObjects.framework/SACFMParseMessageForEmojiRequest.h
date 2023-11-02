
@interface SACFMParseMessageForEmojiRequest : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *locale;
@property (nonatomic, copy) NSString *messageText;

+ (id)parseMessageForEmojiRequest;
+ (id)parseMessageForEmojiRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)locale;
- (id)messageText;
- (bool)requiresResponse;
- (void)setLocale:(id)arg1;
- (void)setMessageText:(id)arg1;

@end
