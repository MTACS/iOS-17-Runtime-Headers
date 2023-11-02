
@interface AIASSession : NSObject <NSURLSessionDelegate> {
    NSURLSession * _URLSession;
    bool  _invalidated;
    NSMutableDictionary * _taskMap;
}

@property (retain) NSURLSession *URLSession;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool invalidated;
@property (readonly) Class superclass;
@property (retain) NSMutableDictionary *taskMap;

- (void).cxx_destruct;
- (id)URLSession;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)getRequest:(id)arg1;
- (id)init;
- (void)invalidateAndCancel;
- (bool)invalidated;
- (id)requestWithURL:(id)arg1 data:(struct __CFDictionary { }*)arg2 clientInfo:(id)arg3 proxiedClientInfo:(id)arg4 companionClientInfo:(id)arg5 appleITeamId:(id)arg6 appleIClientId:(id)arg7 additionalHeaders:(id)arg8;
- (void)setInvalidated:(bool)arg1;
- (void)setTaskMap:(id)arg1;
- (void)setURLSession:(id)arg1;
- (id)taskMap;

@end
