
@interface ENGCOAuth : NSObject {
    NSDictionary * _OAuthParameters;
    NSString * __method;
    NSDictionary * __parameters;
    NSURL * __url;
    NSString * _signatureSecret;
}

@property (nonatomic, copy) NSString *HTTPMethod;
@property (nonatomic, retain) NSDictionary *OAuthParameters;
@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, copy) NSDictionary *requestParameters;
@property (nonatomic, copy) NSString *signatureSecret;

+ (id)URLRequestForPath:(id)arg1 GETParameters:(id)arg2 host:(id)arg3 consumerKey:(id)arg4 consumerSecret:(id)arg5 accessToken:(id)arg6 tokenSecret:(id)arg7;
+ (id)URLRequestForPath:(id)arg1 GETParameters:(id)arg2 scheme:(id)arg3 host:(id)arg4 consumerKey:(id)arg5 consumerSecret:(id)arg6 accessToken:(id)arg7 tokenSecret:(id)arg8;
+ (id)URLRequestForPath:(id)arg1 POSTParameters:(id)arg2 host:(id)arg3 consumerKey:(id)arg4 consumerSecret:(id)arg5 accessToken:(id)arg6 tokenSecret:(id)arg7;
+ (id)nonce;
+ (id)queryStringFromParameters:(id)arg1;
+ (void)setHTTPShouldHandleCookies:(bool)arg1;
+ (void)setTimeStampOffset:(long long)arg1;
+ (void)setUserAgent:(id)arg1;
+ (id)timeStamp;

- (void).cxx_destruct;
- (id)HTTPMethod;
- (id)OAuthParameters;
- (id)URL;
- (id)authorizationHeader;
- (id)initWithConsumerKey:(id)arg1 consumerSecret:(id)arg2 accessToken:(id)arg3 tokenSecret:(id)arg4;
- (id)request;
- (id)requestParameters;
- (void)setHTTPMethod:(id)arg1;
- (void)setOAuthParameters:(id)arg1;
- (void)setRequestParameters:(id)arg1;
- (void)setSignatureSecret:(id)arg1;
- (void)setURL:(id)arg1;
- (id)signature;
- (id)signatureBase;
- (id)signatureSecret;

@end
