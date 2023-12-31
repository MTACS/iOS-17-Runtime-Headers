
@interface SAAssistantNotReady : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *language;

+ (id)assistantNotReady;
+ (id)assistantNotReadyWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)language;
- (bool)requiresResponse;
- (void)setLanguage:(id)arg1;

@end
