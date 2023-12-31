
@interface SASessionHandoffPayload : AceObject <SAHandoffPayload>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSData *sessionHandoffData;
@property (readonly) Class superclass;

+ (id)sessionHandoffPayload;
+ (id)sessionHandoffPayloadWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)sessionHandoffData;
- (void)setSessionHandoffData:(id)arg1;

@end
