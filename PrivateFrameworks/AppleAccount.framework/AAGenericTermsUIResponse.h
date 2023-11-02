
@interface AAGenericTermsUIResponse : AAResponse {
    NSString * _responseAgreeURL;
    NSData * _responseData;
    NSDictionary * _responseTermsDictionary;
}

@property (nonatomic, readonly) NSString *agreeURL;
@property (nonatomic, readonly) NSData *responseData;
@property (nonatomic, readonly) NSDictionary *termsDictionary;

- (void).cxx_destruct;
- (id)agreeURL;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (id)responseData;
- (id)termsDictionary;

@end
