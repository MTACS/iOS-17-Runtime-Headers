
@interface ASTConfigurableUploadClient : NSObject <ASTUploadClient, NSURLSessionTaskDelegate> {
    <ASTUploadClientDelegate> * _delegate;
    ASTSession * _session;
    NSMutableDictionary * _taskMap;
    <NSURLRequestFactory> * _urlFactory;
    NSURLSession * _urlSession;
}

@property (readonly, copy) NSString *debugDescription;
@property <ASTUploadClientDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property ASTSession *session;
@property (readonly) Class superclass;
@property (retain) NSMutableDictionary *taskMap;
@property (nonatomic, readonly) NSArray *uploadStatus;
@property (nonatomic, retain) <NSURLRequestFactory> *urlFactory;
@property (nonatomic, retain) NSURLSession *urlSession;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)cancelAll;
- (void)cancelUploadWithId:(unsigned long long)arg1;
- (id)delegate;
- (id)initWithASTSession:(id)arg1 withDelegate:(id)arg2;
- (id)initWithASTSession:(id)arg1 withURLSession:(id)arg2 withURLRequestFactory:(id)arg3 withDelegate:(id)arg4;
- (id)initWithURLSession:(id)arg1 withURLRequestFactory:(id)arg2 withDelegate:(id)arg3;
- (unsigned long long)queueUploadWithSourceData:(id)arg1 andExtra:(id)arg2;
- (unsigned long long)queueUploadWithSourceUrl:(id)arg1 andExtra:(id)arg2;
- (id)session;
- (void)setDelegate:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setTaskMap:(id)arg1;
- (void)setUrlFactory:(id)arg1;
- (void)setUrlSession:(id)arg1;
- (id)taskMap;
- (id)uploadStatus;
- (void)uploadTaskDidComplete:(unsigned long long)arg1 withResponse:(id)arg2 andError:(id)arg3;
- (unsigned long long)uploadWithObject:(id)arg1 andExtra:(id)arg2;
- (id)urlFactory;
- (id)urlSession;

@end
