
@interface SAIntentGroupParse : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SAIntentGroupDirectInvocation *directInvocation;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *jsonIntent;
@property (nonatomic, copy) NSString *jsonIntentTypeName;
@property (nonatomic, retain) SAIntentGroupProtobufMessage *nlv3Parse;
@property (nonatomic, copy) NSArray *nlv3ParseWithAlternatives;
@property (nonatomic, retain) SAIntentGroupProtobufMessage *pegasusResults;
@property (nonatomic, retain) SAIntentGroupProtobufMessage *siriKitIntent;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *type;

+ (id)parse;
+ (id)parseWithDictionary:(id)arg1 context:(id)arg2;

- (id)directInvocation;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)jsonIntent;
- (id)jsonIntentTypeName;
- (id)nlv3Parse;
- (id)nlv3ParseWithAlternatives;
- (id)pegasusResults;
- (void)setDirectInvocation:(id)arg1;
- (void)setJsonIntent:(id)arg1;
- (void)setJsonIntentTypeName:(id)arg1;
- (void)setNlv3Parse:(id)arg1;
- (void)setNlv3ParseWithAlternatives:(id)arg1;
- (void)setPegasusResults:(id)arg1;
- (void)setSiriKitIntent:(id)arg1;
- (void)setType:(id)arg1;
- (id)siriKitIntent;
- (id)type;

@end
