
@interface SARemembersGetAppMatchesForIntent : SABaseClientBoundCommand <SAAceSerializable>

@property (nonatomic, copy) NSArray *candidateBundleIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *jsonEncodedIntent;
@property (nonatomic, retain) SAIntentGroupProtobufMessage *protoEncodedIntent;
@property (readonly) Class superclass;

+ (id)getAppMatchesForIntent;
+ (id)getAppMatchesForIntentWithDictionary:(id)arg1 context:(id)arg2;

- (id)candidateBundleIDs;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)jsonEncodedIntent;
- (bool)mutatingCommand;
- (id)protoEncodedIntent;
- (bool)requiresResponse;
- (void)setCandidateBundleIDs:(id)arg1;
- (void)setJsonEncodedIntent:(id)arg1;
- (void)setProtoEncodedIntent:(id)arg1;

@end
