
@interface SARemembersSaveInteraction : SABaseClientBoundCommand <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *jsonEncodedIntent;
@property (nonatomic, copy) NSString *jsonEncodedIntentResponse;
@property (readonly) Class superclass;

+ (id)saveInteraction;
+ (id)saveInteractionWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)jsonEncodedIntent;
- (id)jsonEncodedIntentResponse;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setJsonEncodedIntent:(id)arg1;
- (void)setJsonEncodedIntentResponse:(id)arg1;

@end
