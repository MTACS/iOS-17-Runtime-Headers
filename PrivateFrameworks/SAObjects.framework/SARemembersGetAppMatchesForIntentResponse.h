
@interface SARemembersGetAppMatchesForIntentResponse : SABaseCommand <SAAceSerializable, SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *jsonMatchSignals;
@property (nonatomic, copy) NSString *matchStatus;
@property (nonatomic, copy) NSArray *matchingBundleIDs;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)getAppMatchesForIntentResponse;
+ (id)getAppMatchesForIntentResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)jsonMatchSignals;
- (id)matchStatus;
- (id)matchingBundleIDs;
- (bool)requiresResponse;
- (void)setJsonMatchSignals:(id)arg1;
- (void)setMatchStatus:(id)arg1;
- (void)setMatchingBundleIDs:(id)arg1;

@end
