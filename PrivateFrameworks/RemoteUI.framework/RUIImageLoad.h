
@interface RUIImageLoad : NSObject {
    NSURL * _URL;
    NSURLSessionDataTask * _dataTask;
    NSURLSession * _urlSession;
}

@property (nonatomic, copy) NSURL *URL;

- (void).cxx_destruct;
- (id)URL;
- (void)dealloc;
- (bool)receivedValidResponse:(id)arg1;
- (void)setURL:(id)arg1;
- (void)start;

@end
