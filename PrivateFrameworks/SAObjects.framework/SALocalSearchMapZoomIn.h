
@interface SALocalSearchMapZoomIn : SADomainCommand

+ (id)mapZoomIn;
+ (id)mapZoomInWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end
