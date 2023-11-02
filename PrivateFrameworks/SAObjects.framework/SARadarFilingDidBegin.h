
@interface SARadarFilingDidBegin : SABaseClientBoundCommand

+ (id)filingDidBegin;
+ (id)filingDidBeginWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end
