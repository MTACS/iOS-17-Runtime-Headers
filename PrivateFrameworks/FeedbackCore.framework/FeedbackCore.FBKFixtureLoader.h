
@interface FeedbackCore.FBKFixtureLoader : NSObject <FBKForegroundDataClient, FBKLoginManagerDelegate> {
    void Log;
    void bundle;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void testFixtureDir;
}

- (void).cxx_destruct;
- (void)dataForURL:(id)arg1 success:(id /* block */)arg2 error:(id /* block */)arg3;
- (void)dataForURL:(id)arg1 successWithResponse:(id /* block */)arg2 error:(id /* block */)arg3;
- (void)dataForURLRequest:(id)arg1 success:(id /* block */)arg2 error:(id /* block */)arg3;
- (void)dataForURLRequest:(id)arg1 successWithResponse:(id /* block */)arg2 error:(id /* block */)arg3;
- (void)deleteAtURL:(id)arg1 parameters:(id)arg2 encoding:(unsigned long long)arg3 success:(id /* block */)arg4 error:(id /* block */)arg5;
- (void)deleteResourceAtURL:(id)arg1 success:(id /* block */)arg2 error:(id /* block */)arg3;
- (void)didLogInWithLoginUserInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)didLogOutWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initForBundle:(id)arg1;
- (void)jsonForURL:(id)arg1 success:(id /* block */)arg2 error:(id /* block */)arg3;
- (void)jsonForURLRequest:(id)arg1 success:(id /* block */)arg2 error:(id /* block */)arg3;
- (void)postToURL:(id)arg1 parameters:(id)arg2 encoding:(unsigned long long)arg3 success:(id /* block */)arg4 error:(id /* block */)arg5;
- (void)putToURL:(id)arg1 parameters:(id)arg2 encoding:(unsigned long long)arg3 success:(id /* block */)arg4 error:(id /* block */)arg5;

@end
