
@interface SASetHandoffPayload : SABaseClientBoundCommand

@property (nonatomic, retain) <SAHandoffPayload> *handoffPayload;

+ (id)setHandoffPayload;
+ (id)setHandoffPayloadWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)handoffPayload;
- (bool)requiresResponse;
- (void)setHandoffPayload:(id)arg1;

@end
