
@interface SSVSAPSignatureDataSource : NSObject {
    NSData * _bodyData;
    NSURLRequest * _request;
    SSURLRequestProperties * _requestProperties;
    NSHTTPURLResponse * _response;
}

@property (nonatomic, readonly) NSData *HTTPBody;
@property (nonatomic, readonly) NSString *HTTPMethod;

- (void).cxx_destruct;
- (id)HTTPBody;
- (id)HTTPMethod;
- (id)initWithURLRequest:(id)arg1;
- (id)initWithURLRequestProperties:(id)arg1;
- (id)initWithURLResponse:(id)arg1 bodyData:(id)arg2;
- (id)valueForHTTPHeader:(id)arg1;
- (id)valueForQueryParameter:(id)arg1;

@end
