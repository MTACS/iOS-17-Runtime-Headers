
@interface DEDDataTask : NSObject {
    NSData * _data;
    NSURLSessionDataTask * _dataTask;
    bool  _isFinished;
    NSHTTPURLResponse * _response;
}

@property (retain) NSData *data;
@property (retain) NSURLSessionDataTask *dataTask;
@property bool isFinished;
@property (retain) NSHTTPURLResponse *response;

- (void).cxx_destruct;
- (id)data;
- (id)dataTask;
- (id)description;
- (id)initWithDataTask:(id)arg1;
- (bool)isFinished;
- (id)response;
- (void)setData:(id)arg1;
- (void)setDataTask:(id)arg1;
- (void)setIsFinished:(bool)arg1;
- (void)setResponse:(id)arg1;

@end
