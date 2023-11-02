
@interface SAEndpointService : SAEndpoint

@property (nonatomic, copy) NSString *serverUrl;

+ (id)endpointService;
+ (id)endpointServiceWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)serverUrl;
- (void)setServerUrl:(id)arg1;

@end
