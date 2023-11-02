
@interface ENTHTTPClient : NSObject <ENTTransport> {
    NSMutableData * _requestData;
    NSData * _responseData;
    int  _responseDataOffset;
    int  _timeout;
    NSURL * _url;
    NSString * _userAgent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableData *requestData;
@property (nonatomic, retain) NSData *responseData;
@property (nonatomic) int responseDataOffset;
@property (readonly) Class superclass;
@property (nonatomic) int timeout;
@property (nonatomic, retain) NSURL *url;
@property (nonatomic, retain) NSString *userAgent;

- (void).cxx_destruct;
- (void)cancel;
- (void)flush;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 userAgent:(id)arg2 timeout:(int)arg3;
- (id)newRequest;
- (int)readAll:(char *)arg1 offset:(int)arg2 length:(int)arg3;
- (id)requestData;
- (id)responseData;
- (int)responseDataOffset;
- (void)setRequestData:(id)arg1;
- (void)setResponseData:(id)arg1;
- (void)setResponseDataOffset:(int)arg1;
- (void)setTimeout:(int)arg1;
- (void)setUrl:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (int)timeout;
- (id)url;
- (id)userAgent;
- (void)write:(const char *)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3;

@end
