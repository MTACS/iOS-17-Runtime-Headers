
@interface SAFetchUserActivity : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *internalGUID;

+ (id)fetchUserActivity;
+ (id)fetchUserActivityWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)internalGUID;
- (bool)requiresResponse;
- (void)setInternalGUID:(id)arg1;

@end
