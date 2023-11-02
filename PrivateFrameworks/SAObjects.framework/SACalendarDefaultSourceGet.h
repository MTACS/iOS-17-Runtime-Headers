
@interface SACalendarDefaultSourceGet : SADomainCommand

+ (id)defaultSourceGet;
+ (id)defaultSourceGetWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end
