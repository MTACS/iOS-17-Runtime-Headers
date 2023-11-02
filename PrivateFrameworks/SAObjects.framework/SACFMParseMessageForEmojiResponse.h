
@interface SACFMParseMessageForEmojiResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *parseChunks;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)parseMessageForEmojiResponse;
+ (id)parseMessageForEmojiResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)parseChunks;
- (bool)requiresResponse;
- (void)setParseChunks:(id)arg1;

@end
