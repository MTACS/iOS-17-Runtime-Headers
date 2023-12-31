
@interface SAAssistantCreated : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *assistantId;
@property (nonatomic, copy) NSString *speechId;

+ (id)assistantCreated;
+ (id)assistantCreatedWithDictionary:(id)arg1 context:(id)arg2;

- (id)assistantId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setAssistantId:(id)arg1;
- (void)setSpeechId:(id)arg1;
- (id)speechId;

@end
