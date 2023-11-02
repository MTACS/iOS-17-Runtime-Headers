
@interface SASyncGetAnchorsResponse : SABaseClientBoundCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSArray *anchors;
@property (nonatomic, copy) NSString *authToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *primeToken;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSNumber *syncDataReset;

+ (id)getAnchorsResponse;
+ (id)getAnchorsResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)anchors;
- (id)authToken;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (id)primeToken;
- (bool)requiresResponse;
- (void)setAnchors:(id)arg1;
- (void)setAuthToken:(id)arg1;
- (void)setPrimeToken:(id)arg1;
- (void)setSyncDataReset:(id)arg1;
- (id)syncDataReset;

@end
