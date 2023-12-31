
@interface SADestroyAssistant : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSString *assistantId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSString *speechId;
@property (readonly) Class superclass;

+ (id)destroyAssistant;
+ (id)destroyAssistantWithDictionary:(id)arg1 context:(id)arg2;

- (id)assistantId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setAssistantId:(id)arg1;
- (void)setSpeechId:(id)arg1;
- (id)speechId;

@end
