
@interface SAGetRequestOrigin : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *desiredAccuracy;
@property (nonatomic, copy) NSNumber *maxAge;
@property (nonatomic, copy) NSNumber *searchTimeout;

+ (id)getRequestOrigin;
+ (id)getRequestOriginWithDictionary:(id)arg1 context:(id)arg2;

- (id)desiredAccuracy;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)maxAge;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (id)searchTimeout;
- (void)setDesiredAccuracy:(id)arg1;
- (void)setMaxAge:(id)arg1;
- (void)setSearchTimeout:(id)arg1;

@end
