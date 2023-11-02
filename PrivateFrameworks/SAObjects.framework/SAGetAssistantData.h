
@interface SAGetAssistantData : SABaseClientBoundCommand

+ (id)getAssistantData;
+ (id)getAssistantDataWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end
