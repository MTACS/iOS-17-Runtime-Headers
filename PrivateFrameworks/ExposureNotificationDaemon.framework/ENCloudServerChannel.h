
@interface ENCloudServerChannel : NSObject <NSURLSessionDelegate> {
    NSHTTPCookieStorage * _cookieStorage;
    NSOperationQueue * _queue;
    NSMutableDictionary * _requests;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSURLSession * _session;
    NSURLSessionConfiguration * _sessionConfig;
    NSURLSession * _sourceApplicationSession;
    NSURLSessionConfiguration * _sourceApplicationSessionConfig;
}

@property (nonatomic, retain) NSHTTPCookieStorage *cookieStorage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSOperationQueue *queue;
@property (nonatomic, retain) NSMutableDictionary *requests;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, retain) NSURLSession *session;
@property (nonatomic, retain) NSURLSessionConfiguration *sessionConfig;
@property (nonatomic, retain) NSURLSession *sourceApplicationSession;
@property (nonatomic, retain) NSURLSessionConfiguration *sourceApplicationSessionConfig;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)cookieStorage;
- (void)dealloc;
- (void)enqueueRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)init;
- (id)queue;
- (id)requests;
- (id)serialQueue;
- (id)session;
- (id)sessionConfig;
- (void)setCookieStorage:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRequests:(id)arg1;
- (void)setSerialQueue:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setSessionConfig:(id)arg1;
- (void)setSourceApplicationSession:(id)arg1;
- (void)setSourceApplicationSessionConfig:(id)arg1;
- (id)sourceApplicationSession;
- (id)sourceApplicationSessionConfig;

@end
