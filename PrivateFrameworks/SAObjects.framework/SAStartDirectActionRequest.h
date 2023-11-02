
@interface SAStartDirectActionRequest : SAStartRequest

@property (nonatomic, copy) NSString *directAction;
@property (nonatomic, copy) NSDictionary *requestExecutionParameters;
@property (nonatomic, copy) NSString *utteranceFromRequestParameters;

+ (id)startDirectActionRequest;
+ (id)startDirectActionRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)directAction;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)requestExecutionParameters;
- (bool)requiresResponse;
- (void)setDirectAction:(id)arg1;
- (void)setRequestExecutionParameters:(id)arg1;
- (void)setUtteranceFromRequestParameters:(id)arg1;
- (id)utteranceFromRequestParameters;

@end
