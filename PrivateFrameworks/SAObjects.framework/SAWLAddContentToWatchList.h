
@interface SAWLAddContentToWatchList : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *canonicalId;

+ (id)addContentToWatchList;
+ (id)addContentToWatchListWithDictionary:(id)arg1 context:(id)arg2;

- (id)canonicalId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setCanonicalId:(id)arg1;

@end
