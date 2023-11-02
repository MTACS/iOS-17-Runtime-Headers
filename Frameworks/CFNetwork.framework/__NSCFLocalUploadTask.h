
@interface __NSCFLocalUploadTask : __NSCFLocalDataTask <NSURLSessionUploadTaskSubclass> {
    id /* block */  _resumeCallback;
    bool  _startedProducingResumeData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) id /* block */ resumeCallback;
@property (readonly) Class superclass;

- (void)_onqueue_cancelByProducingResumeData:(id /* block */)arg1;
- (void)_task_onqueue_didFinish;
- (void)cancelByProducingResumeData:(id /* block */)arg1;
- (void)dealloc;
- (id)initWithResumeData:(id)arg1 ident:(unsigned long long)arg2 taskGroup:(id)arg3;
- (bool)isKindOfClass:(Class)arg1;
- (id /* block */)resumeCallback;
- (void)setResumeCallback:(id /* block */)arg1;

@end
