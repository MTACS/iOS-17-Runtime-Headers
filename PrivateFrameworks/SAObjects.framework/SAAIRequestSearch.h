
@interface SAAIRequestSearch : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *acousticIdSearchSessionId;

+ (id)requestSearch;
+ (id)requestSearchWithDictionary:(id)arg1 context:(id)arg2;

- (id)acousticIdSearchSessionId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setAcousticIdSearchSessionId:(id)arg1;

@end
