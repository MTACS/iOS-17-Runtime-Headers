
@interface IMXMLStreamOperation : NSOperation <NSStreamDelegate, NSURLConnectionDelegate> {
    NSMutableData * _dataBuffer;
    <NSXMLParserDelegate> * _delegate;
    bool  _finishedDownloadingData;
    bool  _isCancelled;
    bool  _isExecuting;
    bool  _isFinished;
    NSInputStream * _readStream;
    NSThread * _runloopThread;
    NSURL * _url;
    NSURLConnection * _urlConnection;
    NSOutputStream * _writeStream;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NSXMLParserDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)operationWithURL:(id)arg1 parseDelegate:(id)arg2;

- (void)_startRunLoop;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithURL:(id)arg1 parseDelegate:(id)arg2;
- (bool)isCancelled;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;
- (void)setDelegate:(id)arg1;
- (void)start;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)writeToStream;

@end
