
@interface SALocalSearchShowNavigationOverview : SADomainCommand

+ (id)showNavigationOverview;
+ (id)showNavigationOverviewWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end
