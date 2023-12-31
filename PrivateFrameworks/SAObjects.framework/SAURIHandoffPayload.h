
@interface SAURIHandoffPayload : AceObject <SAHandoffPayload>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSURL *link;
@property (readonly) Class superclass;

+ (id)uRIHandoffPayload;
+ (id)uRIHandoffPayloadWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)link;
- (void)setLink:(id)arg1;

@end
