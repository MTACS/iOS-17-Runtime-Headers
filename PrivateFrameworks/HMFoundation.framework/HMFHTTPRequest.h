
@interface HMFHTTPRequest : HMFObject {
    HMFHTTPRequestInternal * _internal;
    double  _timeoutInterval;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, readonly) NSData *body;
@property (nonatomic, readonly) NSDictionary *headerFields;
@property (nonatomic, readonly) HMFHTTPRequestInternal *internal;
@property (nonatomic, readonly, copy) NSString *method;
@property (nonatomic) double timeoutInterval;
@property (nonatomic, readonly, copy) NSURLRequest *urlRequest;

- (void).cxx_destruct;
- (id)URL;
- (id)attributeDescriptions;
- (id)body;
- (id)headerFields;
- (id)init;
- (id)initWithInternalRequest:(id)arg1;
- (id)internal;
- (id)method;
- (id)responseWithStatusCode:(long long)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (double)timeoutInterval;
- (id)urlRequest;

@end
