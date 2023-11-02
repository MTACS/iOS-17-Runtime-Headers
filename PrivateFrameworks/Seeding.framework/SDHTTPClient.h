
@interface SDHTTPClient : NSObject <NSURLSessionDelegate> {
    NSObject<OS_os_log> * _log;
    NSURLSession * _urlSession;
}

@property (nonatomic, readonly) NSURL *baseURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSObject<OS_os_log> *log;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURLSession *urlSession;

+ (id)_seedingSessionConfiguration;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)baseURL;
- (id)init;
- (id)log;
- (id)overrideServerURL;
- (void)setLog:(id)arg1;
- (id)urlSession;

@end
