
@interface SAAppsGetRestrictedAppsResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSDictionary *appToItsRestrictionsMap;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSArray *restrictedApps;
@property (readonly) Class superclass;

+ (id)getRestrictedAppsResponse;
+ (id)getRestrictedAppsResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)appToItsRestrictionsMap;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (id)restrictedApps;
- (void)setAppToItsRestrictionsMap:(id)arg1;
- (void)setRestrictedApps:(id)arg1;

@end
