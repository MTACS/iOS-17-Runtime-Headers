
@interface SAStartHandoffRequest : SAStartRequest

@property (nonatomic, copy) NSData *handoffData;

+ (id)startHandoffRequest;
+ (id)startHandoffRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)handoffData;
- (bool)requiresResponse;
- (void)setHandoffData:(id)arg1;

@end
