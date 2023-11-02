
@interface SARemembersGetRelativeAppUsageProbabilities : SABaseClientBoundCommand <SAAceSerializable>

@property (nonatomic, copy) NSArray *bundleIDs;
@property (nonatomic) long long days;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)getRelativeAppUsageProbabilities;
+ (id)getRelativeAppUsageProbabilitiesWithDictionary:(id)arg1 context:(id)arg2;

- (id)bundleIDs;
- (long long)days;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setBundleIDs:(id)arg1;
- (void)setDays:(long long)arg1;

@end
