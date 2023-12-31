
@interface SLFacebookRequest : SLRequest

@property (retain) NSString *accessToken;
@property int responseDataFormat;

- (id)accessToken;
- (id)initWithURL:(id)arg1 parameters:(id)arg2 requestMethod:(long long)arg3;
- (void)preflightRequest;
- (id)preparedURLRequest;
- (int)responseDataFormat;
- (void)setAccessToken:(id)arg1;
- (void)setResponseDataFormat:(int)arg1;

@end
