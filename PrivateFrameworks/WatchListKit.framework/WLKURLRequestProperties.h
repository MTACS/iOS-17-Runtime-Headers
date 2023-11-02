
@interface WLKURLRequestProperties : NSObject {
    NSNumber * _apiVersion;
    NSString * _caller;
    NSNumber * _clientProtocolVersion;
    NSString * _endpoint;
    NSDictionary * _headers;
    NSData * _httpBody;
    NSString * _httpMethod;
    long long  _options;
    NSDictionary * _queryParameters;
    NSString * _routeName;
    NSNumber * _timeout;
}

@property (nonatomic, copy) NSNumber *apiVersion;
@property (nonatomic, copy) NSString *caller;
@property (nonatomic, copy) NSNumber *clientProtocolVersion;
@property (nonatomic, copy) NSString *endpoint;
@property (nonatomic, copy) NSDictionary *headers;
@property (nonatomic, copy) NSData *httpBody;
@property (nonatomic, copy) NSString *httpMethod;
@property (nonatomic) long long options;
@property (nonatomic, copy) NSDictionary *queryParameters;
@property (nonatomic, copy) NSString *routeName;
@property (nonatomic, copy) NSNumber *timeout;

+ (id)requestPropertiesWithEndpoint:(id)arg1;
+ (id)requestPropertiesWithEndpoint:(id)arg1 queryParameters:(id)arg2 httpMethod:(id)arg3 caller:(id)arg4;
+ (id)requestPropertiesWithEndpoint:(id)arg1 queryParameters:(id)arg2 httpMethod:(id)arg3 headers:(id)arg4 caller:(id)arg5 timeout:(id)arg6 apiVersion:(id)arg7 options:(long long)arg8;
+ (id)requestPropertiesWithEndpoint:(id)arg1 queryParameters:(id)arg2 httpMethod:(id)arg3 headers:(id)arg4 caller:(id)arg5 timeout:(id)arg6 options:(long long)arg7;
+ (id)requestPropertiesWithEndpoint:(id)arg1 queryParameters:(id)arg2 httpMethod:(id)arg3 headers:(id)arg4 caller:(id)arg5 timeout:(id)arg6 options:(long long)arg7 clientProtocolVersion:(id)arg8;
+ (id)requestPropertiesWithEndpoint:(id)arg1 queryParameters:(id)arg2 httpMethod:(id)arg3 httpBody:(id)arg4 headers:(id)arg5 caller:(id)arg6 timeout:(id)arg7 apiVersion:(id)arg8 options:(long long)arg9;
+ (id)requestPropertiesWithEndpoint:(id)arg1 queryParameters:(id)arg2 httpMethod:(id)arg3 httpBody:(id)arg4 headers:(id)arg5 caller:(id)arg6 timeout:(id)arg7 apiVersion:(id)arg8 options:(long long)arg9 clientProtocolVersion:(id)arg10;
+ (id)requestPropertiesWithServerRoute:(id)arg1 queryParameters:(id)arg2 httpMethod:(id)arg3 headers:(id)arg4 caller:(id)arg5 timeout:(id)arg6 options:(long long)arg7;
+ (id)requestPropertiesWithServerRoute:(id)arg1 queryParameters:(id)arg2 httpMethod:(id)arg3 httpBody:(id)arg4 headers:(id)arg5 caller:(id)arg6 timeout:(id)arg7 options:(long long)arg8;
+ (id)requestPropertiesWithServerRoute:(id)arg1 queryParameters:(id)arg2 httpMethod:(id)arg3 httpBody:(id)arg4 headers:(id)arg5 caller:(id)arg6 timeout:(id)arg7 options:(long long)arg8 clientProtocolVersion:(id)arg9;

- (void).cxx_destruct;
- (id)URLRequestWithConfiguration:(id)arg1;
- (id)apiVersion;
- (id)caller;
- (id)clientProtocolVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)endpoint;
- (unsigned long long)hash;
- (id)headers;
- (id)httpBody;
- (id)httpMethod;
- (bool)isEqual:(id)arg1;
- (long long)options;
- (id)queryParameters;
- (id)routeName;
- (void)setApiVersion:(id)arg1;
- (void)setCaller:(id)arg1;
- (void)setClientProtocolVersion:(id)arg1;
- (void)setEndpoint:(id)arg1;
- (void)setHeaders:(id)arg1;
- (void)setHttpBody:(id)arg1;
- (void)setHttpMethod:(id)arg1;
- (void)setOptions:(long long)arg1;
- (void)setQueryParameters:(id)arg1;
- (void)setRouteName:(id)arg1;
- (void)setTimeout:(id)arg1;
- (id)shortDescription;
- (id)timeout;

@end
