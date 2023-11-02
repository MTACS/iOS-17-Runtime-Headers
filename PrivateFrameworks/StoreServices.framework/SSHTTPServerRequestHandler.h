
@interface SSHTTPServerRequestHandler : NSObject <NSStreamDelegate> {
    <SSHTTPServerRequestHandlerDelegate> * _delegate;
    int  _downloadSpeed;
    bool  _incommingHeadersComplete;
    struct __CFHTTPMessage { } * _incommingMessage;
    NSMutableData * _incommingMessageBody;
    NSInputStream * _input;
    NSOutputStream * _output;
    NSMutableURLRequest * _request;
    NSObject<OS_dispatch_queue> * _requestQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SSHTTPServerRequestHandlerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) int downloadSpeed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_close;
- (id)_errorResponseDataWithStatus:(short)arg1 message:(id)arg2;
- (bool)_handleReceivedDataWithError:(id*)arg1;
- (void)_respondWithRequest:(id)arg1 error:(id)arg2;
- (bool)_shouldKeepRunning;
- (long long)_throttledWriteSpeed;
- (long long)_writeResponseData:(id)arg1 error:(id*)arg2;
- (void)close;
- (void)dealloc;
- (id)delegate;
- (int)downloadSpeed;
- (id)initWithReadStream:(id)arg1 writeStream:(id)arg2 runLoop:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setDownloadSpeed:(int)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;

@end
