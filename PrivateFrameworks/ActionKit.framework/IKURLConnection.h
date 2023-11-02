
@interface IKURLConnection : NSURLConnection {
    id  _context;
    NSMutableData * _data;
    NSURLRequest * _request;
    NSHTTPURLResponse * _response;
    int  _type;
    id  _userInfo;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSURLRequest *request;
@property (nonatomic, readonly) NSHTTPURLResponse *response;
@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) id userInfo;

- (void)_appendData:(id)arg1;
- (id)_context;
- (void)_setContext:(id)arg1;
- (void)_setResponse:(id)arg1;
- (void)_setType:(int)arg1;
- (void)_setUserInfo:(id)arg1;
- (id)data;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2 startImmediately:(bool)arg3;
- (id)request;
- (id)response;
- (int)type;
- (id)userInfo;

@end
