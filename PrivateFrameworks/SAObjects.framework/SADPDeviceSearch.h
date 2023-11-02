
@interface SADPDeviceSearch : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *deviceSearchQueries;

+ (id)deviceSearch;
+ (id)deviceSearchWithDictionary:(id)arg1 context:(id)arg2;

- (id)deviceSearchQueries;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setDeviceSearchQueries:(id)arg1;

@end
