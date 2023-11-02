
@interface ENCloudNetworkRequest : NSObject {
    NSData * _body;
    NSDictionary * _headers;
    unsigned long long  _httpMethod;
    NSDictionary * _parameters;
    NSUUID * _requestID;
    NSURL * _url;
}

@property (nonatomic, copy) NSData *body;
@property (nonatomic, copy) NSDictionary *headers;
@property (nonatomic) unsigned long long httpMethod;
@property (nonatomic, copy) NSDictionary *parameters;
@property (nonatomic, copy) NSUUID *requestID;
@property (nonatomic, copy) NSURL *url;

+ (id)requestWithURL:(id)arg1 httpMethod:(unsigned long long)arg2 headers:(id)arg3 parameters:(id)arg4 andBody:(id)arg5;

- (void).cxx_destruct;
- (id)body;
- (id)description;
- (id)headers;
- (unsigned long long)httpMethod;
- (id)httpMethodString;
- (id)parameters;
- (id)requestID;
- (void)setBody:(id)arg1;
- (void)setHeaders:(id)arg1;
- (void)setHttpMethod:(unsigned long long)arg1;
- (void)setParameters:(id)arg1;
- (void)setRequestID:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
