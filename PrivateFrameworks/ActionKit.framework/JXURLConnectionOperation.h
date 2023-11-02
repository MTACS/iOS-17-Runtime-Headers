
@interface JXURLConnectionOperation : JXOperation <NSURLConnectionDataDelegate, NSURLConnectionDelegate> {
    long long  _bytesDownloaded;
    long long  _bytesUploaded;
    NSURLConnection * _connection;
    NSError * _error;
    NSOutputStream * _outputStream;
    NSMutableURLRequest * _request;
    NSURLResponse * _response;
}

@property long long bytesDownloaded;
@property long long bytesUploaded;
@property (retain) NSURLConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (retain) NSOutputStream *outputStream;
@property (retain) NSMutableURLRequest *request;
@property (retain) NSURLResponse *response;
@property (readonly) Class superclass;

+ (id)networkThread;
+ (void)runLoopForever;

- (void).cxx_destruct;
- (long long)bytesDownloaded;
- (long long)bytesUploaded;
- (id)connection;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (id)error;
- (id)init;
- (id)initWithURL:(id)arg1;
- (void)main;
- (id)outputStream;
- (id)request;
- (id)response;
- (void)setBytesDownloaded:(long long)arg1;
- (void)setBytesUploaded:(long long)arg1;
- (void)setConnection:(id)arg1;
- (void)setError:(id)arg1;
- (void)setOutputStream:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)startConnection;
- (void)stopConnection;
- (void)willFinish;

@end
