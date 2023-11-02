
@interface SAIntentGroupIntentSearch : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SAIntentGroupProtobufMessage *intent;
@property (nonatomic, copy) NSString *jsonEncodedIntent;
@property (nonatomic, copy) NSArray *metadata;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)intentSearch;
+ (id)intentSearchWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)intent;
- (id)jsonEncodedIntent;
- (id)metadata;
- (bool)requiresResponse;
- (void)setIntent:(id)arg1;
- (void)setJsonEncodedIntent:(id)arg1;
- (void)setMetadata:(id)arg1;

@end
