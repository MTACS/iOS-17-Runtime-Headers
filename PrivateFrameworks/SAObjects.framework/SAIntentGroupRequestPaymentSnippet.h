
@interface SAIntentGroupRequestPaymentSnippet : SAUISnippet

@property (nonatomic, retain) SAIntentGroupProtobufMessage *intent;
@property (nonatomic, retain) SAIntentGroupProtobufMessage *intentResponse;

+ (id)requestPaymentSnippet;
+ (id)requestPaymentSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)intent;
- (id)intentResponse;
- (void)setIntent:(id)arg1;
- (void)setIntentResponse:(id)arg1;

@end
