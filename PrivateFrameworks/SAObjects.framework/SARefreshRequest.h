
@interface SARefreshRequest : SAStartRequest

@property (nonatomic, copy) NSData *nlResultState;
@property (nonatomic, copy) NSData *serializedIntent;
@property (nonatomic, copy) NSString *source;

+ (id)refreshRequest;
+ (id)refreshRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)nlResultState;
- (bool)requiresResponse;
- (id)serializedIntent;
- (void)setNlResultState:(id)arg1;
- (void)setSerializedIntent:(id)arg1;
- (void)setSource:(id)arg1;
- (id)source;

@end
