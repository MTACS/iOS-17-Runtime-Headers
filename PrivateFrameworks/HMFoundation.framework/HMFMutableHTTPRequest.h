
@interface HMFMutableHTTPRequest : HMFHTTPRequest

@property (nonatomic, copy) NSData *body;
@property (nonatomic, copy) NSDictionary *headerFields;
@property (nonatomic) double timeoutInterval;

- (id)initWithInternalRequest:(id)arg1;
- (id)initWithURL:(id)arg1 method:(id)arg2 body:(id)arg3 timeoutInterval:(double)arg4;
- (id)responseWithStatusCode:(long long)arg1;
- (void)setBody:(id)arg1;
- (void)setHeaderValue:(id)arg1 forHeaderKey:(id)arg2;

@end
