
@interface HLPURLSessionItem : NSObject <HLPURLSessionTaskDelegate> {
    bool  _cancelled;
    id /* block */  _completionHanlder;
    HLPURLSessionTask * _sessionTask;
}

@property (getter=isCancelled, nonatomic) bool cancelled;
@property (nonatomic, readonly) id /* block */ completionHanlder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HLPURLSessionTask *sessionTask;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)URLSessionSessionTask:(id)arg1 didCompleteWithError:(id)arg2;
- (void)cancel;
- (id /* block */)completionHanlder;
- (void)dealloc;
- (id)initWithSessionTask:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)isCancelled;
- (void)notifyWithSessionTask:(id)arg1 error:(id)arg2;
- (void)resume;
- (id)sessionTask;
- (void)setCancelled:(bool)arg1;
- (void)setSessionTask:(id)arg1;
- (long long)state;

@end
