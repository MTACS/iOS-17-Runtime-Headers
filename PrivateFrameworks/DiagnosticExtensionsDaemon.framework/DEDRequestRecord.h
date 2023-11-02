
@interface DEDRequestRecord : NSObject {
    NSString * _URL;
    NSDate * _date;
    bool  _isFailure;
    NSString * _method;
    NSString * _requestBody;
    NSString * _requestHeader;
    NSString * _responseBody;
    NSString * _responseHeader;
    long long  _runtime;
}

@property (retain) NSString *URL;
@property (retain) NSDate *date;
@property bool isFailure;
@property (retain) NSString *method;
@property (retain) NSString *requestBody;
@property (retain) NSString *requestHeader;
@property (retain) NSString *responseBody;
@property (retain) NSString *responseHeader;
@property long long runtime;

- (void).cxx_destruct;
- (id)URL;
- (id)date;
- (id)formattedBody:(id)arg1 error:(id)arg2;
- (id)formattedRequestHeader:(id)arg1 session:(id)arg2 cookies:(id)arg3;
- (id)formattedResponseHeader:(id)arg1;
- (id)initWithRequest:(id)arg1 response:(id)arg2 session:(id)arg3 cookies:(id)arg4 body:(id)arg5 error:(id)arg6;
- (id)initWithURL:(id)arg1 httpMethod:(id)arg2 responseData:(id)arg3;
- (bool)isFailure;
- (id)method;
- (id)requestBody;
- (id)requestHeader;
- (id)responseBody;
- (id)responseHeader;
- (long long)runtime;
- (void)setDate:(id)arg1;
- (void)setIsFailure:(bool)arg1;
- (void)setMethod:(id)arg1;
- (void)setRequestBody:(id)arg1;
- (void)setRequestHeader:(id)arg1;
- (void)setResponseBody:(id)arg1;
- (void)setResponseHeader:(id)arg1;
- (void)setRuntime:(long long)arg1;
- (void)setURL:(id)arg1;

@end
