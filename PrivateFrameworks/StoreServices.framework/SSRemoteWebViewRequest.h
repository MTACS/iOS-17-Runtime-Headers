
@interface SSRemoteWebViewRequest : SSRequest {
    NSString * _URLString;
    NSString * _referrer;
}

@property (nonatomic, retain) NSString *URLString;
@property (nonatomic, retain) NSString *referrer;

- (void).cxx_destruct;
- (id)URLString;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)referrer;
- (void)setReferrer:(id)arg1;
- (void)setURLString:(id)arg1;
- (void)startWithCompletionBlock:(id /* block */)arg1;

@end
